
// ƽ�����������.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������
#define WM_GETMsg (WM_USER+100)
#define WM_GETLIST (WM_USER+200)
// Cƽ�����������App: 
// �йش����ʵ�֣������ ƽ�����������.cpp
//

class Cƽ�����������App : public CWinApp
{
public:
	Cƽ�����������App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��
	
	DECLARE_MESSAGE_MAP()
};

extern Cƽ�����������App theApp;

