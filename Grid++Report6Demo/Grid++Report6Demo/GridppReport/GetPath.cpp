#include "stdafx.h"
#include "GetPath.h"
#include "XMLConfig.h"

string GetDatabaseConnectionString(void)
{
	string strConnectionString;
	

	if (_T("MySQL") == g_DBParameter.strDBType)
	{
		strConnectionString = _T("DRIVER=MySQL ODBC 5.3 ANSI Driver; SERVER =") 
							+ g_DBParameter.strServer
							+ _T("; Port=")
							+ g_DBParameter.strPort
							+ _T("; DataBase=")
							+ g_DBParameter.strDataBase
							+ _T("; User=")
							+ g_DBParameter.strUser
							+ _T("; Password=")
							+ g_DBParameter.strPassword
							+ _T("; Charset=gbk; Option=3;");
						  
	}
	else if (_T("SQLSERVER") == g_DBParameter.strDBType)
	{
		strConnectionString = _T("Driver={sql server};server=")
							+ g_DBParameter.strServer	+ _T(", ")	
							+ g_DBParameter.strPort
							+ _T(";uid=")
							+ g_DBParameter.strUser
							+ _T(";pwd=")
							+ g_DBParameter.strPassword
							+ _T(";database=")
							+ g_DBParameter.strDataBase;
	}
	else if (_T("ORACLE") == g_DBParameter.strDBType)
	{
		strConnectionString = _T("Provider=MSDAORA.1;User ID=")
							+ g_DBParameter.strUser 
							+ _T(";Password=")
							+ g_DBParameter.strPassword
							+ _T(";Data Source='(DESCRIPTION =(ADDRESS_LIST =  (ADDRESS = (PROTOCOL = TCP)(HOST = ")
							+ g_DBParameter.strServer
							+ _T(")(PORT = ")
							+ g_DBParameter.strPort
							+ _T(")))(CONNECT_DATA =  (SERVICE_NAME = ")
							+ g_DBParameter.strDataBase
							+ _T(")))';Persist Security Info=True");
	}
	return strConnectionString;
}



CString GetInstallPath(void)
{
	TCHAR FileName[MAX_PATH];
	GetModuleFileName(NULL, FileName, MAX_PATH);
	::PathRemoveFileSpec(FileName);
	CString strFileName( FileName );
	return strFileName;
}