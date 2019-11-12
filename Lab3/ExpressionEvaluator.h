#pragma once

#ifndef EXPRESSIONEVALUATOR_H
#define EXPRESSIONEVALUATOR_H

#include "ILoggable.h"

class ExpressionEvaluator: public ILoggable{
protected:
    int length;
    double* operands;
    void setNullOperands();
    std::string getString();
public:
    ExpressionEvaluator();
    ExpressionEvaluator(int);
    virtual ~ExpressionEvaluator();

    void setOperand(size_t,double);
    void setOperands(double*, size_t);
    int getLenght();

    virtual double calculate() = 0;
};

#endif
