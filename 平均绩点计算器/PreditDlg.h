#pragma once


// PreditDlg �Ի���

class PreditDlg : public CDialog
{
	DECLARE_DYNAMIC(PreditDlg)

public:
	PreditDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~PreditDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PRE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	int m_pos = -1;
	double GetGPA = 0;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3(); 
	afx_msg void OnBnClickedRadio4();
protected:
		afx_msg LRESULT OnGetList(WPARAM wParam, LPARAM lParam);
public:
	double m_NGPA;
	float m_NCredit;
	float m_FCredit;
	double m_gGPA;
	float m_NGCredit;
	afx_msg void OnBnClickedButton1();
};
