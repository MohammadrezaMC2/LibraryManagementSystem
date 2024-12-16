#ifndef SEARCHENGINE_H
#define SEARCHENGINE_H

#include<iostream>
#include<vector>
#include "Book.h"

// Class responsible for searching books in the library based on various criteria
class SearchEngine
{
private:
    // Vector containing pointers to all books in the search engine
    std::vector<Book*> books;

public:
    // Constructor to initialize the search engine with a list of books
    SearchEngine(std::vector<Book*> Books);

    // Template function to search books by title based on a given criterion
    template<typename T>
    std::vector<Book*> searchBytitle(const T& criterion);

    // Searches books by the author's name and returns a vector of matching books
    std::vector<Book*> searchByAuthor(const std::string& author);

    // Searches for a book by its unique ID and returns a vector containing the book
    std::vector<Book*> searchByID(int bookID);
};

#endif // SEARCHENGINE_H
