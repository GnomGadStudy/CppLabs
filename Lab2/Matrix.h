#pragma once

#ifndef MATRIX_H
#define MATRIX_H

class Matrix{
public:
    Matrix();
    Matrix(int size_);
    Matrix(int** mass_, int size_, int* mass1D);
    Matrix(const Matrix& matrix);
    Matrix(const Matrix&& matrix);
    void ArrayInitialization();
    void GetArray();
    int* Transformation();
    int At(int i,int j) const;
    void SetAt(int i, int j, int n);
    //post
    Matrix operator++(int a);
    Matrix operator--(int a);
    //pref
    Matrix& operator++(void);
    Matrix& operator--(void);
    int** mass;
    ~Matrix();
private:
    int factorial(int fact);
    int size;
    
    int* mass1D;
    
};
#endif