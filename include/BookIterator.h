#ifndef BOOKITERATOR_H
#define BOOKITERATOR_H

#include <iostream>
#include <vector>
#include "Book.h"

// Iterator class to traverse through a collection of Book objects
class BookIterator
{
private:
    // Pointer to the vector of Book pointers to iterate over
    std::vector<Book*>* books;
    // Current position of the iterator in the collection
    size_t position;

public:
    // Constructor to initialize the iterator with a book collection and optional starting position
    BookIterator(std::vector<Book*>* Books, size_t Position = 0);

    // Returns the current Book object the iterator is pointing to
    Book* currentBook();

    // Advances the iterator to the next book (prefix increment operator)
    BookIterator& operator++();

    // Compares two iterators for inequality (used in iteration loops)
    bool operator!=(const BookIterator& other) const;

    // Dereference operator to access the book the iterator is pointing to
    Book* operator*() const;
};

#endif // BOOKITERATOR_H
