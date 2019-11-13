#include <iostream>
#include <fstream>
#include "Divisor.h"
#include "IShuffle.h"
Divisor::Divisor(){
    setRandomOperands();
}
double Divisor::calculate() {
    double tmp =operands[0];
    for(int i=1;i<length;i++)
        tmp /= operands[i];
    
    return tmp;
}

void Divisor::logToScreen(){
    std::cout<<getString('/')<<std::endl;
}

void Divisor::logToFile(const std::string& filename){
    std::ofstream out;
    out.open(filename);
    if (out.is_open())
    {
        out << getString('/') << std::endl;
    }
    out.close();
}

void Divisor::shuffle(){
    lshuffle(1,length);
}

void Divisor::lshuffle(size_t s, size_t e){
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