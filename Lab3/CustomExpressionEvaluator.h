#pragma once

#ifndef CUSTOMEXPRESSIONEVALUATOR_H
#define CUSTOMEXPRESSIONEVALUATOR_H

#include "ExpressionEvaluator.h"
#include "IShuffle.h"

class CustomExpressionEvaluator: public ExpressionEvaluator, public IShuffle{
public:
    CustomExpressionEvaluator();
    CustomExpressionEvaluator(int);
    double calculate() override;
    void logToScreen() override;
    void logToFile(const std::string& ) override;
    
    void shuffle() override;
    void lshuffle(size_t, size_t) override;
    ~CustomExpressionEvaluator() override;
};

#endif