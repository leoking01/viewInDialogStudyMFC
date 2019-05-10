// View_in_DialogView.cpp : Implementierung der Klasse CView_in_DialogView
//

#include "stdafx.h"
#include "View_in_Dialog.h"

#include "View_in_DialogDoc.h"
#include "View_in_DialogView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CView_in_DialogView

IMPLEMENT_DYNCREATE(CView_in_DialogView, CScrollView)

BEGIN_MESSAGE_MAP(CView_in_DialogView, CScrollView)
	//{{AFX_MSG_MAP(CView_in_DialogView)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG_MAP
	// Standard-Druckbefehle
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CView_in_DialogView Konstruktion/Destruktion

CView_in_DialogView::CView_in_DialogView()
{
	// ZU ERLEDIGEN: Hier Code zur Konstruktion einfügen,

}

CView_in_DialogView::~CView_in_DialogView()
{
}

BOOL CView_in_DialogView::PreCreateWindow(CREATESTRUCT& cs)
{
	// ZU ERLEDIGEN: Ändern Sie hier die Fensterklasse oder das Erscheinungsbild, indem Sie
	//  CREATESTRUCT cs modifizieren.

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CView_in_DialogView Zeichnen

void CView_in_DialogView::OnDraw(CDC* pDC)
{
	CView_in_DialogDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// ZU ERLEDIGEN: Hier Code zum Zeichnen der ursprünglichen Daten hinzufügen
}

void CView_in_DialogView::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// ZU ERLEDIGEN: Gesamte Größe dieser Ansicht berechnen
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

/////////////////////////////////////////////////////////////////////////////
// CView_in_DialogView Drucken

BOOL CView_in_DialogView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Standardvorbereitung
	return DoPreparePrinting(pInfo);
}

void CView_in_DialogView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// ZU ERLEDIGEN: Zusätzliche Initialisierung vor dem Drucken hier einfügen
}

void CView_in_DialogView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// ZU ERLEDIGEN: Hier Bereinigungsarbeiten nach dem Drucken einfügen
}

/////////////////////////////////////////////////////////////////////////////
// CView_in_DialogView Diagnose

#ifdef _DEBUG
void CView_in_DialogView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CView_in_DialogView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CView_in_DialogDoc* CView_in_DialogView::GetDocument() // Die endgültige (nicht zur Fehlersuche kompilierte) Version ist Inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CView_in_DialogDoc)));
	return (CView_in_DialogDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CView_in_DialogView Nachrichten-Handler
