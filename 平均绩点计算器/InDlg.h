#pragma once


// InDlg �Ի���

class InDlg : public CDialog
{
	DECLARE_DYNAMIC(InDlg)

public:
	InDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~InDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_In };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnDropFiles(HDROP hDropInfo);
};
