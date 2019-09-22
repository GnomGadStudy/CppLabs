#include "Stadium.h"

#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>
#include <fstream>
#include <vector>

using namespace std;

Stadium::Stadium():Stadium("Unknow","Unknow",0,0,0){
}

Stadium::Stadium(std::string adress_, std::string nameCloub_, int sectors_, int capacity_, int attendance_):adress_(adress_),nameCloub_(nameCloub_),sectors_(sectors_),capacity_(capacity_),attendance_(attendance_){
this->avgAttendance_ =0;
}

Stadium::Stadium(const Stadium& st):adress_(st.adress_),nameCloub_(st.nameCloub_),sectors_(st.sectors_),capacity_(st.capacity_),attendance_(st.attendance_){
this->avgAttendance_ =st.avgAttendance_;
}

Stadium::~Stadium(){
std::cout<<"Stadium has been deleted"<<std::endl;
}

std::string Stadium::getAdress(){
    return adress_;
}
std::string Stadium::getNameCloub(){
    return nameCloub_;
}
int Stadium::getSectors(){
    return sectors_;
}
int Stadium::getCapacity(){
    return capacity_;
}
int Stadium::getAttendance(){
    return attendance_;
}
float Stadium::getAVGAttendance(){
    return avgAttendance_;
}
void Stadium::setAdress(std::string adress_){
    this->adress_ = adress_;
}
void Stadium::setNameCloub(std::string nameCloub_){
     this->nameCloub_ = nameCloub_;
}
void Stadium::setSectors(int sectors_){
    this->sectors_ = sectors_;
}
void Stadium::setCapacity(int capacity_){
    this->capacity_ = capacity_;
}
void Stadium::setAttendance(int attendance_){
    this->attendance_ = attendance_;
}

void Stadium::imitation(){
    cout<< std::endl;
    srand(time(0));
    attendance_ = rand()%capacity_;
    avgAttendance_+= attendance_*100/capacity_;
    cout<< "Match 1  attendance:"<<attendance_ <<" - "<<(float)attendance_*100/capacity_<<"%"<<endl;
    attendance_ = rand()%capacity_;;
    avgAttendance_+= attendance_*100/capacity_;
    cout<< "Match 2  attendance: "<<attendance_<<" - "<<(float)attendance_*100/capacity_<<"%"<<endl;
    attendance_ = rand()%capacity_;
    avgAttendance_+= attendance_*100/capacity_;
    cout<< "Match 3  attendance:"<<attendance_<<" - "<<(float)attendance_*100/capacity_<<"%"<<endl;
    attendance_ = rand()%capacity_;
    avgAttendance_+= attendance_*100/capacity_;
    cout<< "Match 4  attendance: "<<attendance_<<" - "<<(float)attendance_*100/capacity_<<"%"<<endl;

    avgAttendance_/=4;
    cout<<"AVG attendance:"<<avgAttendance_<<"%"<<endl;
    cout<< std::endl;
    
}

void Stadium::printAVGSort(std::vector<Stadium> stads){
    SelectionSort(stads,stads.capacity());
    stads[0].printInfo();
    stads[1].printInfo();
    stads[2].printInfo();
    cout<< std::endl;
}



void Stadium::SelectionSort(std::vector<Stadium> arrayPtr, int n) 
{
    for (int repeat_counter = 0; repeat_counter < n; repeat_counter++)
    {
        Stadium temp = arrayPtr[0]; 
        for (int element_counter = repeat_counter + 1; element_counter < n; element_counter++)
        {
            if (arrayPtr[repeat_counter].avgAttendance_ > arrayPtr[element_counter].avgAttendance_)
            {
                temp = arrayPtr[repeat_counter];
                arrayPtr[repeat_counter] = arrayPtr[element_counter];
                arrayPtr[element_counter] = temp;
            }
        }
    }
}
void Stadium::printInfo(){
    cout<< std::endl;
    cout << "adress:" << adress_<< std::endl;
    cout << "nameCloub: " <<nameCloub_ << std::endl;
    cout << "sectors: " << sectors_<< std::endl;
    cout << "capacity: " << capacity_<< std::endl;
    cout << "attendance: " <<attendance_ << std::endl;
    cout << "AVG attendance:"<<avgAttendance_<<"%"<<endl;
}
void Stadium::serialize(){
    std::ofstream out("TEXT.txt", std::ios::app);

    if (out.is_open()){
        out<< std::endl;
        out << "adress:" << adress_<< std::endl;
        out << "nameCloub: " <<nameCloub_ << std::endl;
        out << "sectors: " << sectors_<< std::endl;
        out << "capacity: " << capacity_<< std::endl;
        out << "attendance: " <<attendance_ << std::endl;
        out << "AVG attendance:"<<avgAttendance_<<"%"<<endl;
    }
    out.close();     
}

void Stadium::deserialize(){
    
    std::cout<<std::endl;
    std::string line;
    std::ifstream in("Text.txt"); 
    if (in.is_open()) {
        while (getline(in, line)){
            std::cout << line << std::endl;
        }
    }
    in.close();
    std::cout<<std::endl;     
}

void Stadium::serialize(const std::string& name){
    std::ofstream out(name, std::ios::app);

    if (out.is_open()){
        out<< std::endl;
        out << "adress:" << adress_<< std::endl;
        out << "nameCloub: " <<nameCloub_ << std::endl;
        out << "sectors: " << sectors_<< std::endl;
        out << "capacity: " << capacity_<< std::endl;
        out << "attendance: " <<attendance_ << std::endl;
        out << "AVG attendance:"<<avgAttendance_<<"%"<<endl;
    }
    out.close();     
}

void Stadium::deserialize(const std::string& name){
    
    std::cout<<std::endl;
    std::string line;
    std::ifstream in(name); 
    if (in.is_open()) {
        while (getline(in, line)){
            std::cout << line << std::endl;
        }
    }
    in.close();
    std::cout<<std::endl;     
}