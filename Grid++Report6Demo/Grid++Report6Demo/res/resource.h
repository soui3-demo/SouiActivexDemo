//stamp:0b00681f5e3d735f
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
				XML_QUERY_DLG = _T("LAYOUT:XML_QUERY_DLG");
				XML_DESIGN_DLG = _T("LAYOUT:XML_DESIGN_DLG");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * XML_QUERY_DLG;
			const TCHAR * XML_DESIGN_DLG;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _IMG{
			public:
			_IMG(){
				png_treeicon = _T("IMG:png_treeicon");
			}
			const TCHAR * png_treeicon;
		}IMG;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
			}
			const TCHAR * ICON_LOGO;
		}ICON;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"_name_start",65535},
		{L"btn_apply",65558},
		{L"btn_close",65537},
		{L"btn_design",65545},
		{L"btn_find",65554},
		{L"btn_find_continue",65556},
		{L"btn_find_dlg",65555},
		{L"btn_max",65538},
		{L"btn_min",65540},
		{L"btn_print",65550},
		{L"btn_print_preview",65551},
		{L"btn_query",65544},
		{L"btn_restore",65539},
		{L"chk_vPageline",65552},
		{L"edt_desc",65546},
		{L"edt_find_txt",65553},
		{L"edt_paging_count",65557},
		{L"gridpp_designer",65560},
		{L"gridpp_display",65547},
		{L"gridpp_print",65548},
		{L"radio_blue",103},
		{L"radio_def",100},
		{L"radio_each",101},
		{L"radio_green",101},
		{L"radio_none",100},
		{L"radio_preview",65541},
		{L"radio_query",65542},
		{L"radio_red",102},
		{L"radio_spec",102},
		{L"template_tree",65543},
		{L"title",65549},
		{L"txt_hint",65559},
		{L"txt_title",65536}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			btn_apply = namedXmlID[1].strName;
			btn_close = namedXmlID[2].strName;
			btn_design = namedXmlID[3].strName;
			btn_find = namedXmlID[4].strName;
			btn_find_continue = namedXmlID[5].strName;
			btn_find_dlg = namedXmlID[6].strName;
			btn_max = namedXmlID[7].strName;
			btn_min = namedXmlID[8].strName;
			btn_print = namedXmlID[9].strName;
			btn_print_preview = namedXmlID[10].strName;
			btn_query = namedXmlID[11].strName;
			btn_restore = namedXmlID[12].strName;
			chk_vPageline = namedXmlID[13].strName;
			edt_desc = namedXmlID[14].strName;
			edt_find_txt = namedXmlID[15].strName;
			edt_paging_count = namedXmlID[16].strName;
			gridpp_designer = namedXmlID[17].strName;
			gridpp_display = namedXmlID[18].strName;
			gridpp_print = namedXmlID[19].strName;
			radio_blue = namedXmlID[20].strName;
			radio_def = namedXmlID[21].strName;
			radio_each = namedXmlID[22].strName;
			radio_green = namedXmlID[23].strName;
			radio_none = namedXmlID[24].strName;
			radio_preview = namedXmlID[25].strName;
			radio_query = namedXmlID[26].strName;
			radio_red = namedXmlID[27].strName;
			radio_spec = namedXmlID[28].strName;
			template_tree = namedXmlID[29].strName;
			title = namedXmlID[30].strName;
			txt_hint = namedXmlID[31].strName;
			txt_title = namedXmlID[32].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * btn_apply;
		 const wchar_t * btn_close;
		 const wchar_t * btn_design;
		 const wchar_t * btn_find;
		 const wchar_t * btn_find_continue;
		 const wchar_t * btn_find_dlg;
		 const wchar_t * btn_max;
		 const wchar_t * btn_min;
		 const wchar_t * btn_print;
		 const wchar_t * btn_print_preview;
		 const wchar_t * btn_query;
		 const wchar_t * btn_restore;
		 const wchar_t * chk_vPageline;
		 const wchar_t * edt_desc;
		 const wchar_t * edt_find_txt;
		 const wchar_t * edt_paging_count;
		 const wchar_t * gridpp_designer;
		 const wchar_t * gridpp_display;
		 const wchar_t * gridpp_print;
		 const wchar_t * radio_blue;
		 const wchar_t * radio_def;
		 const wchar_t * radio_each;
		 const wchar_t * radio_green;
		 const wchar_t * radio_none;
		 const wchar_t * radio_preview;
		 const wchar_t * radio_query;
		 const wchar_t * radio_red;
		 const wchar_t * radio_spec;
		 const wchar_t * template_tree;
		 const wchar_t * title;
		 const wchar_t * txt_hint;
		 const wchar_t * txt_title;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int btn_apply	=	65558;
		const static int btn_close	=	65537;
		const static int btn_design	=	65545;
		const static int btn_find	=	65554;
		const static int btn_find_continue	=	65556;
		const static int btn_find_dlg	=	65555;
		const static int btn_max	=	65538;
		const static int btn_min	=	65540;
		const static int btn_print	=	65550;
		const static int btn_print_preview	=	65551;
		const static int btn_query	=	65544;
		const static int btn_restore	=	65539;
		const static int chk_vPageline	=	65552;
		const static int edt_desc	=	65546;
		const static int edt_find_txt	=	65553;
		const static int edt_paging_count	=	65557;
		const static int gridpp_designer	=	65560;
		const static int gridpp_display	=	65547;
		const static int gridpp_print	=	65548;
		const static int radio_blue	=	103;
		const static int radio_def	=	100;
		const static int radio_each	=	101;
		const static int radio_green	=	101;
		const static int radio_none	=	100;
		const static int radio_preview	=	65541;
		const static int radio_query	=	65542;
		const static int radio_red	=	102;
		const static int radio_spec	=	102;
		const static int template_tree	=	65543;
		const static int title	=	65549;
		const static int txt_hint	=	65559;
		const static int txt_title	=	65536;
		}id;

		class _string{
		public:
		const static int designer	=	0;
		const static int displayViewer	=	1;
		const static int printViewer	=	2;
		const static int title	=	3;
		const static int ver	=	4;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int border	=	1;
		const static int gray	=	2;
		const static int green	=	3;
		const static int helper	=	4;
		const static int prompt	=	5;
		const static int red	=	6;
		const static int sms_header	=	7;
		const static int text_body	=	8;
		const static int text_disable	=	9;
		const static int text_slave	=	10;
		const static int theme	=	11;
		const static int warning	=	12;
		const static int white	=	13;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
