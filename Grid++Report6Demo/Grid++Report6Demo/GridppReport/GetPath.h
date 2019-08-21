#pragma once

//#include <CString>

//using namespace ATL;
#include <string>
using std::string;

CString GetInstallPath(void);
string GetDatabaseConnectionString(void);

inline CString GetReportTemplatePath(void)
{
	return GetInstallPath() + _T("\\Reports\\");
}

inline CString GetReportDataPath(void)
{
	return GetInstallPath() + _T("Data");
}

inline CString GetReportDataPathFile(void)
{
	return GetInstallPath() + _T("Data\\NorthWind.mdb");
}




