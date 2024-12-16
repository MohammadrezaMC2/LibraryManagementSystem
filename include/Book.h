#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include "BookNotFoundException.h"

// The Book class represents a book in a library or inventory system
class Book
{
private:
    // Unique identifier for the book (International Standard Book Number)
    std::string ISBN;
    // Number of pages in the book
    int pageCount;

public:
    // Title of the book
    std::string title;
    // Author of the book
    std::string author;
    // Unique ID for the book in the library system
    int bookID;
    // Status of the book (true if checked out, false if available)
    bool isCheckedOut;

    // Constructor to initialize a Book object with its attributes
    Book(const std::string& Title, const std::string& Author, const std::string& ISBN, int PageCount);

    // Displays the details of the book (title, author, ISBN, etc.)
    void displayBookDetails() const;

    // Marks the book as checked out
    void checkOutBook();

    // Marks the book as returned and available
    void returnBook();

    // Checks if the book is available for checkout
    bool isAvailable() const;
};

#endif // BOOK_H
