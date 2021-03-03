#pragma once


// U11_DialigHand �Ի���

class U11_DialigHand : public CDialogEx
{
	DECLARE_DYNAMIC(U11_DialigHand)

public:
	U11_DialigHand(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~U11_DialigHand();

// �Ի�������
	enum { IDD = IDD_DIALOG_HAND };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

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
