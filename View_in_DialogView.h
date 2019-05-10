// View_in_DialogView.h : Schnittstelle der Klasse CView_in_DialogView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_VIEW_IN_DIALOGVIEW_H__FA533D4D_BB70_406E_B2D4_A741816D7542__INCLUDED_)
#define AFX_VIEW_IN_DIALOGVIEW_H__FA533D4D_BB70_406E_B2D4_A741816D7542__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CView_in_DialogView : public CScrollView
{
protected: // Nur aus Serialisierung erzeugen
	CView_in_DialogView();
	DECLARE_DYNCREATE(CView_in_DialogView)

// Attribute
public:
	CView_in_DialogDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CView_in_DialogView)
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
	virtual ~CView_in_DialogView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CView_in_DialogView)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Testversion in View_in_DialogView.cpp
inline CView_in_DialogDoc* CView_in_DialogView::GetDocument()
   { return (CView_in_DialogDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_VIEW_IN_DIALOGVIEW_H__FA533D4D_BB70_406E_B2D4_A741816D7542__INCLUDED_)
