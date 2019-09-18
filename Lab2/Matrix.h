#pragma once

#ifndef MATRIX_H
#define MATRIX_H

class Matrix{
public:
    Matrix();
    Matrix(int size_);
    Matrix(int** mass_, int size_);
    void ArrayInitialization();
    void GetArray();
    int* Transformation();
    int At(int i,int j) const;
    void SetAt(int i, int j, int n);
    //post
    Matrix operator++(int);
    //Matrix operator--(int);
    //pref
    Matrix& operator++();
    Matrix& operator--();
    int size;
    int** mass;
    ~Matrix();
private:
    int factorial(int fact);
    
    int* mass1D;
    
};
#endif