
// WinTst001.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです。
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CWinTst001App:
// このクラスの実装については、WinTst001.cpp を参照してください。
//

class CWinTst001App : public CWinApp
{
public:
	CWinTst001App();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CWinTst001App theApp;