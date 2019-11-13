#pragma once

#ifndef DIVISOR_H
#define DIVISOR_H

#include "ExpressionEvaluator.h"

class Divisor: public ExpressionEvaluator{
private:
    
public:
    Divisor();
    double calculate() override;
    void logToScreen() override;
    void logToFile(const std::string& ) override;
};



#endif