#pragma once

#ifndef FORMAT_H
#define FORMAT_H
#include <string>
#include "IFormattable.h"
class Format: public IFormattable{
public:
Format();
std::string format() override;
void prettyPrint(const IFormattable& object) override;

};


#endif