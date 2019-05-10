// MyDialogBar.cpp: Implementierungsdatei
//

#include "stdafx.h"
#include "VisionPlat.h"
#include "SourceToolDialogBar.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CSourceToolDialogBar 

IMPLEMENT_DYNCREATE(CSourceToolDialogBar, CDialogBar)

CSourceToolDialogBar::CSourceToolDialogBar(CWnd* pParent /*=NULL*/)
	: CDialogBar(/*CSourceToolDialogBar::IDD, pParent*/)
{
	//{{AFX_DATA_INIT(CSourceToolDialogBar)
	m_input = 0;
	//}}AFX_DATA_INIT
}


void CSourceToolDialogBar::DoDataExchange(CDataExchange* pDX)
{
	CDialogBar::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSourceToolDialogBar)
	//DDX_Control(pDX, IDC_SPIN1, m_Spin1);
	DDX_Text(pDX, IDC_INPUT, m_input);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSourceToolDialogBar, CDialogBar)
	//{{AFX_MSG_MAP(CSourceToolDialogBar)
	ON_BN_CLICKED(IDC_EXIT, OnExit)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Behandlungsroutinen für Nachrichten CSourceToolDialogBar 


BOOL CSourceToolDialogBar::Create(CWnd* pParentWnd, UINT nIDTemplate, UINT nStyle, UINT nID) 
{
	// TODO: Speziellen Code hier einfügen und/oder Basisklasse aufrufen
	m_pParentWnd = pParentWnd;

	return CDialogBar::Create(pParentWnd, nIDTemplate, nStyle, nID);
}


void CSourceToolDialogBar::OnExit() 
{
	// TODO: Code für die Behandlungsroutine der Steuerelement-Benachrichtigung hier einfügen
	m_pParentWnd->DestroyWindow();
}
