
// RunRobotDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "RunRobot.h"
#include "RunRobotDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CRunRobotDlg 对话框




CRunRobotDlg::CRunRobotDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CRunRobotDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CRunRobotDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Control(pDX, IDC_BUTTON1, m_Butn1);
}

BEGIN_MESSAGE_MAP(CRunRobotDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CRunRobotDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_MFCBUTTON1, &CRunRobotDlg::OnBnClickedMfcbutton1)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CRunRobotDlg 消息处理程序

BOOL CRunRobotDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	//m_Butn1.SetFacecolor()
	/*
	//-- 更改按钮背景色
	CMFCButton *pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON1));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	//pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_NOBORDERS;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	COLORREF mCol = RGB(100,200,200);
	pButton->SetFaceColor(mCol);
	*/

	SetTimer(1999,10,NULL);
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CRunRobotDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CRunRobotDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CRunRobotDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CRunRobotDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CRunRobotDlg::OnBnClickedMfcbutton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//MessageBox("hello world");
}


#pragma comment(lib,"..\\..\\exlib\\U10_MainDlg.lib")
AFX_API_IMPORT int dll_ToDialogMainDlg(int mode,void* param);

void CRunRobotDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if(nIDEvent == 1999)
	{
		ShowWindow(SW_HIDE);
		KillTimer(nIDEvent);

		int rtn = dll_ToDialogMainDlg(1,NULL);
		if(rtn == 1001)
		{
			CDialogEx::OnOK();
		}
	}

	CDialogEx::OnTimer(nIDEvent);
}
