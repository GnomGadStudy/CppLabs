#pragma once
#include <iostream>
#include <cstring>

#ifndef CARD_H
#define CARD_H
class Card
{
protected:
    int point;
    wchar_t suit;
public:
    Card(int point,const wchar_t suit);
    int getPoint();
    wchar_t getSuit();
    ~Card();
    //return Card
    friend std::wostream& operator<< (std::wostream& o, Card card);
};



#endif