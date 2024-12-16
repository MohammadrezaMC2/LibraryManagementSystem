#ifndef USER_H
#define USER_H

#include<iostream>
#include <vector>
#include <algorithm>
#include "Book.h"
#include "Member.h"

// Class representing a user of the library, derived from the Member class
class User : public Member
{
private:
    // Email address of the user
    std::string email;

public:
    // Name of the user
    std::string name;
    // Unique ID of the user
    int userID;
    // List of books currently checked out by the user
    std::vector<Book*> checkOutBooks;

    // Enum for different types of library memberships
    enum MembershipTypes { Regular, Premium, Staff } membershipType;

    // Constructor to initialize the user with name, user ID, email, and membership type
    User(const std::string& Name, int UserID, const std::string& Email, MembershipTypes MembershipType);

    // Allows the user to borrow a book from the library
    void borrowBook(Book* book);

    // Allows the user to return a book to the library
    void returnBook(Book* book);

    // Displays the user's details (overridden from the Member class)
    void displayDetails() const override;

    // Returns the user's name
    std::string getName() const;

    // Returns the user's unique ID
    int getUserID() const;
};

#endif // USER_H
