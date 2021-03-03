#pragma once


// U11_Dialog_Param 对话框

class U11_Dialog_Param : public CDialogEx
{
	DECLARE_DYNAMIC(U11_Dialog_Param)

public:
	U11_Dialog_Param(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~U11_Dialog_Param();

// 对话框数据
	enum { IDD = IDD_DIALOG_PARAM };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);

	void Setupwindow();
	CFont fontPrg;
	CFont fontTitle;
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
};
