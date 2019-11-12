#include <iostream>
#include"ExpressionEvaluator.h"

ExpressionEvaluator::ExpressionEvaluator():ExpressionEvaluator(20){
    std::cout<<"Default length = 20"<<std::endl;
}

ExpressionEvaluator::ExpressionEvaluator(int len){
    length = len;
    setNullOperands();
    std::cout<<"Array has been created"<<std::endl;
}
void ExpressionEvaluator::setNullOperands(){
    operands = new double[length];
    for(int i=0;i<length;i++)
        operands[i]=0;
}
ExpressionEvaluator::~ExpressionEvaluator(){
    delete[] operands;
    std::cout<<"Array has been non-virtual deleted"<<std::endl;
}

void ExpressionEvaluator::setOperand(size_t pos,double x){
    if(pos<length)
        operands[pos] = x;
    else
         std::cout<<"Wrong index"<<std::endl;
}

void ExpressionEvaluator::setOperands(double op[], size_t len){
    delete[] operands;
    length = len;
    operands = new double[length];
    for(int i =0;i<length;i++){
        operands[i] = op[i];
    }
}

int ExpressionEvaluator::getLenght(){
    return length;
}

std::string ExpressionEvaluator::getString(){
    std::string s = "(";
    for(int i=0;i<length;i++){
        s+=operands[i];
        if(i+1<length)
            s+="+";
    }
    s+=(")");
    return s;
}