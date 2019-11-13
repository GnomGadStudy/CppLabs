#include <iostream>
#include <fstream>
#include "Subtractor.h"

Subtractor::Subtractor(){
    setRandomOperands();
}
double Subtractor::calculate() {
    double tmp =0;
    for(int i;i<length;i++)
        tmp-= operands[i];
    
    return tmp;
}

void Subtractor::logToScreen(){
    std::cout<<getString('-')<<std::endl;
}

void Subtractor::logToFile(const std::string& filename){
    std::ofstream out;
    out.open(filename);
    if (out.is_open())
    {
        out << getString('-') << std::endl;
    }
    out.close();
}

Subtractor::~Subtractor(){
     delete[] operands;
    std::cout<<"Subtractor has been deleted"<<std::endl;
}