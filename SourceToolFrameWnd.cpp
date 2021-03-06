// DialogWindow.cpp: Implementierungsdatei
//

#include "stdafx.h"
#include "SourceToolFrameWnd.h"
#include "SourceToolView.h"
#include <afxpriv.h> //Definition of WM_INITIALUPDATE

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

#include "VisionPlat.h"

/////////////////////////////////////////////////////////////////////////////
// CSourceToolFrameWnd

IMPLEMENT_DYNCREATE(CSourceToolFrameWnd, CFrameWnd)

BOOL CSourceToolFrameWnd::m_bCreatedFlag = FALSE;

CSourceToolFrameWnd::CSourceToolFrameWnd()
{
}

CSourceToolFrameWnd::~CSourceToolFrameWnd()
{
}

BEGIN_MESSAGE_MAP(CSourceToolFrameWnd, CFrameWnd)
	//{{AFX_MSG_MAP(CSourceToolFrameWnd)
	ON_BN_CLICKED(IDC_GET, OnGet)
	ON_BN_CLICKED(IDC_EXIT, OnExit)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Behandlungsroutinen f黵 Nachrichten CSourceToolFrameWnd 


BOOL CSourceToolFrameWnd::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext) 
{
	// TODO: Speziellen Code hier einf黦en und/oder Basisklasse aufrufen
	//hang in the view CSourceToolView, this code ist copied (but modified) from http://www.codeguru.com/doc_view/ReplacingView.shtml
	m_pViewClass = RUNTIME_CLASS(CSourceToolView);
	m_pView = (CView*)m_pViewClass->CreateObject();
	if (m_pView == NULL)
	{
		TRACE1("Warning: Dynamic create of view type %Fs failed\n", m_pViewClass->m_lpszClassName);
		return FALSE;
	}

	CCreateContext context;
	context.m_pNewViewClass = m_pViewClass;
	context.m_pNewDocTemplate = NULL;
	context.m_pLastView = NULL;
	context.m_pCurrentFrame = this;
	if (!m_pView->Create(NULL, NULL, AFX_WS_DEFAULT_VIEW, CRect(0, 0, 0, 0), 
				this, AFX_IDW_PANE_FIRST, &context))
	{
		TRACE0("Warning: couldn't create view for frame\n");
		return FALSE; 
	}
	
	m_pView->SendMessage(WM_INITIALUPDATE, 0, 0);  // WM_INITIALUPDATE is defined in afxpriv.h
	RecalcLayout();
	m_pView->UpdateWindow();

	//将视图置顶 
	if( 0 )
	{
		SetActiveView(m_pView);
	}
	//end of hang in view
	//Create the DialogBar-----  在右侧创建
	//if (  !m_wndDialogBar.Create(  this,IDD_DIALOGBAR,  CBRS_RIGHT ,IDD_DIALOGBAR  )  )
	if (  !m_wndDialogBar.Create(  this,IDD_DIALOGBAR,  CBRS_LEFT ,IDD_DIALOGBAR  )  )
	{
		TRACE("Warning: Couldn't create DialogBar!\n"  );
		return FALSE;
	}
	//end DialogBar
	return CFrameWnd::OnCreateClient(lpcs, pContext);
}


BOOL CSourceToolFrameWnd::DoModeless() //one could also add a function DoModal analogous to Dialogs 
{
	//create only one object, perhaps you don't want this, so remove this flag from the class
	if (m_bCreatedFlag)
	{
		TRACE("Warning: Only one DialogWindow is allowed!\n");
		return FALSE;
	}

	m_bCreatedFlag=TRUE; //set the flag now
			
	//calcualate the coords for the window
	CSize size;
	CRect rect;
	size.cx = ::GetSystemMetrics(SM_CXSCREEN);
	size.cy = ::GetSystemMetrics(SM_CYSCREEN);
	rect.top = size.cy > 600 ? size.cy/2 - 300 : 0; //Total size  900 * 600 Pixels or, if screen is smaller, Screensize
	rect.bottom = size.cy > 600 ? size.cy/2 + 300 : size.cy;  //center window on screen
	rect.left = size.cx > 900? size.cx/2 - 450 : 0;
	rect.right = size.cx > 900? size.cx/2 + 450 : size.cx;
	
	//further parameters for the call of CreateEx
	int Windowstyle = WS_VISIBLE | WS_OVERLAPPED | WS_MINIMIZEBOX |WS_CAPTION |WS_SYSMENU | WS_CLIPCHILDREN; //evtl sp鋞er als privateVariable mit Zugriffsmethode
	CString Titel ("DialogWindow's Title");

	return CWnd::CreateEx(NULL,NULL, Titel, Windowstyle, rect, /*this if desired to be child 
		window, else ...*/ NULL, NULL, NULL);
}



BOOL CSourceToolFrameWnd::DestroyWindow() 
{
	// TODO: Speziellen Code hier einf黦en und/oder Basisklasse aufrufen
	//Add any safety controls HERE as this function is called by the close-button
	//in the title bar!!! Call this function, if you create additional possibilities to close
	m_bCreatedFlag = FALSE;
	return CFrameWnd::DestroyWindow();
}


void CSourceToolFrameWnd::OnGet() 
{
	// TODO: Code f黵 die Behandlungsroutine der Steuerelement-Benachrichtigung hier einf黦en
	CString tempstr; //these lines are bullshit!! Do properly what you want to do, this is 
	m_wndDialogBar.GetDlgItemText(IDC_INPUT,(tempstr));//just to show how it works
	static_cast<CSourceToolView*>(m_pView)->m_strOutputtxt = tempstr += " ";
	m_pView->Invalidate();
}

void CSourceToolFrameWnd::OnExit() 
{
	// TODO: Code f黵 die Behandlungsroutine der Steuerelement-Benachrichtigung hier einf黦en
	DestroyWindow(); //Do not put any safety check here, but in the overridden DestroyWindow()!!
}
