
// WinTst001Dlg.h : ヘッダー ファイル
//

#pragma once


// CWinTst001Dlg ダイアログ
class CWinTst001Dlg : public CDialogEx
{
// コンストラクション
public:
	CWinTst001Dlg(CWnd* pParent = NULL);	// 標準コンストラクター

// ダイアログ データ
	enum { IDD = IDD_WINTST001_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート


// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
