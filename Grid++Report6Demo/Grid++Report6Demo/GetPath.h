#pragma once
#include "stdafx.h"
using namespace SOUI;
inline SStringT GetInstallPath()
{
	TCHAR FileName[MAX_PATH];
	GetModuleFileName(NULL, FileName, MAX_PATH);
	::PathRemoveFileSpec(FileName);
	SStringT strFileName(FileName);
	return strFileName;
}

inline SStringT GetReportTemplatePath(void)
{
	return GetInstallPath() + _T("\\Reports\\");
}

inline SStringT GetReportDataPath(void)
{
	return GetInstallPath() + SStringT(_T("\\Data"));
}

inline SStringT GetReportDataPathFile(void)
{
	return GetInstallPath() + SStringT(_T("\\Data\\NorthWind.mdb"));
}

inline SStringT GetDatabaseConnectionString(void)
{
#ifdef _WIN64
	return SStringT(_T("Provider=Microsoft.ACE.OLEDB.12.0;User ID=Admin;Data Source="))
		+ GetReportDataPathFile() + _T(";");
#else
	return SStringT(_T("Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source="))
		+ GetReportDataPathFile() + _T(";");
#endif
}




