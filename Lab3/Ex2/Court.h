#pragma once

#ifndef COURT_H
#define COURT_H

#include "SportsFacility.h"

#include<string>
#include<vector>

class Court: public SportsFacility{
protected:
    Season season;
public:
    Court(std::string adress, int sector, int capacity, int attendance, double area, Coating cover,Season season,int tickets);
    void ticket() override;
    void nextSeason();
    ~Court();
};

#endif