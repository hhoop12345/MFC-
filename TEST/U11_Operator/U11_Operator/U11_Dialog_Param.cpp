// U11_Dialog_Param.cpp : 实现文件
//

#include "stdafx.h"
#include "U11_Operator.h"
#include "U11_Dialog_Param.h"
#include "afxdialogex.h"
#include "U11_DialigHand.h"


AFX_API_EXPORT int dll_U11_ToDialogParamDlg(int mode,void* param)
{
	int rtn=1;

	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	U11_Dialog_Param dlg;
	rtn=dlg.DoModal();

	return(rtn);
}


// U11_Dialog_Param 对话框

IMPLEMENT_DYNAMIC(U11_Dialog_Param, CDialogEx)

U11_Dialog_Param::U11_Dialog_Param(CWnd* pParent /*=NULL*/)
	: CDialogEx(U11_Dialog_Param::IDD, pParent)
{
	//--- 设置字体
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

	fontTitle.CreateFont(
		26,                        // nHeight
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

U11_Dialog_Param::~U11_Dialog_Param()
{
}

void U11_Dialog_Param::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(U11_Dialog_Param, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &U11_Dialog_Param::OnBnClickedButton1)
	ON_WM_CTLCOLOR()
	ON_WM_LBUTTONDOWN()
	ON_WM_PAINT()
END_MESSAGE_MAP()


// U11_Dialog_Param 消息处理程序


void U11_Dialog_Param::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码

	CDialogEx::OnOK();

	U11_DialigHand dlg;
	dlg.DoModal();
}


HBRUSH U11_Dialog_Param::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  在此更改 DC 的任何特性

	int nSaveDC = pDC->SaveDC(); //存储当前设备环境,以便绘图结束时恢复原来状态
	CPen mPen;
	CRect mRects;

	if(nCtlColor == CTLCOLOR_STATIC )
	{
		
		mPen.CreatePen(PS_SOLID,3,RGB(0,0,255));
		//pDC->SetTextColor(RGB(0,255,0));
		pDC->SetBkMode(TRANSPARENT);

		if(pWnd->GetDlgCtrlID() == IDC_STATIC_A1 
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A2
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A3
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A4
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A5
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A6
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A7
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A8
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A9
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A10
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A11
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A12)
		{
			pDC->SelectObject(&mPen);
			switch (pWnd->GetDlgCtrlID())
			{
			case IDC_STATIC_A1:
				GetDlgItem(IDC_STATIC_A1)->GetClientRect(mRects);
				break;
			case IDC_STATIC_A2:
				GetDlgItem(IDC_STATIC_A2)->GetClientRect(mRects);
				break;
			case IDC_STATIC_A3:
				GetDlgItem(IDC_STATIC_A3)->GetClientRect(mRects);
				break;
			case IDC_STATIC_A4:
				GetDlgItem(IDC_STATIC_A4)->GetClientRect(mRects);
				break;
			case IDC_STATIC_A5:
				GetDlgItem(IDC_STATIC_A5)->GetClientRect(mRects);
				break;
			case IDC_STATIC_A6:
				GetDlgItem(IDC_STATIC_A6)->GetClientRect(mRects);
				break;
			case IDC_STATIC_A7:
				GetDlgItem(IDC_STATIC_A7)->GetClientRect(mRects);
				break;
			case IDC_STATIC_A8:
				GetDlgItem(IDC_STATIC_A8)->GetClientRect(mRects);
				break;
			case IDC_STATIC_A9:
				GetDlgItem(IDC_STATIC_A9)->GetClientRect(mRects);
				break;
			case IDC_STATIC_A10:
				GetDlgItem(IDC_STATIC_A10)->GetClientRect(mRects);
				break;
			case IDC_STATIC_A11:
				GetDlgItem(IDC_STATIC_A11)->GetClientRect(mRects);
				break;
			case IDC_STATIC_A12:
				GetDlgItem(IDC_STATIC_A12)->GetClientRect(mRects);
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
			

		}

		return (HBRUSH)GetStockObject(HOLLOW_BRUSH);
	}
	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
	return hbr;

}


void U11_Dialog_Param::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CDialogEx::OnOK();

	CDialogEx::OnLButtonDown(nFlags, point);
}

void U11_Dialog_Param::Setupwindow()
{
	CWnd* pWnd = GetWindow(GW_CHILD);
	while (pWnd)
	{

		//if(pWnd->GetDlgCtrlID() == IDC_STATIC)
		{

		}
		//else
		{
			pWnd->SetFont(&fontPrg);
		}

		if(pWnd->GetDlgCtrlID() == IDC_STATIC_TITLE1 || 
			pWnd->GetDlgCtrlID() == IDC_STATIC_TITLE2)
		{
			pWnd->SetFont(&fontTitle);
		}

		pWnd = pWnd->GetWindow(GW_HWNDNEXT);
	}
}


BOOL U11_Dialog_Param::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化

	Setupwindow();

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}


void U11_Dialog_Param::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: 在此处添加消息处理程序代码
	// 不为绘图消息调用 CDialogEx::OnPaint()

	CRect mRect;
	int mSaveDc = dc.SaveDC();
	GetClientRect(mRect);
	CBrush mBrush;
	mBrush.CreateSolidBrush(RGB(255,255,224));
	dc.SelectObject(&mBrush);
	dc.Rectangle(mRect);
	dc.RestoreDC(mSaveDc);

}
