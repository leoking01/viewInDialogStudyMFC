// View_in_DialogDoc.h : Schnittstelle der Klasse CView_in_DialogDoc
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_VIEW_IN_DIALOGDOC_H__52C6D5C6_D508_45B9_8689_FA724B23B928__INCLUDED_)
#define AFX_VIEW_IN_DIALOGDOC_H__52C6D5C6_D508_45B9_8689_FA724B23B928__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CView_in_DialogDoc : public CDocument
{
protected: // Nur aus Serialisierung erzeugen
	CView_in_DialogDoc();
	DECLARE_DYNCREATE(CView_in_DialogDoc)

// Attribute
public:

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CView_in_DialogDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CView_in_DialogDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CView_in_DialogDoc)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_VIEW_IN_DIALOGDOC_H__52C6D5C6_D508_45B9_8689_FA724B23B928__INCLUDED_)
