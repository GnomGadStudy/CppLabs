#include <iostream>
#include "Summator.h"

Summator::Summator(){
    setRandomOperands();
}
double Summator::calculate() {
    double tmp =0;
    for(int i;i<length;i++)
        tmp+= operands[i];
    
    return tmp;
}


