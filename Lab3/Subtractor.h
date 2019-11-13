#pragma once

#ifndef SUBTRACTOR_H
#define SUBTRACTOR_H

#include "ExpressionEvaluator.h"

class Subtractor: public ExpressionEvaluator{
private:
    
public:
    Subtractor();
    double calculate() override;
    void logToScreen() override;
    void logToFile(const std::string& ) override;
    ~Subtractor() override;
};



#endif