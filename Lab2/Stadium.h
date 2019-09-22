#pragma once

#ifndef STADIUM_H
#define STADIUM_H

#include<string>
#include<vector>

class Stadium
{

public:
    Stadium();
    Stadium(std::string adress_, std::string nameCloub_, int sectors_, int capacity_, int attendance_);
    Stadium(const Stadium&);
    ~Stadium();

    std::string getAdress();
    std::string getNameCloub();
    int getSectors();
    int getCapacity();
    int getAttendance();
    float getAVGAttendance();

    void setAdress(std::string);
    void setNameCloub(std::string);
    void setSectors(int);
    void setCapacity(int);
    void setAttendance(int);
    
    void imitation();
    void printAVGSort(std::vector<Stadium> );
    void printInfo();

    void serialize();
    void deserialize();

    void serialize(const std::string&);
    void deserialize(const std::string&);
private:
    std::string adress_;
    std::string nameCloub_; 
    int sectors_;
    int capacity_;
    int attendance_;
    float avgAttendance_;
    void SelectionSort(std::vector<Stadium>,int);
};




#endif