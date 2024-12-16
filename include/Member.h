#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>

// Abstract base class representing a library member
class Member
{
public:
    // Name of the member
    std::string name;
    // Unique ID of the member
    int memebrID;

    // Constructor to initialize the member with a name and ID
    Member(const std::string&, int MemebrID);

    // Virtual method to display member details, must be implemented by derived classes
    virtual void displayDetails() const = 0;
};

#endif // MEMBER_H
