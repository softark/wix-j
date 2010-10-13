// HogeHelper.cpp : DLL アプリケーション用にエクスポートされる関数を定義します。
//

#include "stdafx.h"

extern "C" __time64_t __stdcall GetHogeDateTime()
{
	__time64_t tmCur = CTime::GetCurrentTime().GetTime();
	return tmCur;
}

