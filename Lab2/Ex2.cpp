#include "Ex2.h"
#include "Fraction.h"

#include <iostream>

int main(){
char mass[3] = {'1',46,'5'};
    Fraction f(3,14);
    Fraction d(9,29);
    Fraction f1(4000,10000);
    std::cout<<Fraction::gcd(10,10)<<std::endl;
    Fraction::printAsFraction(1.5);
    Fraction::printAsFraction(mass);
    return 0;
}

