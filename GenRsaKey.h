
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//
////////////////////////////////////////////////////////////////////////////////////////////////////
#if !defined(AFX_GENRSAKEY_H__44E7A422_6146_4324_B682_3EC19F2053E1__INCLUDED_)
#define AFX_GENRSAKEY_H__44E7A422_6146_4324_B682_3EC19F2053E1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// GenRsaKey.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CGenRsaKey dialog

class CGenRsaKey : public CDialog
{
// Construction
public:

	CGenRsaKey(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CGenRsaKey)
	enum { IDD = IDD_GEN_RSA_KEY };
	int		m_SelectButton;
	CString	m_strSrcPath;
	CString	m_strDestPath;
	CString	m_strPWD;
	CString	m_strSymDestPath;
	CString	m_strSymSrcPath;
	CString	m_strSSrcPath;
	CString	m_strVDestPath;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGenRsaKey)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CGenRsaKey)
	afx_msg void OnGenRsaKey();
	afx_msg void OnExportKey();
	afx_msg void OnOpenButton();
	afx_msg void OnSaveButton();
	afx_msg void OnRsaEncrypt();
	afx_msg void OnRsaDecrypt();
	afx_msg void OnSymOpenButton();
	afx_msg void OnSymSaveButton2();
	afx_msg void OnSymSaveButton();
	afx_msg void OnEncrypt();
	afx_msg void OnDecrypt();
	afx_msg void OnSOpenButton();
	afx_msg void OnVerifySaveButton();
	afx_msg void OnRsaSign();
	afx_msg void OnRsaVerify();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GENRSAKEY_H__44E7A422_6146_4324_B682_3EC19F2053E1__INCLUDED_)
