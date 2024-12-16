#ifndef USERPROFILE_H
#define USERPROFILE_H

#include <string>
#include <iostream>

// Class representing a user's profile with address and phone number
class UserProfile
{
private:
    // Enum to represent the user's status (Active or Inactive)
    enum UserStatus { Active, Inactive } status;

    // Helper function to return the status as a string ("Active" or "Inactive")
    std::string getStatusString() const;

public:
    // Address of the user
    std::string address;
    // Phone number of the user
    std::string phoneNumber;

    // Constructor to initialize the user's profile with address and phone number
    UserProfile(const std::string& Address, const std::string& PhoneNumber);

    // Updates the user's profile with new address and phone number
    void updateProfile(const std::string& newAddress, const std::string& newPhoneNumber);

    // Displays the user's profile details
    void displayProfile() const;
};

#endif // USERPROFILE_H
