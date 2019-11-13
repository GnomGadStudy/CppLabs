#pragma once

#ifndef MULTIPLIER_H
#define MULTIPLIER_H

#include "ExpressionEvaluator.h"

class Multiplier: public ExpressionEvaluator{
private:
    
public:
    Multiplier();
    double calculate() override;
    void logToScreen() override;
    void logToFile(const std::string& ) override;
};



#endif