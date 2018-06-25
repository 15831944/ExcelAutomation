#include "StdAfx.h"
#include "XLEzAutoStandard.h"

CXLEzAutoStandard::CXLEzAutoStandard()
{
	m_pSubClass = new CXLEzAutomation;
}

CXLEzAutoStandard::CXLEzAutoStandard(BOOL bVisible)
{
	m_pSubClass = new CXLEzAutomation(bVisible);
}

CXLEzAutoStandard::~CXLEzAutoStandard(void)
{
	delete m_pSubClass;
}


void CXLEzAutoStandard::SetCurrentDirStd(CString dir)
{
	m_Current_Dir = dir;
}
CString CXLEzAutoStandard::GetCurrentDirStd()
{
	return m_Current_Dir;
}