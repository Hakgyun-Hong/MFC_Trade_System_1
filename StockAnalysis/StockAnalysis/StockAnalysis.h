// StockAnalysis.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CStockAnalysisApp:
// �� Ŭ������ ������ ���ؼ��� StockAnalysis.cpp�� �����Ͻʽÿ�.
//

class CStockAnalysisApp : public CWinApp
{
public:
	CStockAnalysisApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CStockAnalysisApp theApp;