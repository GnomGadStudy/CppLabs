#include <iostream>
#include "ManagementEx1.h"
#include "Ex1.1.h"
#include "Ex1.2.h"

using std::cout;
using std::endl;
using std::cin;

void ManagementEx1::Start()
{
    int key = -1;
    cout<<"Lab #1, choose a task from 1 to 3, 0 that exit"<<endl;
    while(key !=0)
    {
        cin>> key;
        switch(key)
        {
            case 0: cout<<"Exit"<<endl;break;
            case 1: cout<<"Ex1.1"<<endl; Ex11();break;
            case 2: cout<<"Ex1.2"<<endl; Ex12();break;
            case 3: cout<<"Ex1.3"<<endl; Ex13();break;
            default : cout <<"unknown character"<<endl;break;
        }
    }
}

void ManagementEx1::Ex11()
{
	Ex1_1 ex;
	ex.Start();
}
void ManagementEx1::Ex12()
{
    Ex1_2 ex;
    ex.Start();
}
void ManagementEx1::Ex13()
{

}