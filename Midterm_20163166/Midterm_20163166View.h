
// Midterm_20163166View.h: CMidterm20163166View 클래스의 인터페이스
//

#pragma once


class CMidterm20163166View : public CView
{
protected: // serialization에서만 만들어집니다.
	CMidterm20163166View() noexcept;
	DECLARE_DYNCREATE(CMidterm20163166View)

// 특성입니다.
public:
	CMidterm20163166Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CMidterm20163166View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
	COLORREF m_brushColor;
	COLORREF m_brushColor_do;
	COLORREF m_brushColor_re;
	COLORREF m_brushColor_mi;
	COLORREF m_brushColor_fa;
	COLORREF m_brushColor_sol;
	COLORREF m_brushColor_la;
	COLORREF m_brushColor_si;
	COLORREF m_brushColor_doSharp;
	COLORREF m_brushColor_reSharp;
	COLORREF m_brushColor_faSharp;
	COLORREF m_brushColor_solSharp;
	COLORREF m_brushColor_laSharp;

	COLORREF m_brushColor_note;
	COLORREF m_penColor;

	CPoint m_ptNote;
	CPoint m_ptNote01;
	CPoint m_ptNote02;
	CPoint m_ptNote03;
	CPoint m_ptNote04;
	CPoint m_ptNote05;
	CPoint m_ptNote06;
	CPoint m_ptNote07;
	CPoint m_ptNote08;

	CPoint m_ptSharp;
	CPoint m_ptSharp01;
	CPoint m_ptSharp02;
	CPoint m_ptSharp03;
	CPoint m_ptSharp04;
	CPoint m_ptSharp05;
	CPoint m_ptSharp06;
	CPoint m_ptSharp07;
	CPoint m_ptSharp08;

	int count = 100;
	void COUNTx();
	int COUNTy = 5000;

	void COUNTsharp();

	afx_msg void Reset();
	afx_msg void OnReset();
	afx_msg void OnUndo();
	afx_msg void OnHangle();
	COLORREF m_brushColor_start;
};

#ifndef _DEBUG  // Midterm_20163166View.cpp의 디버그 버전
inline CMidterm20163166Doc* CMidterm20163166View::GetDocument() const
   { return reinterpret_cast<CMidterm20163166Doc*>(m_pDocument); }
#endif

