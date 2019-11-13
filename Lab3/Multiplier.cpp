#include <iostream>
#include <fstream>
#include "Multiplier.h"

Multiplier::Multiplier(){
    setRandomOperands();
}
double Multiplier::calculate() {
    double tmp =0;
    for(int i;i<length;i++)
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