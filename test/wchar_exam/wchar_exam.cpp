// wchar_exam.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


#include <comdef.h>  // you will need this

int main()
{
	TCHAR *wc_test = L"�ȳ��Ͻ�";
	_bstr_t conv_sz(wc_test);
	printf("%s \n", (char *)conv_sz);
	

	char *szTest = "hello �ȳ��̶���߳�?";

	TCHAR szBuf[256];
	mbstowcs(szBuf, szTest, 256);

	wprintf(L"%ws \n", szBuf);

	
    return 0;
}

