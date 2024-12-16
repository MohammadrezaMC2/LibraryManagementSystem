#ifndef STAFF_H
#define STAFF_H

#include<iostream>
#include "User.h"
#include "Library.h"

// Class representing a staff member who has administrative privileges in the library
class Staff : public User
{
private:
    // Flag indicating whether the staff member has admin privileges
    bool isAdmin;

public:
    // Constructor to initialize the staff member with name, user ID, email, and admin status
    Staff(const std::string& Name, int UserID, const std::string& Email, bool IsAdmin);

    // Allows a staff member to add a new book to the library
    void addNewBook(Book* book, Library& library);

    // Allows a staff member to remove a book from the library
    void removeBook(Book* book, Library& library);

    // Displays the details of the staff member
    void displayStaffDetails() const;
};

#endif // STAFF_H
