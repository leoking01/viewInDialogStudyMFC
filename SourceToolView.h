#if !defined(AFX_EXTRAVIEW_H__6052634D_A5C4_44D3_9AF2_492231EED492__INCLUDED_)
#define AFX_EXTRAVIEW_H__6052634D_A5C4_44D3_9AF2_492231EED492__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ExtraView.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Ansicht CVExtraView 



class CSourceToolView : public CScrollView
//class CSourceToolView : public CFormView
{
protected:

public:
	CSourceToolView();           // declared public by myself as is the Destructor
	DECLARE_DYNCREATE(CSourceToolView)
		
// Attribute
public:
	friend class CSourceToolFrameWnd; 
	
public:
	CString m_strOutput, m_strOutputtxt; //just to show how it works
	
	
// Operationen
public:

// Überschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktionsüberschreibungen
	//{{AFX_VIRTUAL(CSourceToolView)
	public:
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	protected:
	virtual void OnDraw(CDC* pDC);      // Überschrieben zum Zeichnen dieser Ansicht
	virtual void OnInitialUpdate();     // Zum ersten Mal nach der Konstruktion
	//}}AFX_VIRTUAL
	
// Implementierung
protected:

public:
	virtual ~CSourceToolView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CSourceToolView)
		// HINWEIS - Der Klassen-Assistent fügt hier Member-Funktionen ein und entfernt diese.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // AFX_EXTRAVIEW_H__6052634D_A5C4_44D3_9AF2_492231EED492__INCLUDED_
