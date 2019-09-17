#pragma once

#ifndef VECTOR_H
#define VECTOR_H
class Vector{
public:
    Vector();
    Vector(int size_);
    
    void ArrayInitialization();
    void GetArray();
    int* Transformation();

    int& operator [](int index)const;

    ~Vector();
private:
    int factorial(int fact);
    int** mass;
    int* mass1D;
    int size;
};
#endif