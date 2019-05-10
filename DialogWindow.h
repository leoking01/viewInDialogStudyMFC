#if !defined(AFX_DIALOGWINDOW_H__F37D2A13_EFDC_4D7E_A984_38E4A091357A__INCLUDED_)
#define AFX_DIALOGWINDOW_H__F37D2A13_EFDC_4D7E_A984_38E4A091357A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogWindow.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Rahmen CDialogWindow 

#include "DialogWindow.h"
#include "ExtraView.h"
#include "MyDialogBar.h"

class CDialogWindow : public CFrameWnd
{
	DECLARE_DYNCREATE(CDialogWindow)
protected:
	
public:
	CDialogWindow();	//declared public by myself as is the Destructor           

	// Attribute
public:
	
private:
	static BOOL m_bCreatedFlag; 
	CDialogBar m_wndDialogBar;
	CView* m_pView;
	CRuntimeClass* m_pViewClass;
	
	
	// Operationen
public:

	// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
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
	virtual ~CDialogWindow();
	
	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CDialogWindow)
	afx_msg void OnGet();
	afx_msg void OnExit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_DIALOGWINDOW_H__F37D2A13_EFDC_4D7E_A984_38E4A091357A__INCLUDED_
