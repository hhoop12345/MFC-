
// RunRobotDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CRunRobotDlg �Ի���
class CRunRobotDlg : public CDialogEx
{
// ����
public:
	CRunRobotDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_RUNROBOT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
//	CButton m_Butn1;
	afx_msg void OnBnClickedMfcbutton1();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
