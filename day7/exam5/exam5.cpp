// exam5.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int ary[2] = { 3,4 };
	int nTemp;

	nTemp = ary[0];
	ary[0] = ary[1];
	ary[1] = nTemp;

    return 0;
}

