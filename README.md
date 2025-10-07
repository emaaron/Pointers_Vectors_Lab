# Book Class program
---

## Book class

|   Attribute   |   Data Type   |   Description |
|---------------|---------------|---------------|
|`Title`        |`std::string`  |Book title
|`Author`       |`std::string`  |Book Author
|`Price`        |`double`       |Book Price

|   Functions   |   Description |
|---------------|---------------|
|`Book()`       |Constructor used for default values and assinging values to attribues
|`void displayInfo()`|Used to display all attributes values from a class object

---

## Inventory class

|   Attribute   |   Data Type   |   Description |
|---------------|---------------|---------------|
|`books`        |`std::vector<Book*>`|Vector pointer for storing all book classes|

|   Functions   |   Description |
|---------------|---------------|
|`void addBook()`       |   add Book class into `std::vector<Book*> books`
|`void displayAll()`    |   display all book classes inside `std::vector<Book*> books`
|`void removeBook()`    |   remove Book class from `std::vector<Book*> books`

---
> Aaron Vasquez
