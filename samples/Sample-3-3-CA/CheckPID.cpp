#include <windows.h>
#include <tchar.h>
#include <msi.h>
#include <msiquery.h>

#pragma comment(linker, "/EXPORT:CheckPID=_CheckPID@4")

extern "C" UINT __stdcall CheckPID (MSIHANDLE hInstall) {
  TCHAR Pid[MAX_PATH];
  DWORD PidLen = MAX_PATH;

  MsiGetProperty (hInstall, _T("PIDKEY"), Pid, &PidLen);
  MsiSetProperty (hInstall, _T("PIDACCEPTED"), Pid[0] == '1' ? _T("1") : _T("0"));
  return ERROR_SUCCESS;
} // CheckPID
