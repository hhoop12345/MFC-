// U11_Operator.h : U11_Operator DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CU11_OperatorApp
// �йش���ʵ�ֵ���Ϣ������� U11_Operator.cpp
//

class CU11_OperatorApp : public CWinApp
{
public:
	CU11_OperatorApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
