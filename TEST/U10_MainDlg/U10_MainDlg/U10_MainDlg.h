// U10_MainDlg.h : U10_MainDlg DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CU10_MainDlgApp
// �йش���ʵ�ֵ���Ϣ������� U10_MainDlg.cpp
//

class CU10_MainDlgApp : public CWinApp
{
public:
	CU10_MainDlgApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
