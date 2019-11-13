#pragma once

#ifndef SUMMATOR_H
#define SUMMATOR_H

#include "ExpressionEvaluator.h"

class Summator: public ExpressionEvaluator{
private:
   
public:
    Summator();
    Summator(int);
    double calculate() override;
    void logToScreen() override;
    void logToFile(const std::string& ) override;
    ~Summator() override;
};
#endif