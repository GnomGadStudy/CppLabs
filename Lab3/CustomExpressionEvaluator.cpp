#include <iostream>
#include <cstdio>
#include <fstream>
#include "Multiplier.h"
#include "IShuffle.h"
#include "CustomExpressionEvaluator.h"

CustomExpressionEvaluator::CustomExpressionEvaluator(){
    setRandomOperands();
}
double CustomExpressionEvaluator::calculate() {
    double tmp =operands[0];
    bool flag = true;
    for(int i=1;i<length;i++,flag=!flag)
        tmp+= flag?-1*(operands[i]/i+1):(operands[i]/i+1);
    return tmp;
}

void CustomExpressionEvaluator::logToScreen(){
    
    std::cout<<getString('-','+')<<std::endl;
}

void CustomExpressionEvaluator::logToFile(const std::string& filename){
    std::ofstream out;
    out.open(filename);
    if (out.is_open())
    {
        out << getString('-','+') << std::endl;
    }
    out.close();
}

void CustomExpressionEvaluator::shuffle(){
    lshuffle(1,length);
}

void CustomExpressionEvaluator::lshuffle(size_t s, size_t e){
    int key = 0;
  int i = 0;
  for(int j = s;j<e;j++){
    key = operands[j];
    i = j-1;
    while(i>=0 && operands[i]<key){
      operands[i+1] = operands[i];
      i = i-1;
      operands[i+1]=key;
    }
  }
}

CustomExpressionEvaluator::~CustomExpressionEvaluator(){
     delete[] operands;
    std::cout<<"CustomExpressionEvaluator has been deleted"<<std::endl;
}