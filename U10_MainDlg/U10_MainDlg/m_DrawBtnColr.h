#pragma once


// m_DrawBtnColr

class m_DrawBtnColr : public CButton
{
	DECLARE_DYNAMIC(m_DrawBtnColr)

public:
	m_DrawBtnColr();
	virtual ~m_DrawBtnColr();

protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	virtual void PreSubclassWindow();

public:
	CBrush BtnColr[3];  //--- 画刷
	CPen m_Pen; //--- 画笔
	COLORREF TextColor;  //-- 文字颜色
	CFont fontPrg;
	//--- 设置按钮背景颜色
	//--- val==0为墨点颜色,val==1为按钮点击后的颜色
	void SetBkColor(COLORREF m_Rgb,int val);
	void SetTextColor(COLORREF m_Rgb);
};


