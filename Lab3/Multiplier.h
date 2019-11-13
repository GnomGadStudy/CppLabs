#pragma once

#ifndef MULTIPLIER_H
#define MULTIPLIER_H

#include "ExpressionEvaluator.h"
#include "IShuffle.h"

class Multiplier: public ExpressionEvaluator,public IShuffle{
private:
    
public:
    Multiplier();
    Multiplier(int);
    double calculate() override;
    void logToScreen() override;
    void logToFile(const std::string& ) override;

    void shuffle() override;
    void lshuffle(size_t, size_t) override;
    ~Multiplier() override;
};



#endif