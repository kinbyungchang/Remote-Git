#include <stdio.h>

void main()
{
	// ���� ������
	/*
	int value = 100;
	int x_value = 200;
	int temp = 0;

	temp = value == x_value ? value : x_value;

	printf("%d", temp);
	*/

	// �Ϲ��� �� ��ȯ
	/*
	char m = 10;
	short n = 100;

	// printf("�ڷ����� ũ�� : %d", sizeof(m + n));

	float t = 100.56; // 4 byte
	long long x = 0; // 8 byte // 0000 0000 * 8


	// int < float         �� ������ ������ �ڷ����� �Ǽ��� �ڷ������� �۴�.
	x = t;
	printf("%d\n", x);

	double f = 100;
	printf("%lf", f);
	*/

	// ����� �� ��ȯ
	/*
	int x = 5;
	int y = 2;

	float t = (float)x / y; // float

	printf("%f", t);
	*/

	int x = 0; // x �޸𸮿� ������ �˴ϴ�.
	
	scanf_s("%d", &x);

	printf("�Է��� x�� �� : %d", x);

	// ī�� ǥ���

	// �Ľ�Į ǥ���

	// ������ũ ǥ���

}