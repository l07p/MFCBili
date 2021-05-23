// Mydialog.cpp : implementation file
//

#include "pch.h"
#include "MFCBili.h"
#include "Mydialog.h"
#include "afxdialogex.h"


// CMydialog dialog

IMPLEMENT_DYNAMIC(CMydialog, CDialogEx)

CMydialog::CMydialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MYDIALOG, pParent)
{
	m_pWnd = NULL;
}

CMydialog::~CMydialog()
{
}

void CMydialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMydialog, CDialogEx)
//	ON_BN_CLICKED(IDCANCEL, &CMydialog::OnBnClickedCancel)
END_MESSAGE_MAP()

// CMydialog message handlers



BOOL CMydialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Add extra initialization here
	CString str;
	m_pWnd->GetDlgItemText(IDC_BILI_EDIT, str);
	SetDlgItemText(IDC_SUB_EDIT, str);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}


void CMydialog::OnOK()
{
	// TODO: Add your specialized code here and/or call the base class
	CString str;
	GetDlgItemText(IDC_SUB_EDIT, str);
	m_pWnd->SetDlgItemText(IDC_BILI_EDIT, str);
	CDialogEx::OnOK();
}
