// View_in_DialogDoc.cpp : Implementierung der Klasse CView_in_DialogDoc
//

#include "stdafx.h"
#include "View_in_Dialog.h"

#include "View_in_DialogDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CView_in_DialogDoc

IMPLEMENT_DYNCREATE(CView_in_DialogDoc, CDocument)

BEGIN_MESSAGE_MAP(CView_in_DialogDoc, CDocument)
	//{{AFX_MSG_MAP(CView_in_DialogDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CView_in_DialogDoc Konstruktion/Destruktion

CView_in_DialogDoc::CView_in_DialogDoc()
{
	// ZU ERLEDIGEN: Hier Code für One-Time-Konstruktion einfügen

}

CView_in_DialogDoc::~CView_in_DialogDoc()
{
}

BOOL CView_in_DialogDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einfügen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CView_in_DialogDoc Serialisierung

void CView_in_DialogDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// ZU ERLEDIGEN: Hier Code zum Speichern einfügen
	}
	else
	{
		// ZU ERLEDIGEN: Hier Code zum Laden einfügen
	}
}

/////////////////////////////////////////////////////////////////////////////
// CView_in_DialogDoc Diagnose

#ifdef _DEBUG
void CView_in_DialogDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CView_in_DialogDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CView_in_DialogDoc Befehle
