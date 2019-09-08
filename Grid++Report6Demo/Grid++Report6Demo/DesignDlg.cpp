#include "stdafx.h"
#include "DesignDlg.h"

CDesignDlg::CDesignDlg()
	: SHostDialog(_T("LAYOUT:XML_DESIGN_DLG"))
{
	m_bLayoutInited = FALSE;
}

CDesignDlg::CDesignDlg(IGridppReportPtr reportPtr, IGRPrintViewerPtr printViewerPtr, SStringT templateFile)
	: SHostDialog(_T("LAYOUT:XML_DESIGN_DLG"))
	, m_pGridppReport(reportPtr)
	, m_pMainPrintViewer(printViewerPtr)
	, m_TemplateFile(templateFile)
{
	m_bLayoutInited = FALSE;
}

void CDesignDlg::OnClose()
{
	SHostDialog::OnCancel();
}

void CDesignDlg::OnMaximize()
{
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE);
}

void CDesignDlg::OnRestore()
{
	SendMessage(WM_SYSCOMMAND, SC_RESTORE);
}

void CDesignDlg::OnMinimize()
{
	SendMessage(WM_SYSCOMMAND, SC_MINIMIZE);
}

void CDesignDlg::OnSize(UINT nType, CSize size)
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

int CDesignDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	SetMsgHandled(FALSE);
	return 0;
}

BOOL CDesignDlg::OnInitDialog(HWND wndFocus, LPARAM lInitParam)
{
	m_bLayoutInited = TRUE;
	InitGridppCtrl();
	return FALSE;
}

void CDesignDlg::InitGridppCtrl()
{
	//Éè¼ÆÆ÷
	SActiveX* pDesigner = FindChildByName2<SActiveX>(R.name.gridpp_designer);
	LPUNKNOWN spUnk = pDesigner->GetIUnknown();
	spUnk->QueryInterface(__uuidof(IGRDesigner), (void**)(&m_pDesigner));
	ATLASSERT(m_pDesigner != NULL);

	m_pDesigner->Report = m_pGridppReport;
	
	m_pIEventDesignEventHandler = new IEventDesignEventHandler(*this, m_pDesigner, &CDesignDlg::OnEventFiringObjectInvoke);
}

void CDesignDlg::OnDestroy()
{
	__super::OnDestroy();

	m_pMainPrintViewer->Stop();
	m_pDesigner->Post();
	m_pMainPrintViewer->Start();

	if (m_pIEventDesignEventHandler)
	{
		m_pIEventDesignEventHandler->ShutdownConnectionPoint();
		m_pIEventDesignEventHandler->Release();
		m_pIEventDesignEventHandler = NULL;
	}
}

HRESULT CDesignDlg::OnEventFiringObjectInvoke(IEventDesignEventHandler* pEventHandler, DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS* pdispparams, VARIANT* pvarResult, EXCEPINFO* pexcepinfo, UINT* puArgErr)
{
	if (dispidMember == 0x06)  // Event1 event.
	{
		OpenReportGrdesigner1();
	}
	else if (dispidMember == 0x07)
	{
		SaveReportGrdesigner1();
	}

	return S_OK;
}

void CDesignDlg::OpenReportGrdesigner1()
{
	m_pDesigner->DefaultAction = FALSE;

	m_pDesigner->Reload();
}

void CDesignDlg::SaveReportGrdesigner1()
{
	m_pDesigner->DefaultAction = FALSE;

	m_pMainPrintViewer->Stop();

	m_pDesigner->Post();
	m_pGridppReport->SaveToFile((LPCTSTR)m_TemplateFile);

	m_pMainPrintViewer->Start();
}
