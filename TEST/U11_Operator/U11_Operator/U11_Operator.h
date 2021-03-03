// U11_Operator.h : U11_Operator DLL 的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CU11_OperatorApp
// 有关此类实现的信息，请参阅 U11_Operator.cpp
//

class CU11_OperatorApp : public CWinApp
{
public:
	CU11_OperatorApp();

// 重写
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
