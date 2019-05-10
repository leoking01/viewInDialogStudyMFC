// ExtraView.cpp: Implementierungsdatei
//

#include "stdafx.h"
#include "ExtraView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CExtraView

IMPLEMENT_DYNCREATE(CExtraView, CScrollView)

CExtraView::CExtraView()
{
}

CExtraView::~CExtraView()
{
}


BEGIN_MESSAGE_MAP(CExtraView, CScrollView)
	//{{AFX_MSG_MAP(CExtraView)
		// HINWEIS - Der Klassen-Assistent fügt hier Zuordnungsmakros ein und entfernt diese.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Zeichnung CExtraView 

void CExtraView::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// ZU ERLEDIGEN: Gesamte Größe dieser Ansicht berechnen
	
	CSize Gesamtgroesse, Seitengroesse, Zeilengroesse; //sorry, I chose German names
	CRect Clientrect; // Gesamtgroesse = total_size, Seitengroesse = form_size, 
	Gesamtgroesse.cx = 1500; //Zeilengroesse = line_size
	Gesamtgroesse.cy = 1000;
	GetClientRect(&Clientrect);
	Seitengroesse.cx = Clientrect.right - Clientrect.left;
	Seitengroesse.cy = Clientrect.bottom - Clientrect.top;
	Zeilengroesse.cx = Zeilengroesse.cy = 1;
	SetScrollSizes (MM_TEXT, Gesamtgroesse, Seitengroesse, Zeilengroesse);
	
	//initialize m_strOutputtxt
	m_strOutputtxt = "Hello! ";
}

void CExtraView::OnDraw(CDC* pDC)
{
	//CDocument* pDoc = GetDocument(); // In my project I needed a Document-independent Viewclass. Exchange it by your ViewClass.
	// ZU ERLEDIGEN: Code zum Zeichnen hier einfügen
	//create the output, just to have any page-filling output:
	int lines, cols;
	m_strOutput = "";
	const  int  w = 4;  // 100  
	const int  h = 3;  //  50  
	for(cols=0; cols < w; cols++)
	{
		m_strOutput += m_strOutputtxt ;
	}

	for(lines=0; lines <h; lines++)
	{
		pDC->TextOut(0,lines*50,m_strOutput);
	}
}

/////////////////////////////////////////////////////////////////////////////
// Diagnose CExtraView

#ifdef _DEBUG
void CExtraView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CExtraView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// Behandlungsroutinen für Nachrichten CExtraView 

BOOL CExtraView::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext) 
{
	// TODO: Speziellen Code hier einfügen und/oder Basisklasse aufrufen
	
	return CWnd::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);

}



