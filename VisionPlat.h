// View_in_Dialog.h : Haupt-Header-Datei f�r die Anwendung VIEW_IN_DIALOG
//

#if !defined(AFX_VIEW_IN_DIALOG_H__428FD508_D93A_4869_98B1_FCA65A1C9DE5__INCLUDED_)
#define AFX_VIEW_IN_DIALOG_H__428FD508_D93A_4869_98B1_FCA65A1C9DE5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // Hauptsymbole

/////////////////////////////////////////////////////////////////////////////
// CVisionPlat:
// Siehe View_in_Dialog.cpp f�r die Implementierung dieser Klasse
//

class CVisionPlat : public CWinApp
{
public:
	CVisionPlat();

// �berladungen
	// Vom Klassenassistenten generierte �berladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CVisionPlat)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementierung
	//{{AFX_MSG(CVisionPlat)
	afx_msg void OnAppAbout();
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // !defined(AFX_VIEW_IN_DIALOG_H__428FD508_D93A_4869_98B1_FCA65A1C9DE5__INCLUDED_)
