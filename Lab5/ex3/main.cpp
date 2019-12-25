#include <iostream>
#include<vector>
#include <fstream>
#include <string>
#include <algorithm>
#include"Book.h"
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	_wsetlocale(LC_ALL,L"russian");

	std::vector<Book*> books;
	books.push_back(new Book(L"Война и мир", L"Толстой Л.Н.", 2010));
	books.push_back(new Book(L"Подросток", L"Достоевский Ф.М.", 2004));
	books.push_back(new Book(L"Обрыв", L"Гончаров И.А.", 2010));
	books.push_back(new Book(L"Анна Каренина", L"Толстой Л.Н.", 1999));
	books.push_back(new Book(L"Обыкновенная история", L"Гончаров И.А.", 2011));
	books.push_back(new Book(L"Утраченные иллюзии", L"Бальзак О.", 2009));
	books.push_back(new Book(L"Оливер Твист", L"Диккенс Ч.", 2001));
	books.push_back(new Book(L"Фауст", L"Гёте И.В.", 2010));
	books.push_back(new Book(L"Лилия долины", L"Бальзак О.", 1998));

	std::wcout << L"\nКниги в алфавитном порядке:\n\n";
	BookSorter book_sorter;
	std::sort(books.begin(), books.end(), book_sorter);

std::vector<Book*>::iterator i;
for (i = books.begin(); i != books.end(); ++i)
{
std::wcout << (*i)->getAuthor() << " \""<< (*i)->getName() << "\"" << std::endl;
}

BookFinder book_finder(2005, 2014);
std::vector<Book*>::iterator finder = std::find_if(books.begin(), books.end(), book_finder); 

std::wcout << L"\nКниги в диапазоне года издания 2005 - 2014:\n\n";

while (finder != books.end()){
std:wcout << (*finder)->getAuthor() << " \""<< (*finder)->getName() << "\"" << std::endl;
finder = std::find_if(++finder, books.end(), book_finder);
}

for (i = books.begin(); i != books.end(); ++i)
{
delete (*i);
}

return 0;
}