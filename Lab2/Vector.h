#pragma once

#ifndef VECTOR_H
#define VECTOR_H
class Vector{
public:
    Vector();
    Vector(int size_);
    Vector(int** mass_, int size_, int* mass1D);
    Vector(const Vector& vector);
    Vector(const Vector&& vector);
    void ArrayInitialization();
    void GetArray();
    int* Transformation();

    Vector& operator++(void);
    Vector& operator--(void);

    Vector operator++(int a);
    Vector operator--(int a);
    int& operator [](int index)const;

    ~Vector();
private:
    int factorial(int fact);
    int** mass;
    int* mass1D;
    int size;
};
#endif