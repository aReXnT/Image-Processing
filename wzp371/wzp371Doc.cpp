// wzp371Doc.cpp : implementation of the CWzp371Doc class
//

#include "stdafx.h"
#include "wzp371.h"

#include "wzp371Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CWzp371Doc

IMPLEMENT_DYNCREATE(CWzp371Doc, CDocument)

BEGIN_MESSAGE_MAP(CWzp371Doc, CDocument)
	//{{AFX_MSG_MAP(CWzp371Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWzp371Doc construction/destruction

CWzp371Doc::CWzp371Doc()
{
	// TODO: add one-time construction code here

}

CWzp371Doc::~CWzp371Doc()
{
}

BOOL CWzp371Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CWzp371Doc serialization

void CWzp371Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CWzp371Doc diagnostics

#ifdef _DEBUG
void CWzp371Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CWzp371Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CWzp371Doc commands
BOOL LoadBmpFile (char*);
BOOL CWzp371Doc::OnOpenDocument(LPCTSTR lpszPathName) 
{
	if (!CDocument::OnOpenDocument(lpszPathName))
		return FALSE;
	
	// TODO: Add your specialized creation code here
	LoadBmpFile((char*) lpszPathName);
	return TRUE;
}
