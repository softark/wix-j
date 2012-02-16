
// Hoge10.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです。
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CHoge10App:
// このクラスの実装については、Hoge10.cpp を参照してください。
//

class CHoge10App : public CWinAppEx
{
public:
	CHoge10App();

// オーバーライド
	public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CHoge10App theApp;