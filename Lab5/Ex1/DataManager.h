#pragma once

#ifndef DATAMANAGER_H
#define DATAMANAGER_H


#include<iostream>
#include<vector>
#include <fstream>
#include <algorithm>


template <typename T>
class DataManager{
protected:
	bool sizeTest(int l){
		return data.size()+l<=MAX_SIZE? true:false;
	}
	void seralize(){
		std::ofstream f("dump.dat");
		for (int i = 0; i < data.size(); i++) {
			f << data[i]<<std::endl;	
		}
		f.close();
	}
	void deserize(){
		std::ifstream file("dump.dat");
	if (file.is_open()) {
		std::string str;
		std::getline(file, str);
		while (str.compare("")) {
			if (typeid(T) == typeid(int))
				this->push(std::stoi(str));
			if (typeid(T) == typeid(double))
				this->push(std::stod(str));
			if (typeid(T) == typeid(char))
				this->push(*(str.c_str()));
			std::getline(file, str);
		}
	}
	}
	
private:
	std::vector<T> data;
public:
	const int MAX_SIZE = 64;
	DataManager(){
	}
    ~DataManager(){	
	}
	void print(){
		for (int i = 0; i < data.size(); i++) {
		std::cout << data[i] << std::endl;
	}
	}
	void push(T elem);
	void push(T elems[], int size);
	T peek();					
	T pop();
};


//------------------------------------------------------------------------------------------------

template <typename T>
void DataManager<T>::push(T elem) {
    if(sizeTest(1)){
        data.push_back(elem);   
		std::sort(data.begin(),data.end(),[](int a, int b) { return a > b; });					      
	}
	else {
		seralize();		  
		data.clear();			  
		data.push_back(elem);     
	}
}

template <typename T>
void DataManager<T>::push(T elems[], int size) {
	if(sizeTest(size)){
		for (int i = 0; i < size; i++)
			data.push_back(elems[i]);
	}
	else{
		for (int i = 0; i < size; i++)
			this->push(elems[i]);
	}
	std::sort(data.begin(),data.end(),[](T a, T b) { return a > b; });
}

template <typename T>
T DataManager<T>::peek() {
	if(data.size()<=2)
		return 0;
	return data.at(1);
}

template <typename T>
T DataManager<T>::pop() {
	T tmp;
	tmp = data.front();
	data.erase(data.begin());
	return tmp;
}









//------------------------------------------CHAR------------------------------------------

template <>
class DataManager<char>{
protected:
	bool sizeTest(int l){
		return data.size()+l<=MAX_SIZE? true:false;
	}
	void seralize(){
		std::ofstream f("dump.dat");
		for (int i = 0; i < data.size(); i++) {
			f << data[i]<<std::endl;	
		}
		f.close();
	}
	void deserize(){
		std::ifstream file("dump.dat");
	if (file.is_open()) {
		std::string str;
		std::getline(file, str);
		while (str.compare("")) {
				this->push(*(str.c_str()));
			std::getline(file, str);
		}
	}
	}
	
private:
	std::vector<char> data;
public:
	const int MAX_SIZE = 64;
	DataManager(){
	}
    ~DataManager(){	
	}
	void print(){
		for (int i = 0; i < data.size(); i++) {
		std::cout << data[i] << std::endl;
	}
	}
	void push(char elem);
	void push(char elems[], int size);
	char peek();					
	char pop();
	char popUpper();	
	char popLower();
};


//------------------------------------------------------------------------------------------------

void DataManager<char>::push(char elem) {	
	if(elem==','||elem=='.'||elem=='!'||elem=='?'||elem==':'||elem==';')
			elem = '_';
	
    if(sizeTest(1)){
        data.push_back(elem);   
		std::sort(data.begin(),data.end(),[](int a, int b) { return a > b; });					      
	}
	else {
		seralize();		  
		data.clear();			  
		data.push_back(elem);     
	}
}

void DataManager<char>::push(char elems[], int size) {
	if(sizeTest(size)){
		for (int i = 0; i < size; i++){
			if(elems[i]==','||elems[i]=='.'||elems[i]=='!'||elems[i]=='?'||elems[i]==':'||elems[i]==';')
				elems[i] = '_';
			data.push_back(elems[i]);
		}
	}
	else{
		for (int i = 0; i < size; i++)
			this->push(elems[i]);
	}
	std::sort(data.begin(),data.end(),[](char a, char b) { return a > b; });
}

char DataManager<char>::peek() {
	if(data.size()<=2)
		return 0;
	return data.at(1);
}

char DataManager<char>::pop() {
	char tmp;
	tmp = data.front();
	data.erase(data.begin());
	return tmp;
}

char DataManager<char>::popUpper(){
	char tmp = pop();
	std::toupper(tmp);
	return tmp;
}

char DataManager<char>::popLower(){
	char tmp = pop();
	std::tolower(tmp);
	return tmp;
	
}

#endif