#include <iostream>
#include "ILoggable.h"
#include "ExpressionEvaluator.h"
#include "Summator.h"

int main(){
    Summator sm;
    sm.setOperand(0,5.0);
    sm.setOperand(1,4.0);
    sm.logToScreen();
    return 0;   
}