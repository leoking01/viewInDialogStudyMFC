// View_in_DialogView.h : Schnittstelle der Klasse CVisionPlatView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_VIEW_IN_DIALOGVIEW_H__FA533D4D_BB70_406E_B2D4_A741816D7542__INCLUDED_)
#define AFX_VIEW_IN_DIALOGVIEW_H__FA533D4D_BB70_406E_B2D4_A741816D7542__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CVisionPlatView : public CScrollView
{
protected: // Nur aus Serialisierung erzeugen
	CVisionPlatView();
	DECLARE_DYNCREATE(CVisionPlatView)

// Attribute
public:
	CVisionPlatDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CVisionPlatView)
	public:
	virtual void OnDraw(CDC* pDC);  // überladen zum Zeichnen dieser Ansicht
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // das erste mal nach der Konstruktion aufgerufen
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CVisionPlatView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CVisionPlatView)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Testversion in View_in_DialogView.cpp
inline CVisionPlatDoc* CVisionPlatView::GetDocument()
   { return (CVisionPlatDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_VIEW_IN_DIALOGVIEW_H__FA533D4D_BB70_406E_B2D4_A741816D7542__INCLUDED_)
