#pragma once

#ifndef IFORMATTABLE_H
#define IFORMATTABLE_H
#include <string>
#include "Deck.h"
#include "Card.h"

class IFormattable{
public:
    virtual std::string format()=0;
    virtual void prettyPrint(const Card& object) = 0;
};


#endif