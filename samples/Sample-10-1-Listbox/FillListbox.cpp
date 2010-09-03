#include <windows.h>
#include <msi.h>
#include <msiquery.h>

// To get rid of header annotations
#define __in
#define __out
#define __inout
#define __in_bcount(x)

#include "wcautil.h"

#pragma comment(linker, "/EXPORT:FillListbox=_FillListbox@4")

extern "C" UINT __stdcall FillListbox (MSIHANDLE hInstall) {
  HRESULT hResult = WcaInitialize (hInstall, "FillListbox");
  if (FAILED (hResult)) return ERROR_INSTALL_FAILURE;

  MSIHANDLE hTable = NULL;
  MSIHANDLE hColumns = NULL;

  hResult = WcaAddTempRecord (&hTable, &hColumns, L"ListBox", NULL, 0, 3,
  							L"LISTBOXVALUES", 1, L"Item 1");
  hResult = WcaAddTempRecord (&hTable, &hColumns, L"ListBox", NULL, 0, 3,
  							L"LISTBOXVALUES", 2, L"Item 2");
  hResult = WcaAddTempRecord (&hTable, &hColumns, L"ListBox", NULL, 0, 3,
  							L"LISTBOXVALUES", 3, L"Item 3");

  if (hTable)
    MsiCloseHandle (hTable);
  if (hColumns)
    MsiCloseHandle (hColumns);
  return WcaFinalize (hResult);
} // FillListbox
