#include "Ex1.h"
#include "Matrix.h"
#include "Vector.h"

#include <iostream>

int main(){
    
    Matrix mat;
    mat.ArrayInitialization();
    mat.GetArray();
    ++mat;
    mat++;
    mat--;
    --mat;
    mat.GetArray();
    mat.~Matrix();
    return 0;
}
