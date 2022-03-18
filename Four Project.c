#include <stdio.h>

void main()
{
	// 삼항 연산자
	/*
	int value = 100;
	int x_value = 200;
	int temp = 0;

	temp = value == x_value ? value : x_value;

	printf("%d", temp);
	*/

	// 암묵적 형 변환
	/*
	char m = 10;
	short n = 100;

	// printf("자료형의 크기 : %d", sizeof(m + n));

	float t = 100.56; // 4 byte
	long long x = 0; // 8 byte // 0000 0000 * 8


	// int < float         ★ 무조건 정수형 자료형이 실수형 자료형보다 작다.
	x = t;
	printf("%d\n", x);

	double f = 100;
	printf("%lf", f);
	*/

	// 명시적 형 변환
	/*
	int x = 5;
	int y = 2;

	float t = (float)x / y; // float

	printf("%f", t);
	*/

	int x = 0; // x 메모리에 지정이 됩니다.
	
	scanf_s("%d", &x);

	printf("입력한 x의 값 : %d", x);

	// 카멜 표기법

	// 파스칼 표기법

	// 스네이크 표기법

}