// U11_DialigHand.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "U11_Operator.h"
#include "U11_DialigHand.h"
#include "afxdialogex.h"

#include "U11_Dialog_Param.h"

AFX_API_EXPORT int dll_U11_ToDialogMainDlg(int mode,void* param)
{
	int rtn=1;

	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	U11_DialigHand dlg;
	rtn=dlg.DoModal();

	return(rtn);
}


// U11_DialigHand �Ի���

IMPLEMENT_DYNAMIC(U11_DialigHand, CDialogEx)

U11_DialigHand::U11_DialigHand(CWnd* pParent /*=NULL*/)
	: CDialogEx(U11_DialigHand::IDD, pParent)
{


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
		"����");                 // lpszFacename


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
		"����");                 // lpszFacename

	UpDownPageFlag = 0;
}

U11_DialigHand::~U11_DialigHand()
{
}

void U11_DialigHand::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(U11_DialigHand, CDialogEx)
	ON_BN_CLICKED(IDC_MFCBUTTON1, &U11_DialigHand::OnBnClickedMfcbutton1)
	ON_BN_CLICKED(IDC_MFCBUTTON2, &U11_DialigHand::OnBnClickedMfcbutton2)
	ON_WM_LBUTTONDOWN()
	ON_WM_PAINT()
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON1, &U11_DialigHand::OnBnClickedButton1)
END_MESSAGE_MAP()


// U11_DialigHand ��Ϣ�������


void U11_DialigHand::OnBnClickedMfcbutton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();

	U11_Dialog_Param dlg;
	dlg.DoModal();

}


void U11_DialigHand::OnBnClickedMfcbutton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	UpDownPageFlag = 1;

	EnableButtonSet();

}


BOOL U11_DialigHand::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	SetupWindow();

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}

void U11_DialigHand::SetupWindow()
{
	CMFCButton *pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON4));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(255,255,128));

	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON5));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(255,228,255));

	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON6));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(255,228,255));

	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON8));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(255,255,128));


	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON9));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(255,255,128));


	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON10));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(255,255,128));


	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON11));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(255,255,128));

	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON12));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(255,255,128));

	pButton = (CMFCButton *)GetDlgItem((IDC_MFCBUTTON13));
	pButton->m_bTransparent=FALSE;
	pButton->m_bDontUseWinXPTheme = TRUE;
	pButton->m_bDrawFocus = FALSE;
	pButton->m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
	pButton->SetFaceColor(RGB(255,255,128));

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

		if(pWnd->GetDlgCtrlID() == IDC_STATIC_TITLE)
		{
			pWnd->SetFont(&fontTitle);
		}

		pWnd = pWnd->GetWindow(GW_HWNDNEXT);
	}


}


void U11_DialigHand::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CDialogEx::OnOK();

	CDialogEx::OnLButtonDown(nFlags, point);
}


void U11_DialigHand::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: �ڴ˴������Ϣ����������
	// ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
	CRect mRect;
	int mSaveDc = dc.SaveDC();
	GetClientRect(mRect);
	CBrush mBrush;
	mBrush.CreateSolidBrush(RGB(255,255,224));
	dc.SelectObject(&mBrush);
	dc.Rectangle(mRect);
	dc.RestoreDC(mSaveDc);

}


HBRUSH U11_DialigHand::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  �ڴ˸��� DC ���κ�����

	if(nCtlColor == CTLCOLOR_STATIC)
	{
		CRect mRects;
		CPen mPen;
		mPen.CreatePen(PS_SOLID,5,RGB(0,0,255));
		int mSaveDC = pDC->SaveDC();
		pDC->SetBkMode(TRANSPARENT);
		

		if(pWnd->GetDlgCtrlID() == IDC_STATIC_A1
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A2
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A3
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A4
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A5
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A6
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A7
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A8
			|| pWnd->GetDlgCtrlID() == IDC_STATIC_A9)
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
			default:
				break;

			}

			pDC->MoveTo(mRects.TopLeft().x,mRects.TopLeft().y+6);
			pDC->LineTo(mRects.BottomRight().x,mRects.TopLeft().y+6);
			//-- ���
			pDC->MoveTo(mRects.TopLeft().x,mRects.TopLeft().y+6);
			pDC->LineTo(mRects.TopLeft().x,mRects.BottomRight().y);

			//-- �±�
			pDC->MoveTo(mRects.TopLeft().x,mRects.BottomRight().y);
			pDC->LineTo(mRects.BottomRight().x,mRects.BottomRight().y);

			//-- �ұ�
			pDC->MoveTo(mRects.BottomRight().x,mRects.TopLeft().y+6);
			pDC->LineTo(mRects.BottomRight().x,mRects.BottomRight().y);

			pDC->RestoreDC(mSaveDC);
		}
		

		return (HBRUSH)GetStockObject(HOLLOW_BRUSH);
	}

	// TODO:  ���Ĭ�ϵĲ������軭�ʣ��򷵻���һ������
	return hbr;
}

void U11_DialigHand::EnableButtonSet()
{
	if(UpDownPageFlag == 0)
	{
		//SetDlgItemText(IDC_STATIC_TITLE,"");
		//RedrawWindow();
		SetDlgItemText(IDC_STATIC_TITLE,"�ֶ�-ȡ��ģ��");
		GetDlgItem(IDC_STATIC_TITLE)->GetParent()->RedrawWindow();

		GetDlgItem(IDC_BUTTON1)->EnableWindow(FALSE);
		GetDlgItem(IDC_BUTTON1)->ShowWindow(FALSE);

		GetDlgItem(IDC_STATIC_E1)->EnableWindow(TRUE);
		GetDlgItem(IDC_STATIC_E1)->ShowWindow(TRUE);

		GetDlgItem(IDC_STATIC_E2)->EnableWindow(TRUE);
		GetDlgItem(IDC_STATIC_E2)->ShowWindow(TRUE);

		GetDlgItem(IDC_STATIC_E3)->EnableWindow(TRUE);
		GetDlgItem(IDC_STATIC_E3)->ShowWindow(TRUE);

		GetDlgItem(IDC_STATIC_E4)->EnableWindow(TRUE);
		GetDlgItem(IDC_STATIC_E4)->ShowWindow(TRUE);

		GetDlgItem(IDC_STATIC_E5)->EnableWindow(TRUE);
		GetDlgItem(IDC_STATIC_E5)->ShowWindow(TRUE);

		GetDlgItem(IDC_STATIC_E6)->EnableWindow(TRUE);
		GetDlgItem(IDC_STATIC_E6)->ShowWindow(TRUE);

		GetDlgItem(IDC_MFCBUTTON10)->EnableWindow(TRUE);
		GetDlgItem(IDC_MFCBUTTON10)->ShowWindow(TRUE);

		GetDlgItem(IDC_MFCBUTTON13)->EnableWindow(TRUE);
		GetDlgItem(IDC_MFCBUTTON13)->ShowWindow(TRUE);

		GetDlgItem(IDC_MFCBUTTON7)->EnableWindow(TRUE);
		GetDlgItem(IDC_MFCBUTTON7)->ShowWindow(TRUE);


		SetDlgItemText(IDC_MFCBUTTON8,"ȡ��λ");
		SetDlgItemText(IDC_MFCBUTTON9,"����λ1");

		SetDlgItemText(IDC_MFCBUTTON11,"����λ");
		SetDlgItemText(IDC_MFCBUTTON12,"ȡ��λ");

	}
	else if(UpDownPageFlag == 1)
	{
		
		//SetDlgItemText(IDC_STATIC_TITLE,"");
		SetDlgItemText(IDC_STATIC_TITLE,"�ֶ�-����ģ��");
		GetDlgItem(IDC_STATIC_TITLE)->GetParent()->RedrawWindow();

		GetDlgItem(IDC_BUTTON1)->EnableWindow(TRUE);
		GetDlgItem(IDC_BUTTON1)->ShowWindow(TRUE);

		GetDlgItem(IDC_STATIC_E1)->EnableWindow(FALSE);
		GetDlgItem(IDC_STATIC_E1)->ShowWindow(FALSE);

		GetDlgItem(IDC_STATIC_E2)->EnableWindow(FALSE);
		GetDlgItem(IDC_STATIC_E2)->ShowWindow(FALSE);

		GetDlgItem(IDC_STATIC_E3)->EnableWindow(FALSE);
		GetDlgItem(IDC_STATIC_E3)->ShowWindow(FALSE);

		GetDlgItem(IDC_STATIC_E4)->EnableWindow(FALSE);
		GetDlgItem(IDC_STATIC_E4)->ShowWindow(FALSE);

		GetDlgItem(IDC_STATIC_E5)->EnableWindow(FALSE);
		GetDlgItem(IDC_STATIC_E5)->ShowWindow(FALSE);

		GetDlgItem(IDC_STATIC_E6)->EnableWindow(FALSE);
		GetDlgItem(IDC_STATIC_E6)->ShowWindow(FALSE);

		GetDlgItem(IDC_MFCBUTTON10)->EnableWindow(FALSE);
		GetDlgItem(IDC_MFCBUTTON10)->ShowWindow(FALSE);

		GetDlgItem(IDC_MFCBUTTON13)->EnableWindow(FALSE);
		GetDlgItem(IDC_MFCBUTTON13)->ShowWindow(FALSE);

		GetDlgItem(IDC_MFCBUTTON7)->EnableWindow(FALSE);
		GetDlgItem(IDC_MFCBUTTON7)->ShowWindow(FALSE);

		SetDlgItemText(IDC_MFCBUTTON8,"����λ");
		SetDlgItemText(IDC_MFCBUTTON9,"����λ");

		SetDlgItemText(IDC_MFCBUTTON11,"�½�λ");
		SetDlgItemText(IDC_MFCBUTTON12,"����λ");
	}
	
}


void U11_DialigHand::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpDownPageFlag = 0;

	EnableButtonSet();
}
