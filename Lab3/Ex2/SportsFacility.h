#pragma once

#ifndef SPORTSFACILITY_H
#define SPORTSFACILITY_H

#include <string>
#include "Coating.h"
#include "ISeasonTicketProvider.h"

class SportsFacility{
protected:
    std::string adress;
    int sectors;
    int capacity;
    int attendance;
    double area;
    Coating cover;
    int tickets;
public:
    SportsFacility(std::string adress, int sector, int capacity, int attendance, double area, Coating cover,int tickets);
    virtual ~SportsFacility();



};



#endif