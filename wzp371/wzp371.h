// wzp371.h : main header file for the WZP371 application
//

#if !defined(AFX_WZP371_H__C7BD6372_2920_4C82_A3D7_77CE5EA0444C__INCLUDED_)
#define AFX_WZP371_H__C7BD6372_2920_4C82_A3D7_77CE5EA0444C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CWzp371App:
// See wzp371.cpp for the implementation of this class
//

class CWzp371App : public CWinApp
{
public:
	CWzp371App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWzp371App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CWzp371App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WZP371_H__C7BD6372_2920_4C82_A3D7_77CE5EA0444C__INCLUDED_)
