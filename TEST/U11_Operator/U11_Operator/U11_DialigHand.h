#pragma once


// U11_DialigHand 对话框

class U11_DialigHand : public CDialogEx
{
	DECLARE_DYNAMIC(U11_DialigHand)

public:
	U11_DialigHand(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~U11_DialigHand();

// 对话框数据
	enum { IDD = IDD_DIALOG_HAND };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedMfcbutton1();
	afx_msg void OnBnClickedMfcbutton2();
	virtual BOOL OnInitDialog();
	void SetupWindow();

	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);

	CFont fontPrg;
	CFont fontTitle;

	int UpDownPageFlag;
	void EnableButtonSet();
	afx_msg void OnBnClickedButton1();
};
