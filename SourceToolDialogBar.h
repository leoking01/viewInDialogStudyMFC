#if !defined(AFX_MYDIALOGBAR_H__59522466_7D81_4BAF_B749_0FC46851D0AA__INCLUDED_)
#define AFX_MYDIALOGBAR_H__59522466_7D81_4BAF_B749_0FC46851D0AA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "VisionPlat.h"

// MyDialogBar.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CSourceToolDialogBar 

class CSourceToolDialogBar : public CDialogBar
{
	DECLARE_DYNCREATE(CSourceToolDialogBar)
		
// Konstruktion
public:
	CSourceToolDialogBar(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CSourceToolDialogBar)
	enum { IDD = IDD_DIALOGBAR };
	//CSpinButtonCtrl	m_Spin1;
	int		m_input;
	//}}AFX_DATA

private: 
	CWnd* m_pParentWnd;


// Überschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktionsüberschreibungen
	//{{AFX_VIRTUAL(CSourceToolDialogBar)
	public:
	virtual BOOL Create(CWnd* pParentWnd, UINT nIDTemplate, UINT nStyle, UINT nID);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterstützung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CSourceToolDialogBar)
	afx_msg void OnExit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // AFX_MYDIALOGBAR_H__59522466_7D81_4BAF_B749_0FC46851D0AA__INCLUDED_
