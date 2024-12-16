#ifndef EMAILNOTIFICATION_H
#define EMAILNOTIFICATION_H

#include <string>
#include <iostream>

// Class to handle sending email notifications
class EmailNotification {
public:
    // Sends an email with the given message to the specified email address
    void sendEmail(const std::string& email, const std::string& message);
};

#endif // EMAILNOTIFICATION_H
