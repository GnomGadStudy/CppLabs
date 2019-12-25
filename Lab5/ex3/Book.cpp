#include "Book.h"
#include<iostream>
#include <string>
#include <cstring>
Book::Book(std::wstring title,std::wstring author,int year){
    this->title = title;
    this->author = author;
    this->year = year;
}
std::wstring Book::getName(){
    return this->title;
}

std::wstring Book::getAuthor(){
    return this->author;
}
int Book::getYear(){
    return this->year;
}

void Book::print(){
std::wcout<<title<<" "<<author<<" "<<year<<"\n";
}

bool BookSorter::operator() (Book* b1,Book* b2){
    return b1->getAuthor() < b2->getAuthor();
}

BookFinder::BookFinder(int year1, int year2): y1(year1), y2(year2){

}

bool BookFinder::operator()(Book* book){
    return (y1 < book->getYear() && book->getYear() < y2);
}