#include <iostream>
#include <fstream>
#include "Summator.h"

Summator::Summator(){
    setRandomOperands();
}
double Summator::calculate() {
    double tmp =0;
    for(int i;i<length;i++)
        tmp+= operands[i];
    
    return tmp;
}

void Summator::logToScreen(){
    std::cout<<getString('+')<<std::endl;
}

void Summator::logToFile(const std::string& filename){
    std::ofstream out;
    out.open(filename);
    if (out.is_open())
    {
        out << getString('+') << std::endl;
    }
    out.close();
}
Summator::~Summator(){
     delete[] operands;
    std::cout<<"Summator has been deleted"<<std::endl;
}