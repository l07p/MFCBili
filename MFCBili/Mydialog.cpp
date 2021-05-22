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

}

CMydialog::~CMydialog()
{
}

void CMydialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMydialog, CDialogEx)
END_MESSAGE_MAP()


// CMydialog message handlers
