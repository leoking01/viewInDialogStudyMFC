// MyDialogBar.cpp: Implementierungsdatei
//

#include "stdafx.h"
#include "View_in_Dialog.h"
#include "MyDialogBar.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CMyDialogBar 

IMPLEMENT_DYNCREATE(CMyDialogBar, CDialogBar)

CMyDialogBar::CMyDialogBar(CWnd* pParent /*=NULL*/)
	: CDialogBar(/*CMyDialogBar::IDD, pParent*/)
{
	//{{AFX_DATA_INIT(CMyDialogBar)
	m_input = 0;
	//}}AFX_DATA_INIT
}


void CMyDialogBar::DoDataExchange(CDataExchange* pDX)
{
	CDialogBar::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyDialogBar)
	//DDX_Control(pDX, IDC_SPIN1, m_Spin1);
	DDX_Text(pDX, IDC_INPUT, m_input);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CMyDialogBar, CDialogBar)
	//{{AFX_MSG_MAP(CMyDialogBar)
	ON_BN_CLICKED(IDC_EXIT, OnExit)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Behandlungsroutinen für Nachrichten CMyDialogBar 


BOOL CMyDialogBar::Create(CWnd* pParentWnd, UINT nIDTemplate, UINT nStyle, UINT nID) 
{
	// TODO: Speziellen Code hier einfügen und/oder Basisklasse aufrufen
	m_pParentWnd = pParentWnd;

	return CDialogBar::Create(pParentWnd, nIDTemplate, nStyle, nID);
}


void CMyDialogBar::OnExit() 
{
	// TODO: Code für die Behandlungsroutine der Steuerelement-Benachrichtigung hier einfügen
	m_pParentWnd->DestroyWindow();
}
