#pragma once

#ifndef SUMMATOR_H
#define SUMMATOR_H

#include "ExpressionEvaluator.h"

class Summator: public ExpressionEvaluator{
private:
   
public:
    Summator();
    double calculate() override;
    
    
};
#endif