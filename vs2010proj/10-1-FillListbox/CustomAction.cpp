
#include "stdafx.h"


UINT __stdcall FillListbox(MSIHANDLE hInstall)
{
	HRESULT hr = S_OK;
	UINT er = ERROR_SUCCESS;

	hr = WcaInitialize(hInstall, "FillListbox");
	ExitOnFailure(hr, "Failed to initialize");

	WcaLog(LOGMSG_STANDARD, "Initialized.");

	// TODO: Add your custom action code here.
	MSIHANDLE hTable = NULL;
	MSIHANDLE hColumns = NULL;
	MSIDBERROR dbErr = MSIDBERROR_NOERROR;

	WcaLog(LOGMSG_STANDARD, "AddingTempRecord %d hTable = %x hColumns = %x dbErr = %d.", 0, hTable, hColumns, dbErr);
	hr = WcaAddTempRecord (&hTable, &hColumns, L"ListBox", &dbErr, 0, 3, L"LISTBOXVALUES", 1, L"Item 1");
	WcaLog(LOGMSG_STANDARD, "AddingTempRecord %d hTable = %x hColumns = %x dbErr = %d.", 1, hTable, hColumns, dbErr);
	hr = WcaAddTempRecord (&hTable, &hColumns, L"ListBox", &dbErr, 0, 3, L"LISTBOXVALUES", 2, L"Item 2");
	WcaLog(LOGMSG_STANDARD, "AddingTempRecord %d hTable = %x hColumns = %x dbErr = %d.", 2, hTable, hColumns, dbErr);
	hr = WcaAddTempRecord (&hTable, &hColumns, L"ListBox", &dbErr, 0, 3, L"LISTBOXVALUES", 3, L"Item 3");
	WcaLog(LOGMSG_STANDARD, "AddingTempRecord %d hTable = %x hColumns = %x dbErr = %d.", 3, hTable, hColumns, dbErr);

	if (hTable)
		MsiCloseHandle (hTable);
	if (hColumns)
		MsiCloseHandle (hColumns);

LExit:
	er = SUCCEEDED(hr) ? ERROR_SUCCESS : ERROR_INSTALL_FAILURE;
	return WcaFinalize(er);
}


// DllMain - Initialize and cleanup WiX custom action utils.
extern "C" BOOL WINAPI DllMain(
	__in HINSTANCE hInst,
	__in ULONG ulReason,
	__in LPVOID
	)
{
	switch(ulReason)
	{
	case DLL_PROCESS_ATTACH:
		WcaGlobalInitialize(hInst);
		break;

	case DLL_PROCESS_DETACH:
		WcaGlobalFinalize();
		break;
	}

	return TRUE;
}
