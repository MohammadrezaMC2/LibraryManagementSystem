#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include "Staff.h"

// The Admin class inherits from the Staff class and represents administrative staff members
class Admin : public Staff
{
private:
    // A list of privileges assigned to the admin user
    std::vector<std::string> adminPrivileges;

public:
    // Constructor to initialize an Admin object with basic details
    Admin(const std::string& name, int userID, const std::string& email);

    // Adds a new privilege to the admin user
    void addPrivilege(const std::string& privilege);

    // Removes a privilege from the admin user
    void removePrivilege(const std::string& privilege);

    // Displays the details of the admin user, including privileges
    void displayAdminDetails() const;
};

#endif // ADMIN_H
