
// RunRobot.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CRunRobotApp:
// �йش����ʵ�֣������ RunRobot.cpp
//

class CRunRobotApp : public CWinApp
{
public:
	CRunRobotApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CRunRobotApp theApp;