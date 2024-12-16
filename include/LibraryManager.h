#ifndef LIBRARYMANAGER_H
#define LIBRARYMANAGER_H

#include "User.h"
#include "Book.h"
#include "Library.h"

// Class to manage library operations and coordinate user-book interactions
class LibraryManager
{
private:
    // Pointer to the library being managed
    Library* library;

    // Finds a user by their ID
    User* findUserByID(int userID);

    // Finds a book by its ID
    Book* findBookByID(int bookID);

public:
    // Constructor to initialize the library manager with a library
    LibraryManager(Library* lib);

    // Adds a new user to the library
    void addNewUser(User* user);

    // Adds a new book to the library
    void addNewBook(Book* book);

    // Issues a book to a user based on their IDs
    void issueBook(int userID, int bookID);

    // Returns a book from a user based on their IDs
    void returnBook(int userID, int bookID);
};

#endif // LIBRARYMANAGER_H
