// U11_Operator.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "U11_Operator.h"

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

// CU11_OperatorApp

BEGIN_MESSAGE_MAP(CU11_OperatorApp, CWinApp)
END_MESSAGE_MAP()


// CU11_OperatorApp ����

CU11_OperatorApp::CU11_OperatorApp()
{
	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CU11_OperatorApp ����

CU11_OperatorApp theApp;


// CU11_OperatorApp ��ʼ��

BOOL CU11_OperatorApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
