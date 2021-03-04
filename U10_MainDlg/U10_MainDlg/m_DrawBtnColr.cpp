// m_DrawBtnColr.cpp : 实现文件
//

#include "stdafx.h"
//#include "U10_MainDlg.h"
#include "m_DrawBtnColr.h"


// m_DrawBtnColr

IMPLEMENT_DYNAMIC(m_DrawBtnColr, CButton)

m_DrawBtnColr::m_DrawBtnColr()
{
	m_Pen.CreatePen(PS_SOLID,1,RGB(255,255,255));

	//-- 按钮背景色
	BtnColr[0].CreateSolidBrush(RGB(220,221,221));
	BtnColr[2].CreateSolidBrush(RGB(28,28,28));
	BtnColr[1].CreateSolidBrush(RGB(128,221,255));

	//-- 按钮文字颜色
	TextColor = RGB(255,255,255);

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



// m_DrawBtnColr 消息处理程序




void m_DrawBtnColr::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct)
{

	// TODO:  添加您的代码以绘制指定项

	//绘制按钮背景色
	CDC* pDC = CDC::FromHandle(lpDrawItemStruct->hDC);
	int nSaveDC = pDC->SaveDC(); //存储当前设备环境,以便绘图结束时恢复原来状态

	pDC->SelectObject(&BtnColr[0]);  //选择按钮正常状态(默认状态)下的画刷
	pDC->SelectObject(&m_Pen); //选择画笔
	CRect rct = lpDrawItemStruct->rcItem;  //获取按钮矩形区域

	/*if(lpDrawItemStruct->itemState & ODS_SELECTED) //绘制按钮按下时的颜色
	{
		pDC->SelectObject(&BtnColr[2]);
	}*/
	 
	CBrush * OldBrush;
	//重绘字体
	pDC->SetBkMode(TRANSPARENT); //重绘文本时步擦除背景即透明模式,如果选择OPAQUE(不透明),在文本四周有白色矩形边框,十分难看
	CString strText;
	strText="";  
	GetWindowText(strText);   //获取按钮文本
	
	CRect temp = rct;
	//-- 获取文字高度
	int height = pDC->DrawText(strText,temp,DT_CENTER || DT_WORDBREAK |  DT_CALCRECT | DT_EDITCONTROL);
	
	OldBrush = pDC->SelectObject(&BtnColr[0]);
	pDC->Rectangle(&rct); //-- 覆盖一下上面画出的文字
	//pDC->SelectObject(OldBrush);
	//pDC->Rectangle(&mHalfRt);  //绘制矩形

	
	//-- 绘制一半的按钮
	CRect mHalfRt;
	mHalfRt.BottomRight().x = rct.BottomRight().x / 2;
	mHalfRt.BottomRight().y = rct.BottomRight().y;
	pDC->Rectangle(&mHalfRt);  //绘制矩形

	OldBrush = pDC->SelectObject(&BtnColr[1]);  

	pDC->Rectangle(mHalfRt.BottomRight().x,rct.TopLeft().y,rct.BottomRight().x,rct.BottomRight().y);

	pDC->SelectObject(OldBrush);

	rct.DeflateRect(0,(rct.Height()-height)/2);

	//pDC->SelectObject(&fontPrg); //-- 设置字体
	pDC->SetTextColor(TextColor);
	pDC->DrawText(strText,rct,DT_CENTER /*| DT_VCENTER */| DT_EDITCONTROL | DT_WORDBREAK );  //重绘按钮文本


	//RedrawWindow();

	//恢复设备环境
	pDC->RestoreDC(nSaveDC); 
}


void m_DrawBtnColr::PreSubclassWindow()
{
	// TODO: 在此添加专用代码和/或调用基类

	ModifyStyle(0,BS_OWNERDRAW);  //改为自绘风格

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
