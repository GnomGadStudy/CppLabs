#include <iostream>
#include <iomanip>

#include "ILoggable.h"
#include "ExpressionEvaluator.h"
#include "Summator.h"
#include "Subtractor.h"
#include "Multiplier.h"
#include "Divisor.h"
#include "CustomExpressionEvaluator.h"

int main(){

    double mulOp[] = {-4.5, 2, 3, -10};
    double custOp[] = {5, 16, -3, 10, 12,0};

    ExpressionEvaluator* valuators[3];

    valuators[0] = new Summator(2);
    valuators[0]->setOperand(0,39.1);
    valuators[0]->setOperand(1,-12.7);
    
    valuators[1] = new Multiplier();
    valuators[1]->setOperands(mulOp,4);
    
    valuators[2] = new CustomExpressionEvaluator();
    valuators[2]->setOperands(custOp,6);

    std::cout<<std::endl<<std::endl;
    for (int i = 0; i < 3; i++){
        valuators[i]->logToScreen();
		valuators[i]->logToFile("kek"+std::to_string(i)+".log");
		std::cout << "Result: " << valuators[i]->calculate() << std::endl;
	}

    std::cout<<std::endl<<std::endl;
    for (int i = 0; i < 3; i++){
		if (auto s = dynamic_cast<IShuffle*>(valuators[i]))
		{
			s->shuffle();
			valuators[i]->logToScreen();
			std::cout << "Result: " << valuators[i]->calculate() << std::endl;
		}
        else
            std::cout <<"It does not cast to IShuffle" << std::endl;
        
	} 
    
     delete[] valuators;
         //std::cout<<std::fixed<<std::setprecision(15)<<.calculate()<<std::endl;
    return 0;   
}