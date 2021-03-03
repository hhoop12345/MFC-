// U10_MainDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "U10_MainDlg.h"
#include "U10_MainDialog.h"
#include "afxdialogex.h"

#include "m_DrawBtnColr.h"

AFX_API_EXPORT int dll_ToDialogMainDlg(int mode,void* param)
{
	int rtn=1;

	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	U10_MainDialog dlg;
	rtn=dlg.DoModal();

	return(rtn);
}


// U10_MainDialog 对话框

IMPLEMENT_DYNAMIC(U10_MainDialog, CDialogEx)

U10_MainDialog::U10_MainDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(U10_MainDialog::IDD, pParent)
{
	m_HandFlag = 0;

	fontPrg.CreateFont(
		18,                        // nHeight
		0,                         // nWidth
		0,                         // nEscapement
		0,                         // nOrientation
		FW_SEMIBOLD,                 // nWeight
		FALSE,                     // bItalic
		FALSE,                     // bUnderline
		0,                         // cStrikeOut
		GB2312_CHARSET,              // nCharSet
		OUT_DEFAULT_PRECIS,        // nOutPrecision
		CLIP_DEFAULT_PRECIS,       // nClipPrecision
		DEFAULT_QUALITY,           // nQuality
		DEFAULT_PITCH | FF_SWISS, // nPitchAndFamily
		"宋体");                 // lpszFacename

}

U10_MainDialog::~U10_MainDialog()
{
}

void U10_MainDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Control(pDX, IDC_MFCBUTTON4, m_MFCButton);
	//  DDX_Control(pDX, IDC_BUTTON34, m_MFCButton);
	//  DDX_Control(pDX, IDC_BUTTON34, m_DrawBtnColr);
	DDX_Control(pDX, IDC_BUTTON34, m_Hand);
}


BEGIN_MESSAGE_MAP(U10_MainDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &U10_MainDialog::OnBnClickedButton1)
	ON_WM_CTLCOLOR()
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_MFCBUTTON1, &U10_MainDialog::OnBnClickedMfcbutton1)
	ON_BN_CLICKED(IDC_MFCBUTTON4, &U10_MainDialog::OnBnClickedMfcbutton4)
	ON_BN_CLICKED(IDC_BUTTON34, &U10_MainDialog::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_MFCBUTTON14, &U10_MainDialog::OnBnClickedMfcbutton14)
	ON_WM_TIMER()
	ON_EN_SETFOCUS(IDC_EDIT1, &U10_MainDialog::OnEnSetfocusEdit1)
	ON_BN_CLICKED(IDC_MFCBUTTON8, &U10_MainDialog::OnBnClickedMfcbutton8)
	ON_BN_CLICKED(IDC_MFCBUTTON9, &U10_MainDialog::OnBnClickedMfcbutton9)
END_MESSAGE_MAP()


// U10_MainDialog 消息处理程序

//--- 退出按钮
void U10_MainDialog::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();

	EndModalLoop(1001);
}


BOOL U10_MainDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	
	//--- 设置字体
	

	Setupwindow();
	GetDlgItem(IDC_BUTTON2)->SetFont(&fontPrg);

	SetTimer(1001,100,NULL); //--- 刷新控件
	//SetFont(&fontPrg);
	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}

void U10_MainDialog::Setupwindow()
{
	MoveWindow(1,1,1780,1024);

	//-- 设置按钮背景色
	//-- 更改按钮背景色
	
	CMFCButton *pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON1));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(0,204,123));

	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON2));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(255,179,128));

	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON3));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(237,0,47));
	
	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON17));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(255,244,128));

	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON6));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(174,191,174));

	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON7));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(174,191,174));

	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON8));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(174,191,174));

	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON9));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(174,191,174));

	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON12));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(174,191,174));

	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON13));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(174,191,174));
	

	CWnd* pWnd = GetWindow(GW_CHILD);
	while (pWnd)
	{
			
		if(pWnd->GetDlgCtrlID() == IDC_STATIC)
		{

		}
		else
		{
			pWnd->SetFont(&fontPrg);
		}
		
		pWnd = pWnd->GetWindow(GW_HWNDNEXT);
	}
	
}


HBRUSH U10_MainDialog::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	

	int nSaveDC = pDC->SaveDC(); //存储当前设备环境,以便绘图结束时恢复原来状态
	CBrush mStaticCol1;
	CBrush mStaticCol2;
	CPen mPen;
	CRect mRect,mRects;
	if(nCtlColor == CTLCOLOR_STATIC )
	{
		mStaticCol1.CreateSolidBrush(RGB(210,180,140));
		mStaticCol2.CreateSolidBrush(RGB(123,123,192));
		mPen.CreatePen(PS_SOLID,5,RGB(0,0,255));
		GetDlgItem(IDC_STATIC_F1)->GetClientRect(mRect);

		//pDC->SetTextColor(RGB(0,255,0));
		pDC->SetBkMode(TRANSPARENT);

		if(pWnd->GetDlgCtrlID() == IDC_STATIC_B2 
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_B3
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_B4
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_B5
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_B6
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_B7
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_B8)
		{
			pDC->SelectObject(&mPen);
			switch (pWnd->GetDlgCtrlID())
			{
				case IDC_STATIC_B2:
					GetDlgItem(IDC_STATIC_B2)->GetClientRect(mRects);
					break;
				case IDC_STATIC_B3:
					GetDlgItem(IDC_STATIC_B3)->GetClientRect(mRects);
					break;
				case IDC_STATIC_B4:
					GetDlgItem(IDC_STATIC_B4)->GetClientRect(mRects);
					break;
				case IDC_STATIC_B5:
					GetDlgItem(IDC_STATIC_B5)->GetClientRect(mRects);
					break;
				case IDC_STATIC_B6:
					GetDlgItem(IDC_STATIC_B6)->GetClientRect(mRects);
					break;
				case IDC_STATIC_B7:
					GetDlgItem(IDC_STATIC_B7)->GetClientRect(mRects);
					break;
				case IDC_STATIC_B8:
					GetDlgItem(IDC_STATIC_B8)->GetClientRect(mRects);
					break;
				default:
					break;
			}
			
			
			pDC->MoveTo(mRects.TopLeft().x,mRects.TopLeft().y+6);
			pDC->LineTo(mRects.BottomRight().x,mRects.TopLeft().y+6);
			//-- 左边
			pDC->MoveTo(mRects.TopLeft().x,mRects.TopLeft().y+6);
			pDC->LineTo(mRects.TopLeft().x,mRects.BottomRight().y);

			//-- 下边
			pDC->MoveTo(mRects.TopLeft().x,mRects.BottomRight().y);
			pDC->LineTo(mRects.BottomRight().x,mRects.BottomRight().y);

			//-- 右边
			pDC->MoveTo(mRects.BottomRight().x,mRects.TopLeft().y+6);
			pDC->LineTo(mRects.BottomRight().x,mRects.BottomRight().y);
			
			pDC->RestoreDC(nSaveDC);
			return (HBRUSH)GetStockObject(HOLLOW_BRUSH);
		}
		
		if( pWnd->GetDlgCtrlID() == IDC_STATIC_F1
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F3
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F5
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F7
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F9
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F11
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F13
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F15
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F17
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F19
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F21
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F23
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F25
			)
		{
			//GetDlgItem(IDC_STATIC_A2)->GetClientRect(mRect);
			pDC->SelectObject(&mStaticCol1);
			mRect.TopLeft().y = mRect.TopLeft().y+10; 

			pDC->Rectangle(&mRect);
			pDC->RestoreDC(nSaveDC);
			return (HBRUSH)GetStockObject(HOLLOW_BRUSH);
		}

		if(pWnd->GetDlgCtrlID() == IDC_STATIC_F2
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F4
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F6
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F8
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F10
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F12
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F14
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F16
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F18
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F20
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F22
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F24
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_F26)
		{
			//GetDlgItem(IDC_STATIC_A1)->GetClientRect(mRect);
			pDC->SelectObject(&mStaticCol2);
			mRect.TopLeft().y = mRect.TopLeft().y+10; 
			pDC->Rectangle(&mRect);
			pDC->RestoreDC(nSaveDC);
			return (HBRUSH)GetStockObject(HOLLOW_BRUSH);
		}
		


		return (HBRUSH)GetStockObject(HOLLOW_BRUSH);
	}
	// TODO:  在此更改 DC 的任何特性
	
	return hbr;
}


void U10_MainDialog::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: 在此处添加消息处理程序代码
	// 不为绘图消息调用 CDialogEx::OnPaint()
	CRect mRect;
	GetClientRect(mRect);
	int mSaveDc = dc.SaveDC();
	CBrush mBrush;
	mBrush.CreateSolidBrush(RGB(233,255,233));
	dc.SelectObject(&mBrush);
	dc.Rectangle(mRect);
	dc.RestoreDC(mSaveDc);

	/*CPen pen1(PS_SOLID,1,RGB(255,0,0));
	dc.SelectObject(&pen1);
	dc.Rectangle(0,0,100,100);
	*/
}

void U10_MainDialog::mDrawRectangle( CRect &mRects )
{
	CClientDC dc(this);

	CPen mPen;
	mPen.CreatePen(PS_SOLID,2,RGB(0,0,255));

	dc.SelectObject(&mPen);
	//-- 上边
	dc.MoveTo(mRects.TopLeft().x-1.5,mRects.TopLeft().y+6);
	dc.LineTo(mRects.BottomRight().x,mRects.TopLeft().y+6);
	//-- 左边
	dc.MoveTo(mRects.TopLeft().x,mRects.TopLeft().y+6);
	dc.LineTo(mRects.TopLeft().x,mRects.BottomRight().y);

	//-- 下边
	dc.MoveTo(mRects.TopLeft().x,mRects.BottomRight().y);
	dc.LineTo(mRects.BottomRight().x,mRects.BottomRight().y);

	//-- 右边
	dc.MoveTo(mRects.BottomRight().x,mRects.TopLeft().y+6);
	dc.LineTo(mRects.BottomRight().x,mRects.BottomRight().y);
}



void U10_MainDialog::OnBnClickedMfcbutton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//MessageBox("hello world");
}


void U10_MainDialog::OnBnClickedMfcbutton4()
{
	// TODO: 在此添加控件通知处理程序代码
}


void U10_MainDialog::OnBnClickedButton34()
{
	// TODO: 在此添加控件通知处理程序代码
	//-- 找个gsysdata 文件来代替 m_HandFlag
	if(m_HandFlag == 0)
	{
		/*
		BtnColr[0].CreateSolidBrush(RGB(220,221,221));
		BtnColr[2].CreateSolidBrush(RGB(28,28,28));
		BtnColr[1].CreateSolidBrush(RGB(128,221,255));
		*/
		m_HandFlag = 1;
		m_Hand.SetBkColor(RGB(220,221,221),1);
		m_Hand.SetBkColor(RGB(128,221,255),0);
	}
	else if(m_HandFlag == 1)
	{
		m_HandFlag = 0;
		m_Hand.SetBkColor(RGB(220,221,221),0);
		m_Hand.SetBkColor(RGB(128,221,255),1);
	}

	m_Hand.RedrawWindow();
}


void U10_MainDialog::OnBnClickedMfcbutton14()
{
	// TODO: 在此添加控件通知处理程序代码
}


void U10_MainDialog::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if(nIDEvent == 1001)
	{
		KillTimer(nIDEvent);

		
		ReDrawButton();
		
		
	}

	CDialogEx::OnTimer(nIDEvent);
}


void U10_MainDialog::OnEnSetfocusEdit1()
{
	// TODO: 在此添加控件通知处理程序代码
	//MessageBox("hello world");
}

void U10_MainDialog::ReDrawButton()
{
	GetDlgItem(IDC_BUTTON2)->RedrawWindow();
	GetDlgItem(IDC_BUTTON3)->RedrawWindow();
	GetDlgItem(IDC_BUTTON4)->RedrawWindow();
	GetDlgItem(IDC_BUTTON5)->RedrawWindow();
	GetDlgItem(IDC_BUTTON6)->RedrawWindow();
	GetDlgItem(IDC_BUTTON7)->RedrawWindow();
	GetDlgItem(IDC_BUTTON8)->RedrawWindow();
	GetDlgItem(IDC_BUTTON9)->RedrawWindow();
	GetDlgItem(IDC_BUTTON10)->RedrawWindow();
	GetDlgItem(IDC_BUTTON11)->RedrawWindow();
	GetDlgItem(IDC_BUTTON12)->RedrawWindow();
	GetDlgItem(IDC_BUTTON13)->RedrawWindow();
	GetDlgItem(IDC_BUTTON14)->RedrawWindow();
	GetDlgItem(IDC_BUTTON15)->RedrawWindow();
	GetDlgItem(IDC_BUTTON16)->RedrawWindow();
	GetDlgItem(IDC_BUTTON17)->RedrawWindow();
	GetDlgItem(IDC_BUTTON18)->RedrawWindow();
	GetDlgItem(IDC_BUTTON19)->RedrawWindow();
	GetDlgItem(IDC_BUTTON20)->RedrawWindow();
	GetDlgItem(IDC_BUTTON21)->RedrawWindow();
	GetDlgItem(IDC_BUTTON22)->RedrawWindow();
	GetDlgItem(IDC_BUTTON23)->RedrawWindow();
	GetDlgItem(IDC_BUTTON24)->RedrawWindow();
	GetDlgItem(IDC_BUTTON25)->RedrawWindow();
	GetDlgItem(IDC_BUTTON26)->RedrawWindow();
	GetDlgItem(IDC_BUTTON27)->RedrawWindow();



	GetDlgItem(IDC_EDIT1)->RedrawWindow();
	GetDlgItem(IDC_EDIT2)->RedrawWindow();
	GetDlgItem(IDC_EDIT8)->RedrawWindow();
	GetDlgItem(IDC_EDIT9)->RedrawWindow();
	GetDlgItem(IDC_EDIT10)->RedrawWindow();
	GetDlgItem(IDC_EDIT11)->RedrawWindow();
	GetDlgItem(IDC_EDIT12)->RedrawWindow();
	GetDlgItem(IDC_EDIT13)->RedrawWindow();
	GetDlgItem(IDC_EDIT14)->RedrawWindow();
	GetDlgItem(IDC_EDIT15)->RedrawWindow();
	GetDlgItem(IDC_EDIT16)->RedrawWindow();
	GetDlgItem(IDC_EDIT17)->RedrawWindow();
	GetDlgItem(IDC_EDIT18)->RedrawWindow();
	GetDlgItem(IDC_EDIT19)->RedrawWindow();
	GetDlgItem(IDC_EDIT20)->RedrawWindow();
	GetDlgItem(IDC_EDIT21)->RedrawWindow();
	GetDlgItem(IDC_EDIT22)->RedrawWindow();
	GetDlgItem(IDC_EDIT23)->RedrawWindow();
	GetDlgItem(IDC_EDIT24)->RedrawWindow();
	GetDlgItem(IDC_EDIT25)->RedrawWindow();
	GetDlgItem(IDC_EDIT26)->RedrawWindow();
	GetDlgItem(IDC_EDIT27)->RedrawWindow();
	GetDlgItem(IDC_EDIT28)->RedrawWindow();
	GetDlgItem(IDC_EDIT29)->RedrawWindow();
	GetDlgItem(IDC_EDIT30)->RedrawWindow();
	GetDlgItem(IDC_EDIT31)->RedrawWindow();
	GetDlgItem(IDC_EDIT32)->RedrawWindow();
	GetDlgItem(IDC_EDIT33)->RedrawWindow();
	GetDlgItem(IDC_EDIT34)->RedrawWindow();
	GetDlgItem(IDC_EDIT35)->RedrawWindow();
	GetDlgItem(IDC_EDIT36)->RedrawWindow();
	GetDlgItem(IDC_EDIT37)->RedrawWindow();
	GetDlgItem(IDC_EDIT38)->RedrawWindow();
	GetDlgItem(IDC_EDIT39)->RedrawWindow();
	GetDlgItem(IDC_EDIT40)->RedrawWindow();
	GetDlgItem(IDC_EDIT41)->RedrawWindow();
	GetDlgItem(IDC_EDIT42)->RedrawWindow();
	GetDlgItem(IDC_EDIT43)->RedrawWindow();
	GetDlgItem(IDC_EDIT44)->RedrawWindow();
	GetDlgItem(IDC_EDIT45)->RedrawWindow();
	GetDlgItem(IDC_EDIT46)->RedrawWindow();
	GetDlgItem(IDC_EDIT47)->RedrawWindow();
	GetDlgItem(IDC_EDIT48)->RedrawWindow();
	GetDlgItem(IDC_EDIT49)->RedrawWindow();
	GetDlgItem(IDC_EDIT50)->RedrawWindow();
	GetDlgItem(IDC_EDIT51)->RedrawWindow();
	GetDlgItem(IDC_EDIT52)->RedrawWindow();
	GetDlgItem(IDC_EDIT53)->RedrawWindow();
	GetDlgItem(IDC_EDIT54)->RedrawWindow();
	GetDlgItem(IDC_EDIT55)->RedrawWindow();
	GetDlgItem(IDC_EDIT56)->RedrawWindow();
	GetDlgItem(IDC_EDIT57)->RedrawWindow();

}


#pragma comment(lib,"..\\..\\exlib\\U11_Operator.lib")
AFX_API_IMPORT int dll_U11_ToDialogMainDlg(int mode,void* param);
void U10_MainDialog::OnBnClickedMfcbutton8()
{
	// TODO: 在此添加控件通知处理程序代码
	dll_U11_ToDialogMainDlg(1,NULL);
}

#pragma comment(lib,"..\\..\\exlib\\U11_Operator.lib")
AFX_API_IMPORT int dll_U11_ToDialogParamDlg(int mode,void* param);
void U10_MainDialog::OnBnClickedMfcbutton9()
{
	// TODO: 在此添加控件通知处理程序代码
	dll_U11_ToDialogParamDlg(1,NULL);
}
