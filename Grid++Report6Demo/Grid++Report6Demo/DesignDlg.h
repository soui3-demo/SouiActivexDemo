// DesignDlg.h : CDesignDlg 的声明

#pragma once

#include <atlhost.h>
#include "GridppReport/GridppReportEventImpl.h"
#include "TEventHandler.h"
using namespace SOUI;
using namespace TEventHandlerNamespace;
class CDesignDlg;

typedef TEventHandler<CDesignDlg, IGRDesigner, _IGRDesignerEvents> IEventDesignEventHandler;
class CDesignDlg : public SHostDialog
{
public:
	CDesignDlg();
	CDesignDlg(IGridppReportPtr reportPtr, IGRPrintViewerPtr printViewerPtr, SStringT templateFile);
	void OnClose();
	void OnMaximize();
	void OnRestore();
	void OnMinimize();
	void OnSize(UINT nType, CSize size);
	int OnCreate(LPCREATESTRUCT lpCreateStruct);
	BOOL OnInitDialog(HWND wndFocus, LPARAM lInitParam);
	void InitGridppCtrl();
	void OnDestroy();
protected:
	//soui消息
	EVENT_MAP_BEGIN()
		EVENT_NAME_COMMAND(L"btn_close", OnClose)
		EVENT_NAME_COMMAND(L"btn_min", OnMinimize)
		EVENT_NAME_COMMAND(L"btn_max", OnMaximize)
		EVENT_NAME_COMMAND(L"btn_restore", OnRestore)
	EVENT_MAP_END()

		//HostWnd真实窗口消息处理
	BEGIN_MSG_MAP_EX(CMainDlg)
		MSG_WM_CREATE(OnCreate)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_CLOSE(OnClose)
		MSG_WM_SIZE(OnSize)
		MSG_WM_DESTROY(OnDestroy)
		CHAIN_MSG_MAP(SHostDialog)
		REFLECT_NOTIFICATIONS_EX()
	END_MSG_MAP()


private:
	BOOL			m_bLayoutInited;
	IGridppReportPtr m_pGridppReport;
	SStringT m_TemplateFile;
	IGRPrintViewerPtr m_pMainPrintViewer;
	IGRDesignerPtr m_pDesigner;
	IEventDesignEventHandler* m_pIEventDesignEventHandler;

	HRESULT OnEventFiringObjectInvoke
	(
		IEventDesignEventHandler* pEventHandler,
		DISPID dispidMember,
		REFIID riid,
		LCID lcid,
		WORD wFlags,
		DISPPARAMS* pdispparams,
		VARIANT* pvarResult,
		EXCEPINFO* pexcepinfo,
		UINT* puArgErr
	);


	void OpenReportGrdesigner1();
	void SaveReportGrdesigner1();
};
