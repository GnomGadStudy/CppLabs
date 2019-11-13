#include <iostream>
#include <fstream>
#include "Multiplier.h"
#include "IShuffle.h"
Multiplier::Multiplier(){
    setRandomOperands();
}
double Multiplier::calculate() {
    double tmp =operands[0];
    for(int i=1;i<length;i++)
        tmp*= operands[i];
    return tmp;
}

void Multiplier::logToScreen(){
    std::cout<<getString('*')<<std::endl;
}

void Multiplier::logToFile(const std::string& filename){
    std::ofstream out;
    out.open(filename);
    if (out.is_open())
    {
        out << getString('*') << std::endl;
    }
    out.close();
}

void Multiplier::shuffle(){
    lshuffle(1,length);
}

void Multiplier::lshuffle(size_t s, size_t e){
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

Multiplier::~Multiplier(){
     delete[] operands;
    std::cout<<"Multiplier has been deleted"<<std::endl;
}