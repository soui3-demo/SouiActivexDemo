#pragma once

// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CGrdisplayviewer1 wrapper class

class CGrdisplayviewer1 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CGrdisplayviewer1)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x1B5EA181, 0xA38D, 0x4F42, { 0x88, 0xB2, 0x6A, 0xF7, 0x4C, 0xF6, 0xD6, 0xC0 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 

	}
// Attributes
public:
enum
{
    grstPageHeader = 1,
    grstReportHeader = 2,
    grstReportFooter = 3,
    grstPageFooter = 4,
    grstColumnTitle = 5,
    grstColumnContent = 6,
    grstGroupHeader = 7,
    grstGroupFooter = 8
}tagGRSectionType;
enum
{
    grctStaticBox = 1,
    grctShapeBox = 2,
    grctSystemVarBox = 3,
    grctFieldBox = 4,
    grctSummaryBox = 5,
    grctRichTextBox = 6,
    grctPictureBox = 7,
    grctMemoBox = 8,
    grctSubReport = 9,
    grctLine = 10,
    grctChart = 11,
    grctBarcode = 12,
    grctFreeGrid = 13
}tagGRControlType;
enum
{
    grbkNormal = 1,
    grbkTransparent = 2
}tagGRBackStyle;
enum
{
    grpsSolid = 0,
    grpsDash = 1,
    grpsDot = 2,
    grpsDashDot = 3,
    grpsDashDotDot = 4
}tagGRPenStyle;
enum
{
    grbsDrawLeft = 1,
    grbsDrawTop = 2,
    grbsDrawRight = 4,
    grbsDrawBottom = 8
}tagGRBorderStyle;
enum
{
    grasLeft = 1,
    grasTop = 2,
    grasRight = 4,
    grasBottom = 8
}tagGRAnchorStyle;
enum
{
    grdsNone = 0,
    grdsLeft = 1,
    grdsTop = 2,
    grdsRight = 3,
    grdsBottom = 4,
    grdsFill = 5
}tagGRDockStyle;
enum
{
    grcsNone = 0,
    grcsHorizontal = 1,
    grcsVertical = 2,
    grcsBoth = 3
}tagGRCenterStyle;
enum
{
    gracsLeft = 1,
    gracsRight = 2,
    gracsBoth = 3
}tagGRAlignColumnSideStyle;
enum
{
    grsmNever = 0,
    grsmAlways = 1,
    grsmWhenOverLapped = 2
}tagGRShiftMode;
enum
{
    grptForm = 1,
    grptContent = 2
}tagGRPrintType;
enum
{
    grdcDefault = 0,
    grdcArrow = 1,
    grdcMagnify = 2,
    grdcFinger = 3,
    grdcAffirm = 4,
    grdcNegative = 5
}tagGRDisplayCursor;
enum
{
    grtaTopLeft = 17,
    grtaTopCenter = 18,
    grtaTopRight = 20,
    grtaTopJustiy = 144,
    grtaBottomLeft = 65,
    grtaBottomCenter = 66,
    grtaBottomRight = 68,
    grtaBottomJustiy = 192,
    grtaMiddleLeft = 33,
    grtaMiddleCenter = 34,
    grtaMiddleRight = 36,
    grtaMiddleJustiy = 160
}tagGRTextAlign;
enum
{
    grtoDefault = 0,
    grtoU2DL2R0 = 5,
    grtoD2UL2R1 = 22,
    grtoU2DR2L0 = 9,
    grtoU2DR2L1 = 25,
    grtoInvert = 58,
    grtoL2RD2U0 = 38,
    grtoL2RD2U1 = 54
}tagGRTextOrientation;
enum
{
    grftString = 1,
    grftInteger = 2,
    grftFloat = 3,
    grftCurrency = 4,
    grftBoolean = 5,
    grftDateTime = 6,
    grftBinary = 7
}tagGRFieldType;
enum
{
    grctBarChart = 1,
    grctPieChart = 2,
    grctLineChart = 3,
    grctStackedBarChart = 4,
    grctXYScatterChart = 5,
    grctXYLineChart = 6,
    grctCurveLineChart = 7,
    grctXYCurveLineChart = 8,
    grctBubble = 9,
    grctStackedBar100Chart = 10,
    grctColumnChart = 11,
    grctStackedColumnChart = 12,
    grctStackedColumn100Chart = 13,
    grctStepBarChart = 4
}tagGRChartType;
enum
{
    grpmsNone = -1,
    grpmsSquare = 0,
    grpmsSquareCheck = 1,
    grpmsSquareCross = 2,
    grpmsCircle = 3,
    grpmsCirclePoint = 4,
    grpmsCircleCross = 5,
    grpmsDimond = 6,
    grpmsTriangle = 7,
    grpmsCross = 8,
    grpmsCross4 = 9,
    grpmsStar4 = 10,
    grpmsStar5 = 11,
    grpmsStar6 = 12,
    grpmsStar10 = 13
}tagGRPointMarkerStyle;
enum
{
    grsbtCircle = 1,
    grsbtEllipse = 2,
    grsbtRectangle = 3,
    grsbtRoundRect = 4,
    grsbtRoundSquare = 5,
    grsbtSquare = 6,
    grsbtLine = 7
}tagGRShapeBoxType;
enum
{
    grltTopLeftToBottomRight = 0,
    grltBottomLeftToTopRight = 1,
    grltTopLeftToTopRight = 2,
    grltMiddleLeftToMiddleRight = 3,
    grltBottomLeftToBottomRight = 4,
    grltTopLeftToBottomLeft = 5,
    grltTopCenterToBottomCenter = 6,
    grltTopRightToBottomRight = 7
}tagGRLineType;
enum
{
    grsvCurrentDateTime = 1,
    grsvPageCount = 2,
    grsvPageNumber = 3,
    grsvRecordNo = 4,
    grsvRowNo = 8,
    grsvRecordCount = 19,
    grsvGroupNo = 20,
    grsvGroupCount = 21,
    grsvGroupRowNo = 22,
    grsvGroupRowCount = 23,
    grsvGroupPageNo = 24,
    grsvGroupPageCount = 25,
    grsvGroupOrderNo = 9,
    grsvGroup1RowNo = 5,
    grsvGroup2RowNo = 6,
    grsvGroup3RowNo = 7,
    grsvGroup1PageNumber = 10,
    grsvGroup2PageNumber = 11,
    grsvGroup3PageNumber = 12,
    grsvGroup1PageCount = 13,
    grsvGroup2PageCount = 14,
    grsvGroup3PageCount = 15,
    grsvGroup1OrderNo = 16,
    grsvGroup2OrderNo = 17,
    grsvGroup3OrderNo = 18
}tagGRSystemVarType;
enum
{
    grsfSum = 1,
    grsfAvg = 2,
    grsfCount = 3,
    grsfMin = 4,
    grsfMax = 5,
    grsfVar = 6,
    grsfVarP = 7,
    grsfStdDev = 8,
    grsfStdDevP = 9,
    grsfAveDev = 10,
    grsfDevSq = 11,
    grsfCountBlank = 12,
    grsfCountA = 13,
    grsfDistinct = 14,
    grsfAvgA = 15,
    grsfMinN = 16,
    grsfMaxN = 17,
    grsfStrMin = 18,
    grsfStrMax = 19,
    grsfVarA = 20,
    grsfVarPA = 21,
    grsfStdDevA = 22,
    grsfStdDevPA = 23,
    grsfAveDevA = 24,
    grsfDevSqA = 25,
    grsfSumAbs = 26,
    grsfSumAcc = 27,
    grsfGroupSumAcc = 28
}tagGRSummaryFun;
enum
{
    grpaTopLeft = 1,
    grpaTopRight = 2,
    grpaCenter = 3,
    grpaBottomLeft = 4,
    grpaBottomRight = 5
}tagGRPictureAlignment;
enum
{
    grpsmClip = 1,
    grpsmStretch = 2,
    grpsmZoom = 3,
    grpsmEnsureFullView = 4,
    grpsmTile = 5
}tagGRPictureSizeMode;
enum
{
    grptmNone = 0,
    grptmOverlying = 1,
    grptmBackground = 2
}tagGRPictureTransparentMode;
enum
{
    grprmNone = 0,
    grprmLeft = 1,
    grprmRight = 2,
    grprmFlip = 3,
    grprmMirror = 4
}tagGRPictureRotateMode;
enum
{
    grptUnknown = 0,
    grptBMP = 1,
    grptGIF = 2,
    grptJPEG = 3,
    grptPNG = 4,
    grptICON = 5,
    grptTIFF = 6,
    grptWMF = 10,
    grptEMF = -1
}tagGRPictureType;
enum
{
    grsiChecked = -1,
    grsiUnchecked = -2,
    grsi3DChecked = -3,
    grsi3DUnchecked = -4,
    grsiAffirm = -5,
    grsiNegative = -6,
    grsiArrowDown = -7,
    grsiArrowUp = -8
}tagGRSystemImage;
enum
{
    grptString = 1,
    grptInteger = 2,
    grptFloat = 3,
    grptBoolean = 5,
    grptDateTime = 6
}tagGRParameterDataType;
enum
{
    grnpsNone = 1,
    grnpsBefore = 2,
    grnpsAfter = 3,
    grnpsBeforeAfter = 4
}tagGRNewPageStyle;
enum
{
    grprtAllPages = 1,
    grprtCurrentPage = 2,
    grprtSelectionPages = 3
}tagGRPrintRangeType;
enum
{
    grpptAllSelectionPages = 1,
    grpptOddSelectionPages = 2,
    grpptEvenSelectionPages = 3
}tagGRPrintPageType;
enum
{
    grdkDefault = 0,
    grdkSimplex = 1,
    grdkHorizontal = 3,
    grdkVertical = 2
}tagGRDuplexKind;
enum
{
    grpoDefault = 0,
    grpoPortrait = 1,
    grpoLandscape = 2
}tagGRPaperOrientation;
enum
{
    grpkDefault = 255,
    grpkCustom = 256,
    grpkLetter = 1,
    grpkLegal = 5,
    grpk10X14 = 16,
    grpk11X17 = 17,
    grpk12X11 = 90,
    grpkA3 = 8,
    grpkA4 = 9,
    grpkA4Small = 10,
    grpkA5 = 11,
    grpkA6 = 70,
    grpkB4 = 12,
    grpkB5 = 13,
    grpkB6 = 88,
    grpkCSheet = 24,
    grpkDSheet = 25,
    grpkEnvelope9 = 19,
    grpkEnvelope10 = 20,
    grpkEnvelope11 = 21,
    grpkEnvelope12 = 22,
    grpkEnvelope14 = 23,
    grpkEnvelopeC5 = 28,
    grpkEnvelopeC3 = 29,
    grpkEnvelopeC4 = 30,
    grpkEnvelopeC6 = 31,
    grpkEnvelopeC65 = 32,
    grpkEnvelopeB4 = 33,
    grpkEnvelopeB5 = 34,
    grpkEnvelopeB6 = 35,
    grpkEnvelopeDL = 27,
    grpkEnvelopeItaly = 36,
    grpkEnvelopeMonarch = 37,
    grpkEnvelopePersonal = 38,
    grpkESheet = 26,
    grpkExecutive = 7,
    grpkFanfold = 39,
    grpkFolio = 14,
    grpkLedger = 4,
    grpkLetterSmall = 2,
    grpkNote = 18,
    grpkP16K = 93,
    grpkP32K = 94,
    grpkQuarto = 15,
    grpkStatement = 6,
    grpkTabloid = 3
}tagGRPaperKind;
enum
{
    grpskDefault = 0,
    grpskAutomaticFeed = 7,
    grpskCassette = 14,
    grpskCustom = 256,
    grpskEnvelope = 5,
    grpskFormSource = 15,
    grpskLargeCapacity = 11,
    grpskLargeFormat = 10,
    grpskLower = 2,
    grpskManual = 4,
    grpskManualFeed = 6,
    grpskMiddle = 3,
    grpskSmallFormat = 9,
    grpskTractorFeed = 8,
    grpskUpper = 1
}tagGRPaperSourceKind;
enum
{
    grsp1Pages = 1,
    grsp2Pages = 2,
    grsp4Pages = 4,
    grsp6Pages = 6,
    grsp8Pages = 8,
    grsp16Pages = 16
}tagGRSheetPages;
enum
{
    grckDefault = 0,
    grckCollate = 1,
    grckNotCollate = 2
}tagGRCollateKind;
enum
{
    grsfText = 1,
    grsfBinary = 2,
    grsfBinBase64 = 3,
    grsfXML = 4
}tagGRStorageFormat;
enum
{
    grtemAnsi = 1,
    grtemUTF8 = 2,
    grtemUnicode = 3
}tagGRTextEncodeMode;
enum
{
    grmuCm = 1,
    grmuInch = 2
}tagGRUnit;
enum
{
    grstJScript = 1,
    grstVBScript = 2
}tagGRScriptType;
enum
{
    grrdmScreenView = 1,
    grrdmPrintGenerate = 2,
    grrdmIdle = 3
}tagGRReportDisplayMode;
enum
{
    grrsNone = 1,
    grrsOnPage = 2,
    grrsOnPageColumn = 4,
    grrsOnGroupHeader = 8,
    grrsOnGroupHeaderPage = 10
}tagGRRepeatStyle;
enum
{
    grpgsOnlyForm = 1,
    grpgsOnlyContent = 2,
    grpgsAll = 3,
    grpgsPreviewAll = 4
}tagGRPrintGenerateStyle;
enum
{
    gretXLS = 1,
    gretTXT = 2,
    gretHTM = 3,
    gretRTF = 4,
    gretPDF = 5,
    gretCSV = 6,
    gretIMG = 7
}tagGRExportType;
enum
{
    grspsoPaperMargin = 1,
    grspsoPaperKind = 2,
    grspsoPaperOrientation = 4,
    grspsoPaperSource = 8,
    grspsoSelectedPrinter = 16
}tagGRSharePrintSetupOption;
enum
{
    greitBMP = 1,
    greitPNG = 2,
    greitJPEG = 3,
    greitGIF = 4,
    greitTIFF = 5
}tagGRExportImageType;
enum
{
    grdtObject = 1,
    grdtJSON = 2
}tagGRDocType;
enum
{
    grbtCode25Intlv = 1,
    grbtCode25Ind = 2,
    grbtCode25Matrix = 3,
    grbtCode39 = 4,
    grbtCode39X = 5,
    grbtCode128A = 6,
    grbtCode128B = 7,
    grbtCode128C = 8,
    grbtCode93 = 9,
    grbtCode93X = 10,
    grbtCodeMSI = 11,
    grbtCodePostNet = 12,
    grbtCodeCodabar = 13,
    grbtCodeEAN8 = 14,
    grbtCodeEAN13 = 15,
    grbtCodeUPC_A = 16,
    grbtCodeUPC_E0 = 17,
    grbtCodeUPC_E1 = 18,
    grbtCodeUPC_Supp2 = 19,
    grbtCodeUPC_Supp5 = 20,
    grbtCodeEAN128A = 21,
    grbtCodeEAN128B = 22,
    grbtCodeEAN128C = 23,
    grbtCode128Auto = 24,
    grbtPDF417 = 50,
    grbtQRCode = 51,
    grbtDataMatrix = 52
}tagGRBarcodeType;
enum
{
    grsaNear = 1,
    grsaCenter = 2,
    grsaFar = 3
}tagGRStringAlignment;
enum
{
    grbcpNone = 1,
    grbcpAbove = 2,
    grbcpBelow = 3
}tagGRBarcodeCaptionPosition;
enum
{
    grbdLeftToRight = 1,
    grbdRightToLeft = 2,
    grbdTopToBottom = 3,
    grbdBottomToTop = 4
}tagGRBarcodeDirection;
enum
{
    grdtmxeAuto = 2,
    grdtmxeAscii = 3,
    grdtmxeC40 = 4,
    grdtmxeText = 5,
    grdtmxeX12 = 6,
    grdtmxeEdifact = 7,
    grdtmxeBase256 = 8
}tagGRDtmxEncoding;
enum
{
    grdtmxmsAuto = 2,
    grdtmxms10x10 = 4,
    grdtmxms12x12 = 5,
    grdtmxms14x14 = 6,
    grdtmxms16x16 = 7,
    grdtmxms18x18 = 8,
    grdtmxms20x20 = 9,
    grdtmxms22x22 = 10,
    grdtmxms24x24 = 11,
    grdtmxms26x26 = 12,
    grdtmxms32x32 = 13,
    grdtmxms36x36 = 14,
    grdtmxms40x40 = 15,
    grdtmxms44x44 = 16,
    grdtmxms48x48 = 17,
    grdtmxms52x52 = 18,
    grdtmxms64x64 = 19,
    grdtmxms72x72 = 20,
    grdtmxms80x80 = 21,
    grdtmxms88x88 = 22,
    grdtmxms96x96 = 23,
    grdtmxms104x104 = 24,
    grdtmxms120x120 = 25,
    grdtmxms132x132 = 26,
    grdtmxms144x144 = 27,
    grdtmxms8x18 = 28,
    grdtmxms8x32 = 29,
    grdtmxms12x26 = 30,
    grdtmxms12x36 = 31,
    grdtmxms16x36 = 32,
    grdtmxms16x48 = 33
}tagGRDtmxMatrixSize;
enum
{
    grptNone = 0,
    grptDay = 1,
    grptWeek = 2,
    grptThirdMonth = 3,
    grptHalfMonth = 4,
    grptMonth = 5,
    grptQuarter = 6,
    grptHalfYear = 7,
    grptYear = 8,
    grptCalendar = 9
}tagGRPeriodType;
enum
{
    grpcdDownAcross = 1,
    grpcdAcrossDown = 2,
    grpcdDownAcrossEqual = 3
}tagGRPageColumnDirection;
enum
{
    grcpamDiscard = 1,
    grcpamWrap = 2,
    grcpamResizeToFit = 3,
    grcpamShrinkToFit = 4,
    grcpamToNewPage = 5,
    grcpamToNewPageEx = 6,
    grcpamToNewPageRFC = 7,
    grcpamToNewPageRFCEx = 8,
    grcpamWrapExcludeGroup = 9
}tagGRColumnPrintAdaptMethod;
enum
{
    grncsNone = 1,
    grncsBefore = 2,
    grncsAfter = 3,
    grncsBeforeAfter = 4
}tagGRNewPageColumnStyle;
enum
{
    grbaTop = 1,
    grbaBottom = 2,
    grbaMiddle = 3
}tagGROCGroupHeaderVAlign;
enum
{
    grgktsNone = 1,
    grgktsFirstDetail = 2,
    grgktsAll = 3
}tagGRGrpKpTogetherStyle;
enum
{
    grvbsFixed3D = 1,
    grvbsFixedSingle = 2,
    grvbsNone = 3
}tagGRViewerBorderStyle;
enum
{
    grpemDisable = 1,
    grpemClickToEdit = 2,
    grpemDblClickToEdit = 3
}tagGRPreviewEditMode;
enum
{
    grpvmContinuousPage = 1,
    grpvmSinglePage = 2,
    grpvmMultiPage = 3
}tagGRPrintViewMode;
enum
{
    grtctSep = 1,
    grtctPrint = 2,
    grtctPageSetup = 3,
    grtctPrinterSetup = 4,
    grtctExport = 5,
    grtctMail = 6,
    grtctSaveDocument = 7,
    grtctContinuousPage = 8,
    grtctSinglePage = 9,
    grtctMultiPage = 10,
    grtctZoomIn = 11,
    grtctZoomOut = 12,
    grtctZoomPercent = 13,
    grtctPriorPage = 14,
    grtctNextPage = 15,
    grtctFirstPage = 16,
    grtctLastPage = 17,
    grtctCurPageNo = 18,
    grtctClose = 19,
    grtctClip = 20,
    grtctRefresh = 21,
    grtctBookmark = 22,
    grtctFindTextBox = 30,
    grtctFind = 31,
    grtctFindAgain = 32,
    grtctFindDlg = 33,
    grtctExportXLS = 50,
    grtctExportTXT = 51,
    grtctExportHTM = 52,
    grtctExportRTF = 53,
    grtctExportPDF = 54,
    grtctExportCSV = 55,
    grtctExportIMG = 56,
    grtctExportXLSBtn = 60,
    grtctExportPDFBtn = 61,
    grtctMailXLS = 65,
    grtctMailTXT = 66,
    grtctMailHTM = 67,
    grtctMailRTF = 68,
    grtctMailPDF = 69,
    grtctMailCSV = 70,
    grtctMailIMG = 71,
    grtctMailSaveDocument = 72
}tagGRToolControlType;
enum
{
    grpvoShowContentMenu = 1,
    grpvoDblClickSwitchViewMode = 2
}tagGRPrintViewerOption;
enum
{
    grssShift = 1,
    grssAlt = 2,
    grssCtrl = 4,
    grssLeft = 8,
    grssRight = 16,
    grssMiddle = 32,
    grssDouble = 64
}tagGRShiftState;
enum
{
    grmbLeft = 1,
    grmbRight = 2,
    grmbMiddle = 3
}tagGRMouseButton;
enum
{
    grdtctSep = 1,
    grdtctPrint = 2,
    grdtctPageSetup = 3,
    grdtctPrinterSetup = 4,
    grdtctPrintPreview = 40,
    grdtctPostLayout = 41,
    grdtctShowPreviewLine = 42,
    grdtctFindTextBox = 30,
    grdtctFind = 31,
    grdtctFindAgain = 32,
    grdtctFindDlg = 33,
    grdtctPriorPage = 14,
    grdtctNextPage = 15,
    grdtctFirstPage = 16,
    grdtctLastPage = 17,
    grdtctCurPageNo = 18,
    grdtctDividePage = 25,
    grdtctClip = 20,
    grdtctExport = 5,
    grdtctMail = 6,
    grdtctSaveDocument = 7,
    grdtctClose = 19,
    grdtctRefresh = 21,
    grdtctExportXLS = 50,
    grdtctExportTXT = 51,
    grdtctExportHTM = 52,
    grdtctExportRTF = 53,
    grdtctExportPDF = 54,
    grdtctExportCSV = 55,
    grdtctExportIMG = 56,
    grdtctExportXLSBtn = 60,
    grdtctExportPDFBtn = 61,
    grdtctMailXLS = 65,
    grdtctMailTXT = 66,
    grdtctMailHTM = 67,
    grdtctMailRTF = 68,
    grdtctMailPDF = 69,
    grdtctMailCSV = 70,
    grdtctMailIMG = 71,
    grdtctColumnVisible = 80
}tagGRToolControlType2;
enum
{
    grdvoShowContentMenu = 1
}tagGRDisplayViewerOption;


// Operations
public:

// IGRDisplayViewer

// Functions
//

	void put_BorderStyle(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(DISPID_BORDERSTYLE, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_BorderStyle()
	{
		long result;
		InvokeHelper(DISPID_BORDERSTYLE, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_LeftGap()
	{
		long result;
		InvokeHelper(0x98, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_LeftGap(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x98, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_RightGap()
	{
		long result;
		InvokeHelper(0x99, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_RightGap(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x99, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_TopGap()
	{
		long result;
		InvokeHelper(0x9a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_TopGap(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x9a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_BottomGap()
	{
		long result;
		InvokeHelper(0x9b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_BottomGap(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x9b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_RowsPerPage()
	{
		long result;
		InvokeHelper(0xa3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_RowsPerPage(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xa3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowHeader()
	{
		BOOL result;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowHeader(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x96, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowFooter()
	{
		BOOL result;
		InvokeHelper(0x97, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowFooter(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x97, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowToolbar()
	{
		BOOL result;
		InvokeHelper(0x87, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowToolbar(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x87, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Resortable()
	{
		BOOL result;
		InvokeHelper(0x9c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Resortable(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x9c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ResortCaseSensitive()
	{
		BOOL result;
		InvokeHelper(0x9d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ResortCaseSensitive(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x9d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ResortDefaultAsc()
	{
		BOOL result;
		InvokeHelper(0xa0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ResortDefaultAsc(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xa0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_GridTitle3D()
	{
		BOOL result;
		InvokeHelper(0xa1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_GridTitle3D(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xa1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Searchable()
	{
		BOOL result;
		InvokeHelper(0xa2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Searchable(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xa2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_GridCenterView()
	{
		BOOL result;
		InvokeHelper(0xa4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_GridCenterView(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xa4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_GridCanShrink()
	{
		BOOL result;
		InvokeHelper(0xa5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_GridCanShrink(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xa5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ResizeToFit()
	{
		BOOL result;
		InvokeHelper(0xa6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ResizeToFit(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xa6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_SelectionBackColor()
	{
		unsigned long result;
		InvokeHelper(0xaa, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_SelectionBackColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0xaa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_SelectionForeColor()
	{
		unsigned long result;
		InvokeHelper(0xab, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_SelectionForeColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0xab, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_SelectionFollowScroll()
	{
		BOOL result;
		InvokeHelper(0xac, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_SelectionFollowScroll(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xac, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_AlwaysShowHScrollBar()
	{
		BOOL result;
		InvokeHelper(0xad, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AlwaysShowHScrollBar(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xad, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_AlwaysShowVScrollBar()
	{
		BOOL result;
		InvokeHelper(0xae, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AlwaysShowVScrollBar(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xae, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_BackgroundColor()
	{
		unsigned long result;
		InvokeHelper(0xaf, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_BackgroundColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0xaf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ColumnMove()
	{
		BOOL result;
		InvokeHelper(0xb0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ColumnMove(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xb0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ColumnResize()
	{
		BOOL result;
		InvokeHelper(0xb1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ColumnResize(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xb1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_RowSelection()
	{
		BOOL result;
		InvokeHelper(0xb2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_RowSelection(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xb2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_BatchGetRecord()
	{
		BOOL result;
		InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_BatchGetRecord(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_BatchWantRecords()
	{
		long result;
		InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_BatchWantRecords(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_TotalRecord()
	{
		long result;
		InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_TotalRecord(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_BatchFinished()
	{
		BOOL result;
		InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_BatchFinished(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_BatchNo()
	{
		long result;
		InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_BatchStartRecNo()
	{
		long result;
		InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_Running()
	{
		BOOL result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_RowCount()
	{
		long result;
		InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_PageCount()
	{
		long result;
		InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_DefaultToolbarCommand(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x12, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Report()
	{
		LPDISPATCH result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void put_Report(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowPreviewLine()
	{
		BOOL result;
		InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowPreviewLine(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_SelRowNo()
	{
		long result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_SelRowNo(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_SelColumnNo()
	{
		long result;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_SelColumnNo(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_SelColumnName()
	{
		CString result;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_SelColumnName(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_VScrollPos()
	{
		long result;
		InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_VScrollPos(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_HScrollPos()
	{
		long result;
		InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_HScrollPos(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_SortColumns()
	{
		CString result;
		InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_SortColumns(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_AlwaysShowSelection()
	{
		BOOL result;
		InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AlwaysShowSelection(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ToPostColumnLayout()
	{
		BOOL result;
		InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ToPostColumnLayout(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_CurPageNo()
	{
		long result;
		InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_CurPageNo(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x10, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void QuickRefresh()
	{
		InvokeHelper(0x14, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Refresh()
	{
		InvokeHelper(0x15, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Start()
	{
		InvokeHelper(0x16, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Stop()
	{
		InvokeHelper(0x17, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH GetControlFromPos(long xPos, long yPos)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x18, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, xPos, yPos);
		return result;
	}
	LPDISPATCH GetSectionFromPos(long xPos, long yPos)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x19, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, xPos, yPos);
		return result;
	}
	LPDISPATCH GetContentCellFromPos(long xPos, long yPos)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x1a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, xPos, yPos);
		return result;
	}
	LPDISPATCH GetTitleCellFromPos(long xPos, long yPos)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x1b, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, xPos, yPos);
		return result;
	}
	void PostColumnLayout()
	{
		InvokeHelper(0x1c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void ResizeColumnToFitPage()
	{
		InvokeHelper(0x1d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void ResizeColumnToFit()
	{
		InvokeHelper(0x1e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void ResizeColumnToFitText()
	{
		InvokeHelper(0x1f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void NextPage()
	{
		InvokeHelper(0x23, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void PriorPage()
	{
		InvokeHelper(0x24, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void FirstPage()
	{
		InvokeHelper(0x25, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void LastPage()
	{
		InvokeHelper(0x26, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL GetColumnVisible(LPCTSTR ColumnName)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x28, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, ColumnName);
		return result;
	}
	void SetColumnVisible(LPCTSTR ColumnName, BOOL Visible)
	{
		static BYTE parms[] = VTS_BSTR VTS_BOOL ;
		InvokeHelper(0x29, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ColumnName, Visible);
	}
	void UpdateColumnView()
	{
		InvokeHelper(0x2a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void UpdateSelCell()
	{
		InvokeHelper(0x2b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void UpdateSelRow()
	{
		InvokeHelper(0x2c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void UpdateControl(LPDISPATCH pControl)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x2d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pControl);
	}
	void UpdateViewer()
	{
		InvokeHelper(0x2e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void LockUpdate()
	{
		InvokeHelper(0x2f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void UnlockUpdate()
	{
		InvokeHelper(0x30, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString GetSelRowCellText(long ColumnIndex)
	{
		CString result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x31, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, ColumnIndex);
		return result;
	}
	BOOL Search(LPCTSTR Text, BOOL CaseSensitive, BOOL WholeWord, BOOL ToUp, BOOL FromSelection, BOOL ShowDlg, BOOL ShowMsg)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL ;
		InvokeHelper(0x32, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Text, CaseSensitive, WholeWord, ToUp, FromSelection, ShowDlg, ShowMsg);
		return result;
	}
	BOOL SearchAgain(BOOL ShowMsg)
	{
		BOOL result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x33, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, ShowMsg);
		return result;
	}
	void ShowColumnVisibleDlg()
	{
		InvokeHelper(0x34, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void UpdateLanguage()
	{
		InvokeHelper(0x35, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void UpdateUI()
	{
		InvokeHelper(0x36, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void AddToolbarControl(long ControlType)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x37, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ControlType);
	}
	void AddToolbarCustomButton(long BtnID, LPCTSTR BtnFileName, LPCTSTR TooltipText)
	{
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x38, DISPATCH_METHOD, VT_EMPTY, NULL, parms, BtnID, BtnFileName, TooltipText);
	}
	void RemoveToolbarControl(long ControlType)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x39, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ControlType);
	}
	void ResetToolbarContent()
	{
		InvokeHelper(0x3a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void UpdateToolbar()
	{
		InvokeHelper(0x3b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void DoToolbarCommand(long ControlType)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x3c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ControlType);
	}
	BOOL GetOptionValue(long Option)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x41, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Option);
		return result;
	}
	void SetOptionValue(long Option, BOOL newVal)
	{
		static BYTE parms[] = VTS_I4 VTS_BOOL ;
		InvokeHelper(0x42, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Option, newVal);
	}

// Properties
//



};
