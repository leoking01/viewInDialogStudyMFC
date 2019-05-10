#if !defined(AFX_DIALOGWINDOW_H__F37D2A13_EFDC_4D7E_A984_38E4A091357A__INCLUDED_)
#define AFX_DIALOGWINDOW_H__F37D2A13_EFDC_4D7E_A984_38E4A091357A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogWindow.h : Header-Datei
/////////////////////////////////////////////////////////////////////////////
// Rahmen CSourceToolFrameWnd 

#include "SourceToolFrameWnd.h"
#include "SourceToolView.h"
#include "SourceToolDialogBar.h"

class CSourceToolFrameWnd : public CFrameWnd
{
	DECLARE_DYNCREATE(CSourceToolFrameWnd)
protected:
	
public:
	CSourceToolFrameWnd();	//declared public by myself as is the Destructor           

	// Attribute
public:
	
private:
	static BOOL m_bCreatedFlag; 
	CDialogBar m_wndDialogBar;
	CView* m_pView;
	CRuntimeClass* m_pViewClass;
	
	// Operationen
public:
	// Überschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktionsüberschreibungen
	//{{AFX_VIRTUAL(CExtraWindow)
public:
	virtual BOOL DestroyWindow();
protected:
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
	//}}AFX_VIRTUAL

private:
	
public:
	BOOL DoModeless(); //starts a modeless DialogWindow
	static BOOL IsCreated() {return m_bCreatedFlag;} //to control the menu item

	// Implementierung
protected:
public:
	virtual ~CSourceToolFrameWnd();
	
	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CSourceToolFrameWnd)
	afx_msg void OnGet();
	afx_msg void OnExit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // AFX_DIALOGWINDOW_H__F37D2A13_EFDC_4D7E_A984_38E4A091357A__INCLUDED_
