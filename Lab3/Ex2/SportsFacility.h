#pragma once

#ifndef SPORTSFACILITY_H
#define SPORTSFACILITY_H

#include <string>
#include "Coating.h"
#include "Season.h"
#include "ISeasonTicketProvider.h"

class SportsFacility:public ISeasonTicketProvider{
protected:
    std::string adress;
    int sectors;
    //вместимость
    int capacity;
    //посещение
    int attendance;
    double area;
    Coating cover;
    int tickets;
    int count;

public:
    SportsFacility(std::string adress, int sector, int capacity, int attendance, double area, Coating cover,int tickets);
    virtual ~SportsFacility();
    void ticket() override;
    
};



#endif