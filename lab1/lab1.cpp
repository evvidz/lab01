// lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	float a, b, x;
	printf("Enter the number: \n");
	printf("a:= ");
	scanf("%f", &a);

	printf("b:= ");
	scanf("%f", &b);

	printf("x:= ");

	scanf("%f", &x);
	float y = (pow(x, 2 * a) - b) / tan(1 - exp((a + x) / b));
	printf("Result: %.2f\n", y);
	getchar();
	return 0;
}

