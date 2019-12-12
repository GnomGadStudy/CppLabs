#pragma once

#ifndef FORMAT_H
#define FORMAT_H
#include <string>
#include "IFormattable.h"
class Formattable: public IFormattable{
public:
    virtual std::string format()=0;
    virtual prettyPrint(const IFormattable& object) = 0;
};


#endif