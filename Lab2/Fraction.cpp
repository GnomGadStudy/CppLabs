#include "Fraction.h"

#include <cmath>
#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <iomanip> 

int Fraction::Count = 0;
Fraction::Fraction():Fraction(1,1){
    Count++;
}

Fraction::Fraction(int x,int y):x(x),y(y){ 
    Count++;   
}

Fraction::Fraction(const Fraction& fraction):Fraction(fraction.x,fraction.y){
    Count++;
}

Fraction::~Fraction(){
std::cout<<"Fraction has been deleted"<<std::endl;
}

Fraction Fraction::operator+(Fraction a){
    int y1=this->y;
    int y2=a.x;
    bool flag = true;
    for(int i =1;i <=this->y&&flag;i++){
        if(this->y%i == 0){
            for(int j =1; j<=a.y&&flag;j++){
                if(a.y%j == 0){
                    if(this->y/i == a.y/j){
                       flag=false;
                       y1=i;
                       y2=j;
                    }
                }
            }
        }
    }
    return Fraction(y1*a.x + y2*this->x, y1*a.y);
}

Fraction Fraction::operator-(Fraction a){
    int y1=this->y;
    int y2=a.x;
    bool flag = true;
    for(int i =1;i <=this->y&&flag;i++){
        if(this->y%i == 0){
            for(int j =1; j<=a.y&&flag;j++){
                if(a.y%j == 0){
                    if(this->y/i == a.y/j){
                       flag=false;
                       y1=i;
                       y2=j;
                    }
                }
            }
        }
    }
    return Fraction(y1*a.x - y2*this->x, y1*a.y);
}

Fraction Fraction::operator*(Fraction a){
    return Fraction(a.x * this->x, a.y * this->y);
}

Fraction Fraction::operator/(Fraction a){
    return Fraction(a.y * this->x,a.x * this->y);
}
void Fraction::printDouble(){
    std::cout<<this->x<<"/"<<this->y<<std::endl;
}

void Fraction::reduce(){
    int xy = this->x < this->y? x: y;
    for(int i=2;i<=xy;i++){
        if(this->x%i == 0){
            if(this->y%i== 0){
                this->x = x/i;
                this->y = y/i;
                i--;
            }
        }
    }
}

int Fraction::gcd(int a, int b){
     while (a!=0 && b!=0) 
        if (a>b) 
            a=a%b;
        else b=b%a;
    return a+b;
    
}

void Fraction::printAsFraction(double decimal_fraction){
    int temp = gcd(abs(decimal_fraction * 1000000), 1000000);
	int x = (decimal_fraction * 1000000)/temp;
	int y = 1000000 / temp;
	std::cout << decimal_fraction << " = " << x << "/" << y <<std::endl;
}
void Fraction::printAsFraction(char* decimal_fraction){
    double x = atof(decimal_fraction);
	int temp = gcd(abs(x * 1000000), 1000000);
	x = (x * 1000000) / temp;
	int y = 1000000 / temp;
	std::cout << decimal_fraction << " = " << x << "/" << y << std::endl;

}