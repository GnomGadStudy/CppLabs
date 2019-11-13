#pragma once

#ifndef EXPRESSIONEVALUATOR_H
#define EXPRESSIONEVALUATOR_H

#include "ILoggable.h"

class ExpressionEvaluator: public ILoggable{
protected:
    int length;
    double* operands;
    void setNullOperands();
    void setRandomOperands();
    std::string getString();
public:
    ExpressionEvaluator();
    ExpressionEvaluator(int);
    virtual ~ExpressionEvaluator();

    void setOperand(size_t,double);
    void setOperands(double*, size_t);
    int getLenght();
    void logToScreen() override;
    void logToFile(const std::string& ) override;
    virtual double calculate() = 0;
};

#endif
