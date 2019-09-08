// 7 вариант
//<Zhenya><Первая лаба><17:00><08.09.2019>
#include <cstdio>
#include <iostream>
#include <ctime>

//предварительная запись
int processArray(float* a);

const int _size = 15;

int main()
{
	//инициализация массива
	float mass[_size] = { 0.0F };
	int a = processArray(mass);
	for (int i = 0; i < _size; i++)
	{
		printf("%i", static_cast<int>(mass[i])); 
			printf(" ");
	}
	mass[5] = 10;
	return 0;
}

int processArray(float* a)
{
	//минимальное значение
	int min = INT_MAX;
	//позиция в массиве
	int pos = 0;
	//установка сида для рандома, time(0) для полного рандома
	srand(time(0));


	//i++ для цикла a++ для побитового сдвига
	for (int i = 0; i < _size; i++, a++)
	{
		//необходимый диапазон от 20 до 100
		a[0] = 20 + rand() % 81;

		if (min > a[0])
		{
			min = a[0];
			pos = i;
		}
		//кастуем это чудное значение в int ибо иначе оно работать не собирается
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