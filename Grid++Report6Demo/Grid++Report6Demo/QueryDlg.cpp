#include "stdafx.h"
#include "QueryDlg.h"

CQueryDlg::CQueryDlg()
	: SHostDialog(_T("LAYOUT:XML_QUERY_DLG"))
	, m_pGridppReport(NULL)
{
	m_bLayoutInited = FALSE;
}

CQueryDlg::CQueryDlg(IGridppReportPtr GridppReportPtr)
	: SHostDialog(_T("LAYOUT:XML_QUERY_DLG"))
	, m_pGridppReport(GridppReportPtr)
{

}

CQueryDlg::~CQueryDlg()
{

}

void CQueryDlg::OnClose()
{
	SHostDialog::OnCancel();
}

void CQueryDlg::OnMaximize()
{
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE);
}
void CQueryDlg::OnRestore()
{
	SendMessage(WM_SYSCOMMAND, SC_RESTORE);
}
void CQueryDlg::OnMinimize()
{
	SendMessage(WM_SYSCOMMAND, SC_MINIMIZE);
}

void CQueryDlg::OnSize(UINT nType, CSize size)
{
	SetMsgHandled(FALSE);
	if (!m_bLayoutInited) return;

	SWindow* pBtnMax = FindChildByName(L"btn_max");
	SWindow* pBtnRestore = FindChildByName(L"btn_restore");
	if (!pBtnMax || !pBtnRestore) return;

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

int CQueryDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	SetMsgHandled(FALSE);
	return 0;
}

BOOL CQueryDlg::OnInitDialog(HWND wndFocus, LPARAM lInitParam)
{
	m_bLayoutInited = TRUE;
	
	InitGridppCtrl();

	m_pDisplayViewer->Start();
	return FALSE;
}

void CQueryDlg::InitGridppCtrl()
{
	//查询显示器
	SActiveX* pDisplay = FindChildByName2<SActiveX>(R.name.gridpp_display);
	LPUNKNOWN spUnk = pDisplay->GetIUnknown();
	spUnk->QueryInterface(__uuidof(IGRDisplayViewer), (void**)(&m_pDisplayViewer));
	ATLASSERT(m_pDisplayViewer != NULL);

	m_pDisplayViewer->Report = m_pGridppReport;
}

void CQueryDlg::OnPrint()
{
	m_pGridppReport->Print(VARIANT_TRUE);
}

void CQueryDlg::OnPrintPreview()
{
	m_pGridppReport->PrintPreview(VARIANT_TRUE);
}

void CQueryDlg::OnRadioPagingMode(EventArgs* pEvt)
{
	BOOL FixRowsSelected = FALSE;
	switch (pEvt->idFrom)
	{
	case R.id.radio_none:
		m_pDisplayViewer->RowsPerPage = 0;
		break;

	case R.id.radio_each:
		m_pDisplayViewer->RowsPerPage = -1;
		break;
	case R.id.radio_spec:
		OnApplyRowsPerPage();
		FixRowsSelected = TRUE;
		break;
	default:
		break;
	}
	SEdit* pEdt = FindChildByName2<SEdit>(R.name.edt_paging_count);
	pEdt->EnableWindow(FixRowsSelected, TRUE);
	SImageButton* pBtn = FindChildByName2<SImageButton>(R.name.btn_apply);
	pBtn->EnableWindow(FixRowsSelected, TRUE);

	OnStatusChangeDisplayViewer();
}

void CQueryDlg::OnApplyRowsPerPage()
{
	SEdit* pRowSpecPage = FindChildByName2<SEdit>(R.name.edt_paging_count);
	int RowsPerPage = StrToInt(pRowSpecPage->GetWindowText());
	m_pDisplayViewer->RowsPerPage = RowsPerPage;
	OnStatusChangeDisplayViewer();
}

void CQueryDlg::OnStatusChangeDisplayViewer()
{
	SStringT strHint;
	if (m_pDisplayViewer->RowsPerPage == 0)
		strHint = _T("不分页");
	else
		strHint.Format(_T("第%d页 共%d页"), m_pDisplayViewer->CurPageNo, m_pDisplayViewer->PageCount);
		
	SStatic* pTxtHint = FindChildByName2<SStatic>(R.name.txt_hint);
	pTxtHint->SetWindowText(strHint);
}

void CQueryDlg::OnPreviewLine()
{
	SCheckBox* chk_vPageline = FindChildByName2<SCheckBox>(R.name.chk_vPageline);
	m_pDisplayViewer->ShowPreviewLine = chk_vPageline->IsChecked();
}

void CQueryDlg::OnFindTextChanged(EventArgs* pEvt)
{
	EventRENotify* _evtNotify = sobj_cast<EventRENotify>(pEvt);
	SASSERT(_evtNotify);
	if (_evtNotify->iNotify != EN_CHANGE)
	{
		return;
	}
	SEdit* pEdit = (SEdit*)_evtNotify->sender;
	SStringT str = pEdit->GetWindowText();
	SImageButton* pFind = FindChildByName2<SImageButton>(R.name.btn_find);

	if (str.IsEmpty())
	{
		pFind->EnableWindow(FALSE, TRUE);
		return;
	}

	pFind->EnableWindow(TRUE, TRUE);
}

void CQueryDlg::OnFindText()
{
	SEdit* pEdit = FindChildByName2<SEdit>(R.name.edt_find_txt);
	SStringT str = pEdit->GetWindowText();

	TCHAR SearchText[128] = { 0 };
	wcscpy(SearchText, str.GetBuffer(0));
	VARIANT_BOOL CaseSensitive = FALSE;
	VARIANT_BOOL WholeWord = FALSE;
	VARIANT_BOOL ToUp = FALSE;
	VARIANT_BOOL FromSelection = TRUE;
	VARIANT_BOOL ShowDlg = FALSE;
	VARIANT_BOOL ShowMsg = TRUE;

	VARIANT_BOOL Success = m_pDisplayViewer->Search(SearchText, CaseSensitive, WholeWord, ToUp, FromSelection, ShowDlg, ShowMsg);
}

void CQueryDlg::OnFindContinue()
{
	VARIANT_BOOL Success = m_pDisplayViewer->SearchAgain(TRUE);
}

void CQueryDlg::OnFindDlg()
{
	VARIANT_BOOL CaseSensitive = FALSE;
	VARIANT_BOOL WholeWord = FALSE;
	VARIANT_BOOL ToUp = FALSE;
	VARIANT_BOOL FromSelection = FALSE;
	VARIANT_BOOL ShowDlg = TRUE;
	VARIANT_BOOL ShowMsg = TRUE;

	VARIANT_BOOL Success = m_pDisplayViewer->Search("", CaseSensitive, WholeWord, ToUp, FromSelection, ShowDlg, ShowMsg);
	Success;

}