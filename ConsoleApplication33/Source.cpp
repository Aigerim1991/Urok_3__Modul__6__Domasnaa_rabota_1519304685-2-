#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>
#include <time.h>
#include "Header.h"
int s;
#define lenght 10

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	do
	{
		printf("Введите номер задания:");
		scanf("%d", &s);
		switch (s)
		{
		case 1:
		{/*
			int n1, n2, n0, x;
			x = 400 + rand() % 1000;
			if (x == f(n1, n2, n0))
			{
				printf("x = f(): %d", x);
			}
*/
		}
		break;
		case 2:
		{

			printf("Напишите несколько функции с одним именем int f() и с разными наборами данных - %d\n", f(5,5,4));
			printf("%lf\n", f(5.5, 5.5, 4.1));
			printf("%f\n", f(1.1, 100.2, 89.2));
		}
		break;
		case 3:
		{
			int u = f(3, 4,4);
			printf("Оператор u = %d\n", u);
			double v = f(1.2, 10.2, 9.2);
			printf("Оператор v = %lf\n", v);
		}
		break;
		case 4:
		{
			double c = 8;
			double q = 45,a,b;
			printf("Катет a равен - %d\n", Katet(&a, &b, c, q));
		}
		break;
		case 5:
		{
			double c = 8;
			double q = 90, a, b;
			printf("Катет b равен - %d\n", Katet(&a, &b, c, q));
		}
		break;
		case 6:
		{
			int mas[lenght];
			fillArray(mas, lenght);
			printArray(mas, lenght);
			Pol(mas, lenght);
			Otr(mas, lenght);
		}
		break;

		break;
		default:
		break;
		}
	} while (s > 0);






}