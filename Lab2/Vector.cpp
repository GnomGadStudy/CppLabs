#include "Vector.h"

#include <iostream>

#include <iomanip>

Vector::Vector():Vector(5){
}
Vector::Vector(int size_){
    size = size_;
    std::cout<<"Size of array has seted: "<<size_<<std::endl;
    mass = new int*[size];
    for (int i = 0; i < size; i++)
        mass[i] = new int[size];
    std::cout<<"Empty array has created"<<std::endl;
}

void Vector::ArrayInitialization(){
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            mass[i][j] = factorial(i)+factorial(j);

    std::cout<<"Array has initialized"<<std::endl;
}

void Vector::GetArray(){
for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++)
            std::cout<<std::setw(8)<<mass[i][j];
        std::cout<<std::endl;
    } 
}

int Vector::factorial(int fact){
    if (fact == 0) 
        return 1;
    else 
        return fact * factorial(fact - 1);
}

int* Vector::Transformation()
{
     mass1D = new int[size*size];
    int val =0;
    for (int i = 1; i < size; i+=2)
        for (int j = 0; j < size; j++)
        mass1D[val++] = mass[i][j];
    std::cout<<"Array has Transformated"<<std::endl;

   return mass1D;
}

int& Vector::operator [](int index)const{
    return *mass[index];
} 

Vector::~Vector(){
    delete[] mass1D;
    mass1D = nullptr;
     
    for (int i = 0; i < size; i++)
        delete[] mass[i];
        
    delete[] mass;
    mass = nullptr;
    std::cout<<"Arrays has deleted"<<std::endl;
}