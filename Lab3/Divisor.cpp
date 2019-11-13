#include <iostream>
#include <fstream>
#include "Divisor.h"

Divisor::Divisor(){
    setRandomOperands();
}
double Divisor::calculate() {
    double tmp =0;
    for(int i;i<length;i++)
        tmp*= operands[i];
    
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