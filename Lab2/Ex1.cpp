#include "Ex1.h"
#include "Matrix.h"
#include "Vector.h"

#include <iostream>

int main(){
    
    Vector mat;
    mat.ArrayInitialization();
    mat.GetArray();
    ++mat;
    mat++;
    mat--;
    --mat;
    mat.GetArray();
   
    return 0;
}
