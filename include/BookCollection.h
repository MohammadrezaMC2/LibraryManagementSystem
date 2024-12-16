#ifndef BOOKCOLLECTION_H
#define BOOKCOLLECTION_H

#include "Book.h"
#include <vector>
#include <iostream>

// Template class to manage a collection of books
template<typename T>
class BookCollection
{
public:
    // Constructor to initialize the book collection
    BookCollection();

    // Vector to store pointers to Book objects
    std::vector<Book*> books;

    // Adds a new book to the collection
    void addBook(Book* book);

    // Retrieves a book from the collection by its unique ID
    Book* getBookByID(int bookID);

    // Displays details of all books in the collection
    void displayBooks() const;

    // Displays additional details about the collection
    void displayCollectionDetails() const;
};

#endif // BOOKCOLLECTION_H
