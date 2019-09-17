#include <iostream>
#include <iomanip>
#include "Ex1.2.h"

const int size = 5;

int factorial(int fact)
{
    if (fact == 0) 
        return 1;
    else 
        return fact * factorial(fact - 1);
}

void Ex1_2::Start()
{
    int** mass = new int*[size];
    for (int i = 0; i < size; i++)
        mass[i] = new int[5];

    ArrayInitialization(mass);
    GetArray(mass);
    int* arr = Transformation(mass);

    for (int i = 0; i < 10; i++)
        std::cout<<arr[i]<<" ";
    
    delete[] arr;
    arr = nullptr;

    for (int i = 0; i < size; i++)
        delete[] mass[i];
        
    delete[] mass;
    mass = nullptr;

}

void Ex1_2::ArrayInitialization(int** mass)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            mass[i][j] = factorial(i)+factorial(j);
}

void Ex1_2::GetArray(int** mass)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            std::cout<<std::setw(8)<<mass[i][j];
        std::cout<<std::endl;
    } 
}

int* Ex1_2::Transformation(int** mass)
{
    int* mass1d = new int[10];
    int val =0;
    for (int i = 1; i < size; i+=2)
        for (int j = 0; j < size; j++)
        mass1d[val++] = mass[i][j];
        
   return mass1d;
}