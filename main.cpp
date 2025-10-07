/*
*	Name: Aaron Vasquez
*	Date:
*	Program Purpose:
*	Assignment: Lab Activities: Pointers
*/

// Imported libraries
#include <iostream>
#include <string>
#include <limits>
#include <stdlib.h>

// Imported header files
#include "Book.h"
#include "Inventory.h"

// Input validation (int)
void inputvalidate(int &value)
{
	std::cout << "> ";
	while (!(std::cin >> value))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "> ";
	}
	std::cout << std::endl;
	return;
}

// Input validation for pricing (double)
void inputvalidate(double& value)
{
	std::cout << "$ ";
	while (!(std::cin >> value))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "$ ";
	}
	std::cout << std::endl;
	return;
}

// Main function
int main()
{
	// Classes
	Book* b = nullptr;
	Inventory store;

	// Main program variables
	int option, bookIndex;
	double price;
	std::string bookTitle, bookAuthor;

	// Main program loop (Loops until 4 is entered)
	do {
		std::cout << "[Choose a option!]"
			<< "\n1. Add a new book"
			<< "\n2. Display all books"
			<< "\n3. Remove a book"
			<< "\n4. Quit"
			<< std::endl;

		inputvalidate(option);

		switch (option)
		{
		case 1: // Option 1 (option = 1)

			// Book title input
			std::cout << "What is the title of this book?" << std::endl;
			std::cout << "> ";
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::getline(std::cin, bookTitle);
			std::cout << std::endl;

			// Book author input
			std::cout << "Who is the author of \"" << bookTitle << "\"?" << std::endl;
			std::cout << "> ";
			std::getline(std::cin, bookAuthor);
			std::cout << std::endl;

			// Price input
			std::cout << "How much does \"" << bookTitle << "\" by " << bookAuthor << " cost?" << std::endl;
			inputvalidate(price);

			// Store new book into inventory class
			store.addBook(b = new Book(bookTitle, bookAuthor, price));

			std::cout << std::endl;
			break;
		case 2: // Option 2 (option = 2)

			// Display all books from Inventory class
			store.displayAll();

			std::cout << std::endl;
			break;
		case 3: // Option 3 (option = 3)
			std::cout << std::endl;
			std::cout << "What book would you like to remove? (Specify it's index)" << std::endl;

			// Index input
			inputvalidate(bookIndex);

			// Remove book from that index
			store.removeBook(bookIndex);

			std::cout << std::endl;
			break;
		default: // If option doesn't equal a option return back to menu
			continue;
		}

	} while (option != 4); // Loop until 4 is entered

	return 0; // End program with zero errors
}