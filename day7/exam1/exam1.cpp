// exam1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int ages[5];
	int avg = 0;
	//ages[2] = 20;
	 
	for (int i = 0; i < 5; i++) {
		printf("%d ��° �����͸� �Է��ϼ���. : ",i);
		scanf("%d", &ages[i]);
	}

	//avg = ages[0] + ages[1] + ages[2] + ages[3] + ages[4];
	for (int i = 0; i < 5; i++) {
		avg += ages[i];
	}
	avg /= 5;

	printf("%d", avg);

	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (max < ages[i]) {
			max = ages[i];
		}
	}

	int min = 0x7ffffff;
	for (int i = 0; i < 5; i++) {
		if (min > ages[i]) {
			min = ages[i];
		}
	}

	printf("\n �ִ밪�� : %d �ּҰ��� : %d\n", max,min);

    return 0;
}

