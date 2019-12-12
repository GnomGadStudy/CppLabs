#pragma once

#ifndef IFORMATTABLE_H
#define IFORMATTABLE_H
#include <string>
class IFormattable{
public:
    virtual std::string format()=0;
    virtual void prettyPrint(const IFormattable& object) = 0;
};


#endif