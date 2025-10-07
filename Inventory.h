// Imported libraries
#include <iostream>
#include <vector>

// Imported header files
#include "Book.h"

#ifndef INVENTORY_H
#define INVENTORY_H

// Inventory class
class Inventory : public Book {
public:

	// Class functions
	void addBook(Book* bookPtr);
	void displayAll() const;
	void removeBook(int index);

	// Destructor
	~Inventory();

private:
	std::vector<Book*> books;
};

#endif