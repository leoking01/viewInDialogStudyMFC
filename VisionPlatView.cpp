// View_in_DialogView.cpp : Implementierung der Klasse CVisionPlatView
//

#include "stdafx.h"
#include "VisionPlat.h"

#include "VisionPlatDoc.h"
#include "VisionPlatView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVisionPlatView

IMPLEMENT_DYNCREATE(CVisionPlatView, CScrollView)

BEGIN_MESSAGE_MAP(CVisionPlatView, CScrollView)
	//{{AFX_MSG_MAP(CVisionPlatView)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG_MAP
	// Standard-Druckbefehle
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVisionPlatView Konstruktion/Destruktion

CVisionPlatView::CVisionPlatView()
{
	// ZU ERLEDIGEN: Hier Code zur Konstruktion einfügen,

}

CVisionPlatView::~CVisionPlatView()
{
}

BOOL CVisionPlatView::PreCreateWindow(CREATESTRUCT& cs)
{
	// ZU ERLEDIGEN: Ändern Sie hier die Fensterklasse oder das Erscheinungsbild, indem Sie
	//  CREATESTRUCT cs modifizieren.

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CVisionPlatView Zeichnen

void CVisionPlatView::OnDraw(CDC* pDC)
{
	CVisionPlatDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// ZU ERLEDIGEN: Hier Code zum Zeichnen der ursprünglichen Daten hinzufügen
}

void CVisionPlatView::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// ZU ERLEDIGEN: Gesamte Größe dieser Ansicht berechnen
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

/////////////////////////////////////////////////////////////////////////////
// CVisionPlatView Drucken

BOOL CVisionPlatView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Standardvorbereitung
	return DoPreparePrinting(pInfo);
}

void CVisionPlatView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// ZU ERLEDIGEN: Zusätzliche Initialisierung vor dem Drucken hier einfügen
}

void CVisionPlatView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// ZU ERLEDIGEN: Hier Bereinigungsarbeiten nach dem Drucken einfügen
}

/////////////////////////////////////////////////////////////////////////////
// CVisionPlatView Diagnose

#ifdef _DEBUG
void CVisionPlatView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CVisionPlatView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CVisionPlatDoc* CVisionPlatView::GetDocument() // Die endgültige (nicht zur Fehlersuche kompilierte) Version ist Inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVisionPlatDoc)));
	return (CVisionPlatDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CVisionPlatView Nachrichten-Handler
