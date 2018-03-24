#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>
#include <time.h>
#include "Header.h"
//int f(int m2, int m1, int m0)
//{
//	int m = 567;
//	int k;
//	m2 = m % 1000;
//		m1 = m / 100;
//		m0 = m % 10;
//		k = m0 + m1 + m2;
//		printf("%d", k);
//	return 0;
//
//}
int f(int a, int b, int c)
{
	return a + b + c;
}
double f(double a, double b, double c)
{
	return a + b + c;
}
float f(float a, float b, float c)
{
	return a + b + c;
}
int Katet(double *a, double *b, double c, double q)
{
	return *a = c*sin(q);
}
int Katet2(double *a, double *b, double c, double q)
{
	return *b = c*sin(q);
}
void fillArray(int *mas, int n)
{
	for (short int i = 0; i < n; i++)
		mas[i] = -10 + rand() % 59;
}
void printArray(int *mas, int n)
{
	for (short int i = 0; i < n; i++)
		printf("%d\t", mas[i]);
	printf("\n");
}

void Pol(int *mas, int n)
{
	int sum = 0;
	for (short int i = 0; i <n; i++)
	{
		if (mas[i] > 0)
		{
			sum += mas[i];
	
		}
	}
	printf("Сумма положительных элементов - %d\n", sum);
}
void Otr(int *mas, int n)
{
	int sum = 0;
	for (short int i = 0; i <n; i++)
	{
		if (mas[i]< 0)
		{
			sum += mas[i];

		}
	}
	printf("Сумма отрицательных  элементов - %d\n", sum);


}