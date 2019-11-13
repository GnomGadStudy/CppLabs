#include <iostream>
#include "SportsFacility.h"

SportsFacility::SportsFacility(std::string adress, int sectors, int capacity, int attendance, double area, Coating cover,int tickets){
    this->adress = adress;
    this->sectors = sectors;
    this->capacity = capacity;
    this->attendance = attendance;
    this->area = area;
    this->cover = cover;
    this->tickets = tickets;
    std::cout<<"SportsFacility has been created"<<std::endl;
}
SportsFacility::~SportsFacility(){
    std::cout<<"SportsFacility has been deleted"<<std::endl;
}