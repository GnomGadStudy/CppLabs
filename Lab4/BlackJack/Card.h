#pragma once
#include <iostream>
#include <cstring>

#ifndef CARD_H
#define CARD_H

class Card{
public:
    enum position{
        DECK,
        HAND,
        OUT
    };
protected:
    int point;
    wchar_t suit;
    position pos;
     
public:
    Card(int point,const wchar_t suit);
    int getPoint();
    wchar_t getSuit();
    void changePos(position);
    position getPos();

    ~Card();
    //return Card
    friend std::wostream& operator<< (std::wostream& o, Card card);
};



#endif