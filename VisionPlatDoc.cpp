// View_in_DialogDoc.cpp : Implementierung der Klasse CVisionPlatDoc
//

#include "stdafx.h"
#include "VisionPlat.h"

#include "VisionPlatDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVisionPlatDoc

IMPLEMENT_DYNCREATE(CVisionPlatDoc, CDocument)

BEGIN_MESSAGE_MAP(CVisionPlatDoc, CDocument)
	//{{AFX_MSG_MAP(CVisionPlatDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVisionPlatDoc Konstruktion/Destruktion

CVisionPlatDoc::CVisionPlatDoc()
{
	// ZU ERLEDIGEN: Hier Code für One-Time-Konstruktion einfügen

}

CVisionPlatDoc::~CVisionPlatDoc()
{
}

BOOL CVisionPlatDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einfügen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CVisionPlatDoc Serialisierung

void CVisionPlatDoc::Serialize(CArchive& ar)
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
// CVisionPlatDoc Diagnose

#ifdef _DEBUG
void CVisionPlatDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CVisionPlatDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CVisionPlatDoc Befehle
