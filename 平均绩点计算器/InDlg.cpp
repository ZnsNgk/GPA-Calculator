// InDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ƽ�����������.h"
#include "InDlg.h"
#include "afxdialogex.h"


// InDlg �Ի���

IMPLEMENT_DYNAMIC(InDlg, CDialog)

LPWSTR pFilePath;

InDlg::InDlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_In, pParent)
{
}

InDlg::~InDlg()
{
}

void InDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(InDlg, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &InDlg::OnBnClickedButton1)
	ON_WM_DROPFILES()
END_MESSAGE_MAP()


// InDlg ��Ϣ�������


void InDlg::OnBnClickedButton1()
{
	OnCancel();
}




void InDlg::OnDropFiles(HDROP hDropInfo)
{
	TCHAR pFilePath[MAX_PATH];
	DragQueryFile(hDropInfo, 0, pFilePath, MAX_PATH);// ��ȡ�Ϸŵ�һ���ļ�������·��
	CString str = pFilePath;
	CWnd *pWnd = AfxGetMainWnd();
	::SendMessage(*pWnd, WM_GETMsg, (WPARAM)&str, NULL);
	OnOK();
}
