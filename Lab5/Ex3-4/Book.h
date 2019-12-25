#pragma once
#include <string>

#ifndef BOOK_H
#define BOOK_H

class Book
{
private:
	std::wstring title;
	std::wstring author;
	int year;
public:
	Book(std::wstring, std::wstring, int);
	std::wstring getName();
	std::wstring getAuthor();
	int getYear();
    void print();
};

class BookSorter {
public:
	bool operator() (Book*, Book*);
};

class BookFinder {
private:
	int y1;
	int y2;
public:
	BookFinder(int year1, int year2);
	bool operator() (Book* book);
};
#endif
