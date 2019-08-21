// MainDlg.cpp : implementation of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MainDlg.h"	
#include "GridppReport\GridppReportEventImpl.c"
#include <vector>

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


void CMainDlg::OnPreView()
{
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
	SActiveX* pActivex = FindChildByName2<SActiveX>("ax_gridpp");

	m_pGridppReport.CreateInstance(__uuidof(GridppReport));
	ATLASSERT(m_pGridppReport != NULL);
	LPUNKNOWN spUnk = pActivex->GetIUnknown();
	spUnk->QueryInterface(__uuidof(IGRDisplayViewer), (void**)(&m_pDisplayViewer));
	ATLASSERT(m_pDisplayViewer != NULL);
	
	m_pDisplayViewer->Resortable = true;
	
	m_pDisplayViewer->ShowToolbar = true;
	m_pDisplayViewer->RowsPerPage = 1000;
	m_pDisplayViewer->RowSelection = false;
}

//TODO:消息映射
void CMainDlg::OnClose()
{
	CSimpleWnd::DestroyWindow();
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

