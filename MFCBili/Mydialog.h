#pragma once


// CMydialog dialog

class CMydialog : public CDialogEx
{
	DECLARE_DYNAMIC(CMydialog)

public:
	CMydialog(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CMydialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MYDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnBnClickedCancel();
//	virtual void PostNcDestroy()
//	{
//		// TODO: Add your specialized code here and/or call the base class
//		//delete this;
//		CDialogEx::PostNcDestroy();
//	}
//	virtual void PostNcDestroy();
};
