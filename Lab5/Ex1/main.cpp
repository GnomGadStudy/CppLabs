#include "DataManager.h"
#include <iostream>


int main(){
	setlocale(LC_ALL,"ru");
	_wsetlocale(LC_ALL,L"russian");
	DataManager<int> dm;
	std::wcout<<L"Запушил и вывел инты\n";
	for(int i =0;i<64;i++)
		dm.push(i+1);	
	dm.print();
	std::wcout<<L"Запушил массив и вывел\n";
	int kek[5] = {5,1,8,10,2};
	dm.push(kek,5);
	dm.print();
	std::wcout<<L" попнул значение";
	std::cout<<"\n  "<<dm.pop()<<"  \n";
	std::wcout<<L" пекнул значение";
	std::cout<<"\n  "<<dm.peek()<<"  \n";
	dm.print();

	DataManager<double> dm1;
	std::wcout<<L"Запушил и вывел даблы\n";
	for(int i =0;i<64;i++)
		dm1.push(i+0.4);	
	dm1.print();
	std::wcout<<L"Запушил массив и вывел\n";
	double kek1[5] = {5.1,1.2,8.5,10.1,2.8};
	dm1.push(kek1,5);
	dm1.print();
	std::wcout<<L" попнул значение";
	std::cout<<"\n  "<<dm1.pop()<<"  \n";
	std::wcout<<L" пекнул значение";
	std::cout<<"\n  "<<dm1.peek()<<"  \n";
	
	dm1.print();
	
	DataManager<char> dm2;
	std::wcout<<L"Запушил и вывел даблы\n";
	for(int i =0;i<64;i++)
		dm2.push((char)i+100);	
	dm2.print();
	std::wcout<<L"Запушил массив и вывел\n";
	char kek11[3] = {'S','s','s'};
	dm2.push(kek11,3);
	dm2.print();
	std::wcout<<L" попнул значение";
	std::cout<<"\n  "<<dm2.pop()<<"  \n";
	std::wcout<<L" пекнул значение";
	std::cout<<"\n  "<<dm2.peek()<<"  \n";
	std::wcout<<L" Ловер значение значение";
	std::cout<<"\n  "<<dm2.popLower()<<"  \n";
	std::wcout<<L" Аппер значение значение";
	std::cout<<"\n  "<<dm2.popUpper()<<"  \n";
	dm2.print();
	

return 0;
}