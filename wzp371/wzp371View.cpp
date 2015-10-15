// wzp371View.cpp : implementation of the CWzp371View class
//

#include "stdafx.h"
#include "wzp371.h"

#include "wzp371Doc.h"
#include "wzp371View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CWzp371View

IMPLEMENT_DYNCREATE(CWzp371View, CScrollView)

BEGIN_MESSAGE_MAP(CWzp371View, CScrollView)
	//{{AFX_MSG_MAP(CWzp371View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWzp371View construction/destruction

CWzp371View::CWzp371View()
{
	// TODO: add construction code here

}

CWzp371View::~CWzp371View()
{
}

BOOL CWzp371View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CWzp371View drawing
extern LPBITMAPINFO   lpBitsInfo;
void CWzp371View::OnDraw(CDC* pDC)
{
	CWzp371Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	if (NULL == lpBitsInfo) 
		return;
	LPVOID lpBits = (LPVOID)&lpBitsInfo ->bmiColors[lpBitsInfo ->bmiHeader.biClrUsed];
	StretchDIBits (pDC->GetSafeHdc(), 
		0, 0, lpBitsInfo->bmiHeader.biWidth, lpBitsInfo->bmiHeader.biHeight,
		0, 0, lpBitsInfo->bmiHeader.biWidth, lpBitsInfo->bmiHeader.biHeight,
		lpBits, lpBitsInfo,
		DIB_RGB_COLORS, SRCCOPY);

}

void CWzp371View::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

/////////////////////////////////////////////////////////////////////////////
// CWzp371View printing

BOOL CWzp371View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CWzp371View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CWzp371View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CWzp371View diagnostics

#ifdef _DEBUG
void CWzp371View::AssertValid() const
{
	CScrollView::AssertValid();
}

void CWzp371View::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CWzp371Doc* CWzp371View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWzp371Doc)));
	return (CWzp371Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CWzp371View message handlers
