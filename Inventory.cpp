// Imported libraries
#include <iostream>

// Imported header files
#include "Inventory.h"

/************[Functions]************/

void Inventory::addBook(Book* bookPtr)
{
	books.push_back(bookPtr);
}

void Inventory::displayAll() const
{

	// Check for empty vector
	if (books.empty())
	{
		std::cout << "There is no books stored!" << std::endl;
		return;
	}

	// Loop through books vector and print out both book info and position
	for (int i = 0; i < books.size(); i++)
	{
		std::cout << "------------------------" << std::endl;
		books.at(i)->displayInfo();
		std::cout << "@index: [" << i << ']' << std::endl;
		std::cout << "------------------------" << std::endl;
		std::cout << std::endl;
	}

	return;
}

void Inventory::removeBook(int index)
{
	// Check for empty vector
	if (books.empty())
	{
		std::cout << "There is no books stored!" << std::endl;
		return;
	}
	// Check index value
	else if (index < 0 || index >= books.size())
	{
		std::cout << "There was no book found at index: " << index << std::endl;
		return;
	}

	// Erase pointer
	delete books[index];

	// Erase pointer in the vector
	books.erase(books.begin() + index);

	return;
}
/**************************************/

/************[Destructor]************/

Inventory::~Inventory()
{
	// Check for empty vector
	if (books.empty())
	{
		std::cout << "There is no books to be cleared." << std::endl;
		return;
	}

	// deletes each pointer from books vector
	for (int i = 0; i < books.size(); i++)
	{
		delete books[i];
	}

	// Clear books vector
	books.clear();
}

/**************************************/