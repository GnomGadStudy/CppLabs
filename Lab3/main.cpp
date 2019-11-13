#include <iostream>
#include "ILoggable.h"
#include "ExpressionEvaluator.h"
#include "Summator.h"
#include "Subtractor.h"
#include "Multiplier.h"
#include "Divisor.h"

int main(){
    Divisor sm;
    sm.logToScreen();
    std::cout<<sm.calculate()<<std::endl;
    sm.logToFile("kek.txt");
    return 0;   
}