// Imported libraries
#include <iostream>

#ifndef BOOK_H
#define BOOK_H

// Book Class
class Book {
public:

	// Constructors
	Book();
	Book(std::string definedTitle, std::string definedAuthor, double definedPrice);

	// Class Functions
	void displayInfo() const;

private:
	std::string Title;
	std::string Author;
	double Price;
};

#endif