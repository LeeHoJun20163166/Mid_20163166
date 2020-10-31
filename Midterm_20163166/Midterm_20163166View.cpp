
// Midterm_20163166View.cpp: CMidterm20163166View 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "Midterm_20163166.h"
#endif

#include "Midterm_20163166Doc.h"
#include "Midterm_20163166View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMidterm20163166View

IMPLEMENT_DYNCREATE(CMidterm20163166View, CView)

BEGIN_MESSAGE_MAP(CMidterm20163166View, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
	ON_WM_KEYDOWN()
	ON_WM_KEYUP()
END_MESSAGE_MAP()

// CMidterm20163166View 생성/소멸

CMidterm20163166View::CMidterm20163166View() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.


}

CMidterm20163166View::~CMidterm20163166View()
{
}

BOOL CMidterm20163166View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CMidterm20163166View 그리기

void CMidterm20163166View::OnDraw(CDC* pDC)
{
	CMidterm20163166Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
	CRect rect_do(50, 110, 100, 300);
	CRect rect_re(100, 110, 150, 300);
	CRect rect_mi(150, 110, 200, 300);
	CRect rect_fa(200, 110, 250, 300);
	CRect rect_sol(250, 110, 300, 300);
	CRect rect_la(300, 110, 350, 300);
	CRect rect_si(350, 110, 400, 300);

	CRect rect_doSharp(75, 110, 125, 200);
	CRect rect_reSharp(125, 110, 175, 200);
	CRect rect_faSharp(225, 110, 275, 200);
	CRect rect_solSharp(275, 110, 325, 200);
	CRect rect_laSharp(325, 110, 375, 200);
	//피아노 모양

	//각 건반에 대한 브러쉬
	CBrush brush_do; CBrush brush_re; CBrush brush_mi; CBrush brush_fa; CBrush brush_sol; CBrush brush_la; CBrush brush_si;
	CBrush brush_doSharp; CBrush brush_reSharp; CBrush brush_faSharp; CBrush brush_solSharp; CBrush brush_laSharp;

	//브러쉬 별로 그리기
	brush_do.CreateSolidBrush(m_brushColor_do);
	pDC->SelectObject(&brush_do);
	pDC->Rectangle(rect_do);

	brush_re.CreateSolidBrush(m_brushColor_re);
	pDC->SelectObject(&brush_re);
	pDC->Rectangle(rect_re);

	brush_mi.CreateSolidBrush(m_brushColor_mi);
	pDC->SelectObject(&brush_mi);
	pDC->Rectangle(rect_mi);

	brush_fa.CreateSolidBrush(m_brushColor_fa);
	pDC->SelectObject(&brush_fa);
	pDC->Rectangle(rect_fa);

	brush_sol.CreateSolidBrush(m_brushColor_sol);
	pDC->SelectObject(&brush_sol);
	pDC->Rectangle(rect_sol);

	brush_la.CreateSolidBrush(m_brushColor_la);
	pDC->SelectObject(&brush_la);
	pDC->Rectangle(rect_la);

	brush_si.CreateSolidBrush(m_brushColor_si);
	pDC->SelectObject(&brush_si);
	pDC->Rectangle(rect_si);

	brush_doSharp.CreateSolidBrush(m_brushColor_doSharp);
	pDC->SelectObject(&brush_doSharp);
	pDC->Rectangle(rect_doSharp);

	brush_reSharp.CreateSolidBrush(m_brushColor_reSharp);
	pDC->SelectObject(&brush_reSharp);
	pDC->Rectangle(rect_reSharp);

	brush_faSharp.CreateSolidBrush(m_brushColor_faSharp);
	pDC->SelectObject(&brush_faSharp);
	pDC->Rectangle(rect_faSharp);

	brush_solSharp.CreateSolidBrush(m_brushColor_solSharp);
	pDC->SelectObject(&brush_solSharp);
	pDC->Rectangle(rect_solSharp);

	brush_laSharp.CreateSolidBrush(m_brushColor_laSharp);
	pDC->SelectObject(&brush_laSharp);
	pDC->Rectangle(rect_laSharp);

	//건반 위의글자
	pDC->DrawText(L"\n\n\n\n\n\na", &rect_do, DT_CENTER);
	pDC->DrawText(L"\n\n\n\n\n\ns", &rect_re, DT_CENTER);
	pDC->DrawText(L"\n\n\n\n\n\nd", &rect_mi, DT_CENTER);
	pDC->DrawText(L"\n\n\n\n\n\nh", &rect_fa, DT_CENTER);
	pDC->DrawText(L"\n\n\n\n\n\nj", &rect_sol, DT_CENTER);
	pDC->DrawText(L"\n\n\n\n\n\nk", &rect_la, DT_CENTER);
	pDC->DrawText(L"\n\n\n\n\n\nl", &rect_si, DT_CENTER);

	
	pDC->DrawText(L"w", &rect_doSharp, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
	pDC->DrawText(L"e", &rect_reSharp, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
	pDC->DrawText(L"u", &rect_faSharp, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
	pDC->DrawText(L"i", &rect_solSharp, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
	pDC->DrawText(L"o", &rect_laSharp, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
	
	//악보(선)
	pDC->MoveTo(450, 150); pDC->LineTo(450, 250);
	pDC->MoveTo(450, 150); 
	pDC->LineTo(650, 150); 
	pDC->MoveTo(450, 175);
	pDC->LineTo(650, 175);
	pDC->MoveTo(450, 200);
	pDC->LineTo(650, 200); 
	pDC->MoveTo(450, 225);
	pDC->LineTo(650, 225);
	pDC->MoveTo(450, 250);
	pDC->LineTo(650, 250); 
	pDC->MoveTo(650, 150); pDC->LineTo(650, 250);

			
			CBrush brush_note;
			brush_note.CreateSolidBrush(m_brushColor_note);
			pDC->SelectObject(&brush_note);
			pDC->Ellipse(m_ptNote.x - 17, m_ptNote.y - 12, m_ptNote.x + 17, m_ptNote.y + 12);
			CRect sharp(m_ptSharp.x - 10, m_ptSharp.y - 10, m_ptSharp.x + 10, m_ptSharp.y + 10);
			pDC->DrawText(L"#", &sharp, DT_SINGLELINE );

			if (m_brushColor_do == RGB(200, 200, 200)) {
				m_ptNote = CPoint(550, 275);
				m_ptSharp = CPoint(0, 0);
				m_brushColor_note = RGB(0, 0, 0);

			}
			if (m_brushColor_re == RGB(200, 200, 200)) {
				m_ptNote = CPoint(550, 263);
				m_ptSharp = CPoint(0, 0);
				m_brushColor_note = RGB(0, 0, 0);
			}
			if (m_brushColor_mi == RGB(200, 200, 200)) {
				m_ptNote = CPoint(550, 250);
				m_ptSharp = CPoint(0, 0);
				m_brushColor_note = RGB(0, 0, 0);
			}
			if (m_brushColor_fa == RGB(200, 200, 200)) {
				m_ptNote = CPoint(550, 238);
				m_ptSharp = CPoint(0, 0);
				m_brushColor_note = RGB(0, 0, 0);
			}
			if (m_brushColor_sol == RGB(200, 200, 200)) {
				m_ptNote = CPoint(550, 225);
				m_ptSharp = CPoint(0, 0);
				m_brushColor_note = RGB(0, 0, 0);
			}
			if (m_brushColor_la == RGB(200, 200, 200)) {
				m_ptNote = CPoint(550, 213);
				m_ptSharp = CPoint(0, 0);
				m_brushColor_note = RGB(0, 0, 0);
			}
			if (m_brushColor_si == RGB(200, 200, 200)) {
				m_ptNote = CPoint(550, 200);
				m_ptSharp = CPoint(0, 0);
				m_brushColor_note = RGB(0, 0, 0);
			}
			//sharp
			

			if (m_brushColor_doSharp == RGB(200, 200, 200)) {
				m_ptNote = CPoint(550, 275);
				m_ptSharp = CPoint(580, 275);
				m_brushColor_note = RGB(0, 0, 0);

		
			}
			if (m_brushColor_reSharp == RGB(200, 200, 200)) {
				m_ptNote = CPoint(550, 263);
				m_ptSharp = CPoint(580, 263);
				m_brushColor_note = RGB(0, 0, 0);
			}
			if (m_brushColor_faSharp == RGB(200, 200, 200)) {
				m_ptNote = CPoint(550, 238);
				m_ptSharp = CPoint(580, 238);
				m_brushColor_note = RGB(0, 0, 0);

			}
			if (m_brushColor_solSharp == RGB(200, 200, 200)) {
				m_ptNote = CPoint(550, 225);
				m_ptSharp = CPoint(580, 225);
				m_brushColor_note = RGB(0, 0, 0);

			}
			if (m_brushColor_laSharp == RGB(200, 200, 200)) {
				m_ptNote = CPoint(550, 213);
				m_ptSharp = CPoint(580, 213);
				m_brushColor_note = RGB(0, 0, 0);
			}
			CRect name(50, 5, 500,100);
			pDC->DrawText(L"중간 프로젝트 : 음표위치를 출력하는 피아노 \n 20163166 이호준\n\n엔터를 눌러 시작",&name,DT_LEFT);
			 
}
	

	

		


// CMidterm20163166View 인쇄

BOOL CMidterm20163166View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CMidterm20163166View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CMidterm20163166View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CMidterm20163166View 진단

#ifdef _DEBUG
void CMidterm20163166View::AssertValid() const
{
	CView::AssertValid();
}

void CMidterm20163166View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMidterm20163166Doc* CMidterm20163166View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMidterm20163166Doc)));
	return (CMidterm20163166Doc*)m_pDocument;
}
#endif //_DEBUG


// CMidterm20163166View 메시지 처리기

void CMidterm20163166View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}

void CMidterm20163166View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	//각 건반이 눌릴때 색깔변경
	switch (nChar) {
	case 'a':
		m_brushColor_do = RGB(200, 200, 200);
		m_brushColor_note = RGB(0, 0, 0);
		break;

	case 's':
		m_brushColor_re = RGB(200, 200, 200);
		m_brushColor_note = RGB(0, 0, 0);
		break;
	case 'd':
		m_brushColor_mi = RGB(200, 200, 200);
		m_brushColor_note = RGB(0, 0, 0);
		break;
	case 'h':
		m_brushColor_fa = RGB(200, 200, 200);
		m_brushColor_note = RGB(0, 0, 0);
		break;
	case 'j':
		m_brushColor_sol = RGB(200, 200, 200);
		m_brushColor_note = RGB(0, 0, 0);
		break;
	case 'k':
		m_brushColor_la = RGB(200, 200, 200);
		m_brushColor_note = RGB(0, 0, 0);
		break;
	case 'l':
		m_brushColor_si = RGB(200, 200, 200);
		m_brushColor_note = RGB(0, 0, 0);
		break;
	
		// Sharp
	case 'w':
		m_brushColor_doSharp = RGB(200, 200, 200);
		break;
	case 'e':
		m_brushColor_reSharp = RGB(200, 200, 200);
		break;
	case 'u':
		m_brushColor_faSharp = RGB(200, 200, 200);
		break;
	case 'i':
		m_brushColor_solSharp = RGB(200, 200, 200);
		break;
	case 'o':
		m_brushColor_laSharp = RGB(200, 200, 200);
		break;
	}

	Invalidate();
	
	CView::OnChar(nChar, nRepCnt, nFlags);
}





void CMidterm20163166View::OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	
	// 건반을 땔때마다 다시 흰 색깔로 변경
	m_brushColor_do = RGB(255, 255, 255);
	m_brushColor_re = RGB(255, 255, 255);
	m_brushColor_mi = RGB(255, 255, 255);
	m_brushColor_fa = RGB(255, 255, 255);
	m_brushColor_sol = RGB(255, 255, 255);
	m_brushColor_la = RGB(255, 255, 255);
	m_brushColor_si = RGB(255, 255, 255);

	//Sharp
	m_brushColor_doSharp = RGB(255, 255, 255);
	m_brushColor_reSharp = RGB(255, 255, 255);
	m_brushColor_faSharp = RGB(255, 255, 255);
	m_brushColor_solSharp = RGB(255, 255, 255);
	m_brushColor_laSharp = RGB(255, 255, 255);
	
			Invalidate();
			CView::OnKeyUp(nChar, nRepCnt, nFlags);
		}
	