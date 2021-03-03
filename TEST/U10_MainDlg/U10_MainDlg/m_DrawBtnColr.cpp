// m_DrawBtnColr.cpp : ʵ���ļ�
//

#include "stdafx.h"
//#include "U10_MainDlg.h"
#include "m_DrawBtnColr.h"


// m_DrawBtnColr

IMPLEMENT_DYNAMIC(m_DrawBtnColr, CButton)

m_DrawBtnColr::m_DrawBtnColr()
{
	m_Pen.CreatePen(PS_SOLID,1,RGB(255,255,255));

	//-- ��ť����ɫ
	BtnColr[0].CreateSolidBrush(RGB(220,221,221));
	BtnColr[2].CreateSolidBrush(RGB(28,28,28));
	BtnColr[1].CreateSolidBrush(RGB(128,221,255));

	//-- ��ť������ɫ
	TextColor = RGB(255,255,255);

	//--- ��������
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

}

m_DrawBtnColr::~m_DrawBtnColr()
{
	
	m_Pen.DeleteObject();
	BtnColr[0].DeleteObject();
	BtnColr[1].DeleteObject();
	BtnColr[2].DeleteObject();
}


BEGIN_MESSAGE_MAP(m_DrawBtnColr, CButton)
END_MESSAGE_MAP()



// m_DrawBtnColr ��Ϣ�������




void m_DrawBtnColr::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct)
{

	// TODO:  ������Ĵ����Ի���ָ����

	//���ư�ť����ɫ
	CDC* pDC = CDC::FromHandle(lpDrawItemStruct->hDC);
	int nSaveDC = pDC->SaveDC(); //�洢��ǰ�豸����,�Ա��ͼ����ʱ�ָ�ԭ��״̬

	pDC->SelectObject(&BtnColr[0]);  //ѡ��ť����״̬(Ĭ��״̬)�µĻ�ˢ
	pDC->SelectObject(&m_Pen); //ѡ�񻭱�
	CRect rct = lpDrawItemStruct->rcItem;  //��ȡ��ť��������

	/*if(lpDrawItemStruct->itemState & ODS_SELECTED) //���ư�ť����ʱ����ɫ
	{
		pDC->SelectObject(&BtnColr[2]);
	}*/
	 
	CBrush * OldBrush;
	//�ػ�����
	pDC->SetBkMode(TRANSPARENT); //�ػ��ı�ʱ������������͸��ģʽ,���ѡ��OPAQUE(��͸��),���ı������а�ɫ���α߿�,ʮ���ѿ�
	CString strText;
	strText="";  
	GetWindowText(strText);   //��ȡ��ť�ı�
	
	CRect temp = rct;
	//-- ��ȡ���ָ߶�
	int height = pDC->DrawText(strText,temp,DT_CENTER || DT_WORDBREAK |  DT_CALCRECT | DT_EDITCONTROL);
	
	OldBrush = pDC->SelectObject(&BtnColr[0]);
	pDC->Rectangle(&rct); //-- ����һ�����滭��������
	//pDC->SelectObject(OldBrush);
	//pDC->Rectangle(&mHalfRt);  //���ƾ���

	
	//-- ����һ��İ�ť
	CRect mHalfRt;
	mHalfRt.BottomRight().x = rct.BottomRight().x / 2;
	mHalfRt.BottomRight().y = rct.BottomRight().y;
	pDC->Rectangle(&mHalfRt);  //���ƾ���

	OldBrush = pDC->SelectObject(&BtnColr[1]);  

	pDC->Rectangle(mHalfRt.BottomRight().x,rct.TopLeft().y,rct.BottomRight().x,rct.BottomRight().y);

	pDC->SelectObject(OldBrush);

	rct.DeflateRect(0,(rct.Height()-height)/2);

	//pDC->SelectObject(&fontPrg); //-- ��������
	pDC->SetTextColor(TextColor);
	pDC->DrawText(strText,rct,DT_CENTER /*| DT_VCENTER */| DT_EDITCONTROL | DT_WORDBREAK );  //�ػ水ť�ı�


	//RedrawWindow();

	//�ָ��豸����
	pDC->RestoreDC(nSaveDC); 
}


void m_DrawBtnColr::PreSubclassWindow()
{
	// TODO: �ڴ����ר�ô����/����û���

	ModifyStyle(0,BS_OWNERDRAW);  //��Ϊ�Ի���

	CButton::PreSubclassWindow();

}

void m_DrawBtnColr::SetBkColor( COLORREF m_Rgb,int val )
{
	this->BtnColr[val].DeleteObject();
	this->BtnColr[val].CreateSolidBrush(m_Rgb);
}

void m_DrawBtnColr::SetTextColor( COLORREF m_Rgb )
{
	TextColor = m_Rgb;
}
