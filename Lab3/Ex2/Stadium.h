#pragma once

#ifndef STADIUM_H
#define STADIUM_H

#include<string>
#include<vector>

#include "SportsFacility.h"
class Stadium:public SportsFacility{
private:
std::string name;
public:
Stadium(std::string name, std::string adress, int sector, int capacity, int attendance, double area, Coating cover,int tickets);
void ticket() override;
~Stadium();
};




#endif