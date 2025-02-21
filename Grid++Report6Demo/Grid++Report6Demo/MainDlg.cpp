// MainDlg.cpp : implementation of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MainDlg.h"	
#include "GridppReport\GridppReportEventImpl.c"
#include <vector>
#include <fstream>
#include "GetPath.h"
#include "QueryDlg.h"
#include "DesignDlg.h"
typedef struct MedInfo
{
	int hisid;
	std::string medName;
	std::string unit;
	std::string factory;
}MedInfo;

std::vector<MedInfo> g_MedVec;


class CFillReportEvent : public CGridppReportEventImpl
{
public:
	virtual void Initialize()
	{
		m_field_medHisId = m_pGridppReport->FieldByName("MEDHISID");
		m_field_medname = m_pGridppReport->FieldByName("MEDNAME");
		m_field_medunit = m_pGridppReport->FieldByName("MEDUNIT");
		m_field_factory = m_pGridppReport->FieldByName("FACTORY");
		m_memobox_hospitalName = m_pGridppReport->ControlByName("MemoBox_HospitalName");
		m_memobox_hospitalName->AsMemoBox->Text = _T("XX医院");
	}

	virtual void FetchRecord()
	{
		for (auto iter = g_MedVec.cbegin(); iter != g_MedVec.cend(); ++iter)
		{
			m_pGridppReport->DetailGrid->Recordset->Append();
			m_field_medname->AsString = iter->medName.c_str();
			m_field_medunit->AsString = iter->unit.c_str();
			m_field_factory->AsString = iter->factory.c_str();
			m_field_medHisId->AsInteger = iter->hisid;

			m_pGridppReport->DetailGrid->Recordset->Post();
		}

	}

	void SetGridppReportPtr(IGridppReportPtr& gridppReportPtr)
	{
		m_pGridppReport = gridppReportPtr;
	}

private:
	IGRFieldPtr m_field_medHisId;
	IGRFieldPtr m_field_medname;
	IGRFieldPtr m_field_medunit;
	IGRFieldPtr m_field_factory;
	IGRControlPtr m_memobox_hospitalName;
	IGRColumnContentPtr m_pColumnContent;
	IGridppReportPtr m_pGridppReport;
};

CMainDlg::CMainDlg() : SHostWnd(_T("LAYOUT:XML_MAINWND"))
{
	m_bLayoutInited = FALSE;
	m_pReportEvents = nullptr;
}

CMainDlg::~CMainDlg()
{


}

int CMainDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	SetMsgHandled(FALSE);
	return 0;
}

BOOL CMainDlg::OnInitDialog(HWND hWnd, LPARAM lParam)
{
	m_bLayoutInited = TRUE;
	FillNodeitems();
	InitGridppCtrl();
	return 0;
}

void CMainDlg::FillReport()
{
	g_MedVec.clear();
	CComObject<CFillReportEvent>* pEvent;
	CComObject<CFillReportEvent>::CreateInstance(&pEvent);
	m_pReportEvents = pEvent;
	m_pReportEvents->AddRef();
	pEvent->SetGridppReportPtr(m_pGridppReport);

	MedInfo med;
	for (int i = 0; i < 100; ++i)
	{
		med.hisid = 1000 + i;
		med.medName = "阿莫西林";
		med.unit = "10mg/片";
		med.factory = "江南皮革厂";
		g_MedVec.push_back(med);
	}
}


void CMainDlg::FillNodeitems(void)
{
	STreeCtrl* tree = FindChildByName2<STreeCtrl>("template_tree");
	tree->RemoveAllItems();
	SStringA filename = "ReportList.txt";

	SOUI::HTREEITEM hTypeNode = NULL;
	const int BufferSize = 64;
	char Buff[BufferSize];
	WCHAR wBuff[BufferSize];

	std::ifstream ifs(filename, std::ios_base::in);
	while (!ifs.eof())
	{
		std::ws(ifs);

		ifs.getline(Buff, BufferSize);
		if (Buff[0] == '\0')
			continue;

		int Len = ::MultiByteToWideChar(936, 0, Buff, (int)strlen(Buff), wBuff, BufferSize);
		wBuff[Len] = '\0';
		if (wBuff[0] == '>')
		{
			hTypeNode = tree->InsertItem(wBuff, 0, 1, 0, STVI_ROOT, STVI_LAST);
		}
		else
		{
			tree->InsertItem(wBuff, 2, 2, 0, hTypeNode, STVI_LAST);
		}

		if (hTypeNode != NULL)
			tree->Expand(hTypeNode, TVE_COLLAPSE);
		
	}
	//SEdit
}

void CMainDlg::OnTreeSelChanged(EventArgs* pEvt)
{
	EventTCSelChanged* p = sobj_cast<EventTCSelChanged>(pEvt);
	STreeCtrl* pTree = sobj_cast<STreeCtrl>(pEvt->sender);
	if (!pTree->ItemHasChildren(p->hNewSel))
	{
		SRadioBox* radio_preview = FindChildByName2<SRadioBox>(R.name.radio_preview);
		bool IsPreviewMode = radio_preview->IsChecked();

		m_pPrintViewer->Stop();
		m_pDisplayViewer->Stop();
		SStringT temp;
		pTree->GetItemText(p->hNewSel, temp);
		m_TemplateFile = GetReportTemplatePath() + temp + _T(".grf");

		m_pGridppReport->LoadFromFile((LPCTSTR)m_TemplateFile);
		//设置与数据源的连接串，因为在设计时指定的数据库路径是绝对路径。
		SStringT connStr = GetDatabaseConnectionString();
		if (m_pGridppReport->DetailGrid != NULL)
		{
			m_pGridppReport->DetailGrid->Recordset->ConnectionString = (LPCTSTR)connStr;
			m_pGridppReport->ConnectionString = L"";
		}
		else
		{
			m_pGridppReport->ConnectionString = (LPCTSTR)connStr;
		}
		SStringT WindowTitle = _T("Grid++Report各种格式报表演示 - ");
		WindowTitle += temp;
		SStatic* txt_title = FindChildByName2<SStatic>(R.name.txt_title);
		txt_title->SetWindowText(WindowTitle);

		SActiveX* pDisplay = FindChildByName2<SActiveX>(R.name.gridpp_display);
		SActiveX* pPrint = FindChildByName2<SActiveX>(R.name.gridpp_print);

		//SetDlgItemText(IDC_MEMO, m_pGridppReport->Description);
		SEdit* edt_desc = FindChildByName2<SEdit>("edt_desc");
		edt_desc->SetWindowText(m_pGridppReport->Description);
		if (IsPreviewMode)
		{
			pDisplay->SetVisible(FALSE, TRUE);
			pPrint->SetVisible(TRUE, TRUE);
			m_pPrintViewer->Start();
		}
		else
		{
			pDisplay->SetVisible(TRUE, TRUE);
			pPrint->SetVisible(FALSE, TRUE);
			m_pDisplayViewer->Start();
		}
	}
}

void CMainDlg::OnRadioClick(EventArgs* pEvt)
{
	SActiveX* pDisplay = FindChildByName2<SActiveX>(R.name.gridpp_display);
	SActiveX* pPrint = FindChildByName2<SActiveX>(R.name.gridpp_print);
	if (wcscmp(pEvt->nameFrom, R.name.radio_preview) == 0)
	{
		pDisplay->SetVisible(FALSE, TRUE);
		pPrint->SetVisible(TRUE, TRUE);
		m_pPrintViewer->Start();
	}
	else
	{
		pDisplay->SetVisible(TRUE, TRUE);
		pPrint->SetVisible(FALSE, TRUE);
		m_pDisplayViewer->Start();
	}
}

void CMainDlg::OnChangeSkin(EventArgs* pEvt)
{
	switch (pEvt->idFrom)
	{
	case R.id.radio_def:
		m_pGridppReport->Utility->SetSkin(0, 0, 0, 1);
		break;
	
	case R.id.radio_green:
		m_pGridppReport->Utility->SetSkin(234, 255, 234, 1);
		break;
	case R.id.radio_red:
		m_pGridppReport->Utility->SetSkin(255, 234, 234, 1);
		break;

	case R.id.radio_blue:
		m_pGridppReport->Utility->SetSkin(234, 234, 255, 1);
		break;

	default:
		break;
	}
}

void CMainDlg::OnQuery()
{
	CQueryDlg dlg(m_pGridppReport);
	dlg.DoModal();
}

void CMainDlg::OnDesign()
{
	CDesignDlg dlg(m_pGridppReport, m_pPrintViewer, m_TemplateFile);
	dlg.DoModal();
}

void CMainDlg::OnPreView()
{
	return;
	if (nullptr != m_pReportEvents)
	{
		HRESULT hr = m_pReportEvents->DispEventUnadvise(m_pGridppReport, &__uuidof(_IGridppReportEvents));
		m_pReportEvents->Release();
		ATLASSERT(SUCCEEDED(hr));
		m_pReportEvents = nullptr;
	}
	//>>

	m_pDisplayViewer->Stop();
	//启动查询显示器的运行
	////创建事件响应对象
	//加载模板
	if (!m_pGridppReport->LoadFromFile(_T("test.grf")))
	{
		//加载失败
		SMessageBox(NULL, _T("加载报表模板失败"), _T("error"), MB_OK | MB_ICONERROR);
		return;
	}
	m_pGridppReport->DetailGrid->PrintAdaptFitText = true;

	FillReport();

	if (m_pReportEvents)
	{
		HRESULT hr = m_pReportEvents->DispEventAdvise(m_pGridppReport, &__uuidof(_IGridppReportEvents));
		ATLASSERT(SUCCEEDED(hr));
	}
	//查询显示器控件关联报表主对象
	m_pDisplayViewer->Report = m_pGridppReport;
	m_pDisplayViewer->Start();
}

void CMainDlg::InitGridppCtrl(void)
{
	//查询显示器
	SActiveX* pDisplay = FindChildByName2<SActiveX>(R.name.gridpp_display);
	LPUNKNOWN spUnk = pDisplay->GetIUnknown();
	spUnk->QueryInterface(__uuidof(IGRDisplayViewer), (void**)(&m_pDisplayViewer));
	ATLASSERT(m_pDisplayViewer != NULL);
	pDisplay->SetVisible(FALSE, TRUE);

	//预览显示器
	SActiveX* pPrint = FindChildByName2<SActiveX>(R.name.gridpp_print);
	spUnk = pPrint->GetIUnknown();
	spUnk->QueryInterface(__uuidof(IGRPrintViewer), (void**)(&m_pPrintViewer));
	ATLASSERT(m_pPrintViewer != NULL);

	//报表主对象
	m_pGridppReport.CreateInstance(__uuidof(GridppReport));
	ATLASSERT(m_pGridppReport != NULL);

	//查询显示器控件关联报表主对象
	m_pPrintViewer->Report = m_pGridppReport;
	m_pDisplayViewer->Report = m_pGridppReport;
}

//TODO:消息映射
void CMainDlg::OnClose()
{
	GetNative()->DestroyWindow();
}

void CMainDlg::OnMaximize()
{
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE);
}
void CMainDlg::OnRestore()
{
	SendMessage(WM_SYSCOMMAND, SC_RESTORE);
}
void CMainDlg::OnMinimize()
{
	SendMessage(WM_SYSCOMMAND, SC_MINIMIZE);
}

void CMainDlg::OnSize(UINT nType, CSize size)
{
	SetMsgHandled(FALSE);
	if (!m_bLayoutInited) return;
	
	SWindow *pBtnMax = FindChildByName(L"btn_max");
	SWindow *pBtnRestore = FindChildByName(L"btn_restore");
	if(!pBtnMax || !pBtnRestore) return;
	
	if (nType == SIZE_MAXIMIZED)
	{
		pBtnRestore->SetVisible(TRUE);
		pBtnMax->SetVisible(FALSE);
	}
	else if (nType == SIZE_RESTORED)
	{
		pBtnRestore->SetVisible(FALSE);
		pBtnMax->SetVisible(TRUE);
	}
}

