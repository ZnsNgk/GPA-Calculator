
// ƽ�����������Dlg.h : ͷ�ļ�
//

#pragma once

// Cƽ�����������Dlg �Ի���
class Cƽ�����������Dlg : public CDialogEx
{
// ����
public:
	Cƽ�����������Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;
	
	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP();
	afx_msg LRESULT OnGetmsg(WPARAM wParam, LPARAM lParam);
public:
	int m_num;
	CString m_name;
	float m_credit;
	int m_point;
	bool m_ins;
	int m_level;
	short error=0;
	CString GPA;
	double m_GPA;
	afx_msg void OnBnClickedExit();
	afx_msg void OnBnClickedBack();
	afx_msg void OnBnClickedMore();
	afx_msg void OnBnClickedPriv();
	afx_msg void OnBnClickedNext();
	afx_msg void OnBnClickedAc();
	afx_msg void OnBnClickedAllac();
	afx_msg void OnBnClickedInput();
	afx_msg void OnBnClickedOutput();
	afx_msg void OnBnClickedStart();
	afx_msg void OnBnClickedPredict();
	afx_msg void OnBnClickedPointIns();
	afx_msg void OnBnClickedLevelIns();
	afx_msg void OnBnClickedA();
	afx_msg void OnBnClickedB();
	afx_msg void OnBnClickedC();
	afx_msg void OnBnClickedD();
	afx_msg void OnBnClickedF();
	afx_msg void OnBnClickedFirst();
	afx_msg void OnBnClickedLast();
	afx_msg void OnBnClickedAbout();
	afx_msg void OnBnClickedButton9();
};

