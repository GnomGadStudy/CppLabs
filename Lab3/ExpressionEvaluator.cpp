#include <iostream>
#include<ctime>
#include <fstream>
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

void ExpressionEvaluator::setRandomOperands(){
    srand(time(0));
    for(int i=0;i<length;i++)
        operands[i] = rand()%9;
}

int ExpressionEvaluator::getLenght(){
    return length;
}

std::string ExpressionEvaluator::getString(){
    std::string s = "(";
    for(int i=0;i<length;i++){
        s+=operands[i]+48;
        if(i+1<length)
            s+="+";
    }
    s+=(")");
    return s;
}

void ExpressionEvaluator::logToScreen(){
    std::cout<<getString()<<std::endl;
}

void ExpressionEvaluator::logToFile(const std::string& filename){
    std::ofstream out;
    out.open(filename);
    if (out.is_open())
    {
        out << getString() << std::endl;
    }
    out.close();
}