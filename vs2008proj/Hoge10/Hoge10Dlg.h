
// Hoge10Dlg.h : ヘッダー ファイル
//

#pragma once


// CHoge10Dlg ダイアログ
class CHoge10Dlg : public CDialog
{
// コンストラクション
public:
	CHoge10Dlg(CWnd* pParent = NULL);	// 標準コンストラクタ

// ダイアログ データ
	enum { IDD = IDD_HOGE10_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート

	void	UpdateDateTimeDisp();

// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnUpdate();
};
