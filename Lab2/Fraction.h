#pragma once

#ifndef FRACTION_H
#define FRACTION_h

class Fraction{
private:
    int x;
    int y;
public:
    static int Count;

    Fraction();
    Fraction(int , int);
    Fraction(const Fraction&);
    ~Fraction();
    
    Fraction operator+(Fraction);
    Fraction operator-(Fraction);
    Fraction operator*(Fraction);
    Fraction operator/(Fraction);

    void printDouble();
    void reduce();
    static int gcd(int,int);
    static void printAsFraction(double);
    static void printAsFraction(char*);
    
};




#endif