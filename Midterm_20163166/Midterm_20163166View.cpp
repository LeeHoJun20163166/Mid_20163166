
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
	ON_COMMAND(ID_RESET, &CMidterm20163166View::OnReset)
	ON_COMMAND(ID_UNDO, &CMidterm20163166View::OnUndo)
END_MESSAGE_MAP()

// CMidterm20163166View 생성/소멸

CMidterm20163166View::CMidterm20163166View() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.
	
	m_ptNote01.x = 5000;
	m_ptNote02.x = 5000;
	m_ptNote03.x = 5000;
	m_ptNote04.x = 5000;
	m_ptNote05.x = 5000;
	m_ptNote06.x = 5000;
	m_ptNote07.x = 5000;
	m_ptNote08.x = 5000;
	
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

	//피아노 모양
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


	//각 건반에 대한 브러쉬
	CBrush brush_do; CBrush brush_re; CBrush brush_mi; CBrush brush_fa; CBrush brush_sol; CBrush brush_la; CBrush brush_si;
	CBrush brush_doSharp; CBrush brush_reSharp; CBrush brush_faSharp; CBrush brush_solSharp; CBrush brush_laSharp;
	CBrush brush_start;
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
	pDC->MoveTo(50, 350); pDC->LineTo(50, 450);
	pDC->MoveTo(50, 350); 
	pDC->LineTo(750, 350); 
	pDC->MoveTo(50, 375);
	pDC->LineTo(750, 375);
	pDC->MoveTo(50, 400);
	pDC->LineTo(750, 400); 
	pDC->MoveTo(50, 425);
	pDC->LineTo(750, 425);
	pDC->MoveTo(50, 450);
	pDC->LineTo(750,450); 
	pDC->MoveTo(400, 350); pDC->LineTo(400, 450);
	pDC->MoveTo(750, 350); pDC->LineTo(750, 450);

	// 음표와 샵 그리기
	CBrush brush_note;
	brush_note.CreateSolidBrush(m_brushColor_note);
	pDC->SelectObject(&brush_note);
	m_brushColor_note = RGB(0, 0, 0);

	pDC->Ellipse(m_ptNote01.x - 17, m_ptNote01.y - 12, m_ptNote01.x + 17, m_ptNote01.y + 12);
	pDC->Ellipse(m_ptNote02.x - 17, m_ptNote02.y - 12, m_ptNote02.x + 17, m_ptNote02.y + 12);
	pDC->Ellipse(m_ptNote03.x - 17, m_ptNote03.y - 12, m_ptNote03.x + 17, m_ptNote03.y + 12);
	pDC->Ellipse(m_ptNote04.x - 17, m_ptNote04.y - 12, m_ptNote04.x + 17, m_ptNote04.y + 12);
	pDC->Ellipse(m_ptNote05.x - 17, m_ptNote05.y - 12, m_ptNote05.x + 17, m_ptNote05.y + 12);
	pDC->Ellipse(m_ptNote06.x - 17, m_ptNote06.y - 12, m_ptNote06.x + 17, m_ptNote06.y + 12);
	pDC->Ellipse(m_ptNote07.x - 17, m_ptNote07.y - 12, m_ptNote07.x + 17, m_ptNote07.y + 12);
	pDC->Ellipse(m_ptNote08.x - 17, m_ptNote08.y - 12, m_ptNote08.x + 17, m_ptNote08.y + 12);


	CRect sharp01(m_ptSharp01.x - 10, m_ptSharp01.y - 10, m_ptSharp01.x + 10, m_ptSharp01.y + 10);
	CRect sharp02(m_ptSharp02.x - 10, m_ptSharp02.y - 10, m_ptSharp02.x + 10, m_ptSharp02.y + 10);
	CRect sharp03(m_ptSharp03.x - 10, m_ptSharp03.y - 10, m_ptSharp03.x + 10, m_ptSharp03.y + 10);
	CRect sharp04(m_ptSharp04.x - 10, m_ptSharp04.y - 10, m_ptSharp04.x + 10, m_ptSharp04.y + 10);
	CRect sharp05(m_ptSharp05.x - 10, m_ptSharp05.y - 10, m_ptSharp05.x + 10, m_ptSharp05.y + 10);
	CRect sharp06(m_ptSharp06.x - 10, m_ptSharp06.y - 10, m_ptSharp06.x + 10, m_ptSharp06.y + 10);
	CRect sharp07(m_ptSharp07.x - 10, m_ptSharp07.y - 10, m_ptSharp07.x + 10, m_ptSharp07.y + 10);
	CRect sharp08(m_ptSharp08.x - 10, m_ptSharp08.y - 10, m_ptSharp08.x + 10, m_ptSharp08.y + 10);

	pDC->DrawText(L"#", &sharp01, DT_LEFT);
	pDC->DrawText(L"#", &sharp02, DT_LEFT);
	pDC->DrawText(L"#", &sharp03, DT_LEFT);
	pDC->DrawText(L"#", &sharp04, DT_LEFT);
	pDC->DrawText(L"#", &sharp05, DT_LEFT);
	pDC->DrawText(L"#", &sharp06, DT_LEFT);
	pDC->DrawText(L"#", &sharp07, DT_LEFT);
	pDC->DrawText(L"#", &sharp08, DT_LEFT);

	//비트맵 1
	CDC mdc;
	CBitmap s_bit, * oldbit;
	mdc.CreateCompatibleDC(pDC);
	s_bit.LoadBitmap(IDB_BITMAP1);
	oldbit = mdc.SelectObject(&s_bit);
	pDC->BitBlt(500, 100, 700, 294, &mdc, 0, 0, SRCCOPY);
	mdc.SelectObject(oldbit);
	s_bit.DeleteObject();
	mdc.DeleteDC();

	// 설명글
	CRect name(50, 5, 500,50);
	pDC->DrawText(L"기말 프로젝트 : 간단한 피아노 악보 만들기 \n 20163166 이호준\n",&name,DT_LEFT);
	
	CRect start(50, 70, 400, 100);
	pDC->DrawText(L"Enter를 눌러 시작할수 있습니다", &start, DT_LEFT);
	

	

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

	switch (nChar) {
	case 'a':
		m_brushColor_do = RGB(200, 200, 200);
		COUNTy = 475;
		COUNTx();
		count = count + 75; // count는 x좌표의 위치값
		break;
	case 's':
		m_brushColor_re = RGB(200, 200, 200);
		COUNTy = 463;
		COUNTx();
		count = count + 75;
		break;
	case 'd':
		m_brushColor_mi = RGB(200, 200, 200);
		COUNTy = 450;
		COUNTx();
		count = count + 75;
		break;
	case 'h':
		m_brushColor_fa = RGB(200, 200, 200);
		COUNTy = 438;
		COUNTx();
		count = count + 75;
		break;

	case 'j':
		m_brushColor_sol = RGB(200, 200, 200);
		COUNTy = 425;
		COUNTx();
		count = count + 75;
		break;

	case 'k':
		COUNTy = 413;
		COUNTx();
		m_brushColor_la = RGB(200, 200, 200);
		count = count + 75;
		break
			;
	case 'l':
		m_brushColor_si = RGB(200, 200, 200);
		COUNTy = 400;
		COUNTx();
		count = count + 75;
		break;

		// Sharp
	case 'w':
		m_brushColor_doSharp = RGB(200, 200, 200);
		COUNTy = 475;
		COUNTx();
		COUNTsharp();
		count = count + 75;
		break;
	case 'e':
		m_brushColor_reSharp = RGB(200, 200, 200);
		COUNTy = 463;
		COUNTx();
		COUNTsharp();
		count = count + 75;
		break;
	case 'u':
		m_brushColor_faSharp = RGB(200, 200, 200);
		COUNTy = 438;
		COUNTx();
		COUNTsharp();
		count = count + 75;
		break;
	case 'i':
		m_brushColor_solSharp = RGB(200, 200, 200);
		COUNTy = 425;
		COUNTx();
		COUNTsharp();
		count = count + 75;
		break;
	case 'o':
		m_brushColor_laSharp = RGB(200, 200, 200);
		COUNTy = 413;
		COUNTx();
		COUNTsharp();
		count = count + 75;
		break;
	}
		if (count <= 50)  count = 100;
		if (count == 400) count = 465;
		
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
	
	if (count > 775)
	{
		int ifhelp;
		CString strEnd, strHelp;
		strEnd.Format(L"악보가 완성되었습니다.");
		strHelp.Format(L"수정기능 탭에서 악보를 초기화, \n혹은 실행취소를 할 수 있습니다.");
		ifhelp = AfxMessageBox(strEnd, MB_ICONASTERISK | MB_OK);
		if (ifhelp == IDOK) {
			AfxMessageBox(strHelp, MB_ICONASTERISK | MB_OK);
		}
		count = 765;
	}

	Invalidate();
	CView::OnKeyUp(nChar, nRepCnt, nFlags);
}


void CMidterm20163166View::COUNTx()
{
	// TODO: 여기에 구현 코드 추가.
	switch (count) {
	case 100:
		m_ptNote01.x = count;
		m_ptNote01.y = COUNTy;
		break;
	case 175:
		m_ptNote02.x = count;
		m_ptNote02.y = COUNTy;
		break;
	case 250:
		m_ptNote03.x = count;   
		m_ptNote03.y = COUNTy;
		break;
	case 325:
		m_ptNote04.x = count;   
		m_ptNote04.y = COUNTy;
		break;
	case 465:
		m_ptNote05.x = count;  
		m_ptNote05.y = COUNTy;
		break;
	case 540:
		m_ptNote06.x = count; 
		m_ptNote06.y = COUNTy;
		break;
	case 615:
		m_ptNote07.x = count; 
		m_ptNote07.y = COUNTy;
		break;
	case 690:
		m_ptNote08.x = count;
		m_ptNote08.y = COUNTy;
		break;
	}



}




void CMidterm20163166View::COUNTsharp()
{
	// TODO: 여기에 구현 코드 추가.
	switch (count) {
	case 100:
		m_ptSharp01.x = count + 30;
		m_ptSharp01.y = COUNTy;
		break;
	case 175:
		m_ptSharp02.x = count + 30;
		m_ptSharp02.y = COUNTy;
		break;
	case 250:
		m_ptSharp03.x = count + 30;
		m_ptSharp03.y = COUNTy;
		break;
	case 325:
		m_ptSharp04.x = count + 30;
		m_ptSharp04.y = COUNTy;
		break;
	case 465:
		m_ptSharp05.x = count + 30;
		m_ptSharp05.y = COUNTy;
		break;
	case 540:
		m_ptSharp06.x = count + 30;
		m_ptSharp06.y = COUNTy;
		break;
	case 615:
		m_ptSharp07.x = count + 30;
		m_ptSharp07.y = COUNTy;
		break;
	case 690:
		m_ptSharp08.x = count + 30;
		m_ptSharp08.y = COUNTy;
		break;
	}

}


void CMidterm20163166View::OnReset()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.

	//음표와 샵의 포인트를 안보이게 멀리보냄
	m_ptNote01.x = 5000;
	m_ptNote02.x = 5000;
	m_ptNote03.x = 5000;
	m_ptNote04.x = 5000;
	m_ptNote05.x = 5000;
	m_ptNote06.x = 5000;
	m_ptNote07.x = 5000;
	m_ptNote08.x = 5000;

	m_ptSharp01.x = 5000;
	m_ptSharp02.x = 5000;
	m_ptSharp03.x = 5000;
	m_ptSharp04.x = 5000;
	m_ptSharp05.x = 5000;
	m_ptSharp06.x = 5000;
	m_ptSharp07.x = 5000;
	m_ptSharp08.x = 5000;

	// 위치값 count 100으로 재설정
	count = 100;

	Invalidate();

}


void CMidterm20163166View::OnUndo()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	count = count - 75;
	switch (count)
	{
	case 100:
		m_ptNote01.x = 5000;
		m_ptSharp01.x = 5000;
		break;
	case 175:
		m_ptNote02.x = 5000;
		m_ptSharp02.x = 5000;
		break;
	case 250:
		m_ptNote03.x = 5000;
		m_ptSharp03.x = 5000;
		break;
	case 325:
		m_ptNote04.x = 5000;
		m_ptSharp04.x = 5000;
		break;
	case 465:
		m_ptNote05.x = 5000;
		m_ptSharp05.x = 5000;
		count = count - 65;
		break;
	case 540:
		m_ptNote06.x = 5000;
		m_ptSharp06.x = 5000;
		break;
	case 615:
		m_ptNote07.x = 5000;
		m_ptSharp07.x = 5000;
		break;
	case 690:
		m_ptNote08.x = 5000;
		m_ptSharp08.x = 5000;
		break;
	}
	if (count < 100) count = 100;
	Invalidate();
	
}




void CMidterm20163166View::OnHangle()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.

}
