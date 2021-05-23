// Mydialog.cpp : implementation file
//

#include "pch.h"
#include "MFCBili.h"
#include "Mydialog.h"
#include "afxdialogex.h"

extern CString strText;

// CMydialog dialog

IMPLEMENT_DYNAMIC(CMydialog, CDialogEx)

CMydialog::CMydialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MYDIALOG, pParent)
{

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


//void CMydialog::OnBnClickedCancel()
//{
//	// TODO: Add your control notification handler code here
//	DestroyWindow();
//	CDialogEx::OnCancel();
//}



//void CMydialog::PostNcDestroy()
//{
//	// TODO: Add your specialized code here and/or call the base class
//	delete this;
//	CDialogEx::PostNcDestroy();
//}

BOOL CMydialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Add extra initialization here
	SetDlgItemText(IDC_SUB_EDIT, strText);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}


void CMydialog::OnOK()
{
	// TODO: Add your specialized code here and/or call the base class
	GetDlgItemText(IDC_SUB_EDIT, strText);
	CDialogEx::OnOK();
}
