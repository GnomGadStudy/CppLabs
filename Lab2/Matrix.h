#pragma once

#ifndef MATRIX_H
#define MATRIX_H

class  Matrix{
public:
    Matrix();
    Matrix(int size_);

    void ArrayInitialization();
    void GetArray();
    int* Transformation();

    ~Matrix();
private:
    int factorial(int fact);
    int** mass;
    int* mass1D;
    int size;
};
#endif