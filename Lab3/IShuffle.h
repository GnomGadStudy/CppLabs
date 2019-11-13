#pragma once

#include<string>

class ILoggable{
public:
    virtual void shuffle()=0;
    virtual void lshuffle(size_t i, size_t j)=0;
};