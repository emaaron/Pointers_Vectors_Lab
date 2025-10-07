// Imported libraries
#include <iostream>
#include <iomanip>

// Imported header files
#include "Book.h"

/************[Constructors]************/

Book::Book() : Title(""), Author(""), Price(0.00) {}

Book::Book(std::string definedTitle, std::string definedAuthor, double definedPrice)
: Title(definedTitle), Author(definedAuthor), Price(definedPrice) {}

/**************************************/

/************[Functions]************/

void Book::displayInfo() const
{
	std::cout << "Title: \"" << Title << '\"'
		<< "\nAuthor: " << Author
		<< "\nPrice: $" << std::fixed << std::setprecision(2) << Price
		<< std::endl;
}

/**************************************/