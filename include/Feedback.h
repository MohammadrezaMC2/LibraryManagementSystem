#ifndef FEEDBACK_H
#define FEEDBACK_H

#include <iostream>
#include "User.h"
#include "Book.h"

// Class representing feedback given by a user on a book
class Feedback
{
public:
    // ID of the feedback
    int feedBackID;
    // Pointer to the user who provided the feedback
    User* user;
    // Pointer to the book the feedback is about
    Book* book;
    // Text of the feedback
    std::string feedBackText;

    // Constructor to initialize the feedback with user, book, and feedback text
    Feedback(User* user, Book* book, const std::string& feedbackText);

    // Displays the feedback details
    void displayFeedback() const;
};

#endif // FEEDBACK_H
