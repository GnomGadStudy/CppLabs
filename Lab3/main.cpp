#include <iostream>
#include <iomanip>

#include "ILoggable.h"
#include "ExpressionEvaluator.h"
#include "Summator.h"
#include "Subtractor.h"
#include "Multiplier.h"
#include "Divisor.h"

int main(){
    Divisor sm;
    sm.logToScreen();
    std::cout<<std::fixed<<std::setprecision(15)<<sm.calculate()<<std::endl;
    sm.logToFile("kek.txt");
    return 0;   
}