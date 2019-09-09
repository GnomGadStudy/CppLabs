// 7 variant
//<Zhenya><First Lab><17:00><08.09.2019>
#include "Ex1.1.h"
#include <cstdio>
#include <iostream>
#include <ctime>

const int _size = 15;

//Just run this method
void Ex1_1::Start()
{
	setlocale(LC_ALL, "russian");

	float mass[_size] = { 0.0F };

	int a = processArray(mass);
	printf("Min - ");
	printf("%i", a);
	printf("\nOUT\n");

	for (int i = 0; i < _size; i++)
	{
		printf("%i", static_cast<int>(mass[i]));
		printf(" ");
	}

}

int Ex1_1::processArray(float* a)
{
	int min = INT_MAX;
	int pos = 0;
	srand(time(0));

	printf("INPUT\n");
	for (int i = 0; i < _size; i++, a++)
	{
		a[0] = 20 + rand() % 81;

		if (min > a[0])
		{
			min = a[0];
			pos = i;
		}
		printf("%i", static_cast<int>(a[0]));
		printf(" ");
	}
	printf("\n");
	for (int i = _size; i > pos; i--, a--)
	{
		a[0] = min;
	}

	return min;
}
