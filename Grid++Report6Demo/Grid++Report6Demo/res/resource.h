//stamp:0755681285fa64cb
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
			}
			const TCHAR * XML_MAINWND;
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
		{L"btn_close",65537},
		{L"btn_max",65538},
		{L"btn_min",65540},
		{L"btn_restore",65539},
		{L"edt_desc",65545},
		{L"gridpp_display",65546},
		{L"gridpp_print",65547},
		{L"preview",65544},
		{L"radio_blue",103},
		{L"radio_def",100},
		{L"radio_green",101},
		{L"radio_preview",65541},
		{L"radio_query",65542},
		{L"radio_red",102},
		{L"template_tree",65543},
		{L"txt_title",65536}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			btn_close = namedXmlID[1].strName;
			btn_max = namedXmlID[2].strName;
			btn_min = namedXmlID[3].strName;
			btn_restore = namedXmlID[4].strName;
			edt_desc = namedXmlID[5].strName;
			gridpp_display = namedXmlID[6].strName;
			gridpp_print = namedXmlID[7].strName;
			preview = namedXmlID[8].strName;
			radio_blue = namedXmlID[9].strName;
			radio_def = namedXmlID[10].strName;
			radio_green = namedXmlID[11].strName;
			radio_preview = namedXmlID[12].strName;
			radio_query = namedXmlID[13].strName;
			radio_red = namedXmlID[14].strName;
			template_tree = namedXmlID[15].strName;
			txt_title = namedXmlID[16].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * btn_close;
		 const wchar_t * btn_max;
		 const wchar_t * btn_min;
		 const wchar_t * btn_restore;
		 const wchar_t * edt_desc;
		 const wchar_t * gridpp_display;
		 const wchar_t * gridpp_print;
		 const wchar_t * preview;
		 const wchar_t * radio_blue;
		 const wchar_t * radio_def;
		 const wchar_t * radio_green;
		 const wchar_t * radio_preview;
		 const wchar_t * radio_query;
		 const wchar_t * radio_red;
		 const wchar_t * template_tree;
		 const wchar_t * txt_title;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int btn_close	=	65537;
		const static int btn_max	=	65538;
		const static int btn_min	=	65540;
		const static int btn_restore	=	65539;
		const static int edt_desc	=	65545;
		const static int gridpp_display	=	65546;
		const static int gridpp_print	=	65547;
		const static int preview	=	65544;
		const static int radio_blue	=	103;
		const static int radio_def	=	100;
		const static int radio_green	=	101;
		const static int radio_preview	=	65541;
		const static int radio_query	=	65542;
		const static int radio_red	=	102;
		const static int template_tree	=	65543;
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
