// Excel_automation.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CExcel_automationApp:
// �� Ŭ������ ������ ���ؼ��� Excel_automation.cpp�� �����Ͻʽÿ�.
//

class CExcel_automationApp : public CWinApp
{
public:
	CExcel_automationApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CExcel_automationApp theApp;