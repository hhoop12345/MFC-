// U10_MainDlg.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "U10_MainDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: ����� DLL ����� MFC DLL �Ƕ�̬���ӵģ�
//		��Ӵ� DLL �������κε���
//		MFC �ĺ������뽫 AFX_MANAGE_STATE ����ӵ�
//		�ú�������ǰ�档
//
//		����:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// �˴�Ϊ��ͨ������
//		}
//
//		�˺������κ� MFC ����
//		������ÿ��������ʮ����Ҫ������ζ��
//		��������Ϊ�����еĵ�һ�����
//		���֣������������ж������������
//		������Ϊ���ǵĹ��캯���������� MFC
//		DLL ���á�
//
//		�й�������ϸ��Ϣ��
//		����� MFC ����˵�� 33 �� 58��
//

// CU10_MainDlgApp

BEGIN_MESSAGE_MAP(CU10_MainDlgApp, CWinApp)
END_MESSAGE_MAP()


// CU10_MainDlgApp ����

CU10_MainDlgApp::CU10_MainDlgApp()
{
	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CU10_MainDlgApp ����

CU10_MainDlgApp theApp;


// CU10_MainDlgApp ��ʼ��

BOOL CU10_MainDlgApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
