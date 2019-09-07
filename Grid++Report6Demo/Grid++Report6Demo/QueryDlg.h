#pragma once
#include "GridppReport/GridppReportEventImpl.h"
using namespace SOUI;
class CQueryDlg : public SHostDialog
{
public:
	CQueryDlg();
	CQueryDlg(IGridppReportPtr GridppReportPtr);
	~CQueryDlg();
	void OnClose();
	void OnMaximize();
	void OnRestore();
	void OnMinimize();
	void OnSize(UINT nType, CSize size);
	int OnCreate(LPCREATESTRUCT lpCreateStruct);
	BOOL OnInitDialog(HWND wndFocus, LPARAM lInitParam);
	void InitGridppCtrl();
	void OnPrint();
	void OnPrintPreview();
	void OnRadioPagingMode(EventArgs* pEvt);
	void OnApplyRowsPerPage();
	void OnStatusChangeDisplayViewer();
	void OnPreviewLine();
	void OnFindTextChanged(EventArgs* pEvt);
	void OnFindText();
	void OnFindContinue();
	void OnFindDlg();
protected:
	//soui消息
	EVENT_MAP_BEGIN()
		EVENT_NAME_COMMAND(L"btn_close", OnClose)
		EVENT_NAME_COMMAND(L"btn_min", OnMinimize)
		EVENT_NAME_COMMAND(L"btn_max", OnMaximize)
		EVENT_NAME_COMMAND(L"btn_restore", OnRestore)
		EVENT_NAME_COMMAND(R.name.btn_print, OnPrint)
		EVENT_NAME_COMMAND(R.name.btn_print_preview, OnPrintPreview)
		EVENT_ID_RANGE_HANDLER(R.id.radio_none, R.id.radio_spec, EVT_CMD, OnRadioPagingMode)
		EVENT_NAME_COMMAND(R.name.btn_apply, OnApplyRowsPerPage)
		EVENT_NAME_COMMAND(R.name.chk_vPageline, OnPreviewLine)
		EVENT_NAME_HANDLER(R.name.edt_find_txt, EVT_RE_NOTIFY, OnFindTextChanged)
		EVENT_NAME_COMMAND(R.name.btn_find, OnFindText)
		EVENT_NAME_COMMAND(R.name.btn_find_continue, OnFindContinue)
		EVENT_NAME_COMMAND(R.name.btn_find_dlg, OnFindDlg)
	EVENT_MAP_END()

		//HostWnd真实窗口消息处理
	BEGIN_MSG_MAP_EX(CMainDlg)
		MSG_WM_CREATE(OnCreate)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_CLOSE(OnClose)
		MSG_WM_SIZE(OnSize)
		CHAIN_MSG_MAP(SHostDialog)
		REFLECT_NOTIFICATIONS_EX()
	END_MSG_MAP()
private:
	BOOL			m_bLayoutInited;
	IGridppReportPtr m_pGridppReport;
	IGRDisplayViewerPtr m_pDisplayViewer;
};

