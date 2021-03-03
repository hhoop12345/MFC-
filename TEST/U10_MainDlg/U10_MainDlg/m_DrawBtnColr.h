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
	CBrush BtnColr[3];  //--- ��ˢ
	CPen m_Pen; //--- ����
	COLORREF TextColor;  //-- ������ɫ
	CFont fontPrg;
	//--- ���ð�ť������ɫ
	//--- val==0Ϊī����ɫ,val==1Ϊ��ť��������ɫ
	void SetBkColor(COLORREF m_Rgb,int val);
	void SetTextColor(COLORREF m_Rgb);
};


