#pragma once
#include "afxbutton.h"
#include "afxwin.h"
#include "m_drawbtncolr.h"


// U10_MainDialog 对话框

class U10_MainDialog : public CDialogEx
{
	DECLARE_DYNAMIC(U10_MainDialog)

public:
	U10_MainDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~U10_MainDialog();

// 对话框数据
	enum { IDD = IDD_DIALOG_MAIN };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	virtual BOOL OnInitDialog();
	void Setupwindow();
	void ReDrawButton();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnPaint();
	void mDrawRectangle(CRect &mRects);
	afx_msg void OnBnClickedMfcbutton1();
//	CMFCButton m_MFCButton;
	afx_msg void OnBnClickedMfcbutton4();
//	CButton m_MFCButton;
	afx_msg void OnBnClickedButton34();
//	CButton m_DrawBtnColr;
	afx_msg void OnBnClickedMfcbutton14();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnEnSetfocusEdit1();

public:
	int m_HandFlag;
	CFont fontPrg;
	m_DrawBtnColr m_Hand;
	afx_msg void OnBnClickedMfcbutton8();
	afx_msg void OnBnClickedMfcbutton9();
};
