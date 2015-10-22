// wzp371View.h : interface of the CWzp371View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_WZP371VIEW_H__D286D3BD_B4F7_47DA_862D_CD61AE9A3D9D__INCLUDED_)
#define AFX_WZP371VIEW_H__D286D3BD_B4F7_47DA_862D_CD61AE9A3D9D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CWzp371View : public CScrollView
{
protected: // create from serialization only
	CWzp371View();
	DECLARE_DYNCREATE(CWzp371View)

// Attributes
public:
	CWzp371Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWzp371View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CWzp371View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CWzp371View)
	afx_msg void OnGrey();
	afx_msg void OnUpdateGrey(CCmdUI* pCmdUI);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in wzp371View.cpp
inline CWzp371Doc* CWzp371View::GetDocument()
   { return (CWzp371Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WZP371VIEW_H__D286D3BD_B4F7_47DA_862D_CD61AE9A3D9D__INCLUDED_)
