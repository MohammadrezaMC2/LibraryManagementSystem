#ifndef BOOKNOTFOUNDEXCEPTION_H
#define BOOKNOTFOUNDEXCEPTION_H

#include <exception>
#include <string>

// Custom exception class to handle cases where a book is not found
class BookNotFoundException : public std::exception
{
private:
    // Error message describing the exception
    std::string errorMessage;

public:
    // Constructor to initialize the exception with a custom error message
    BookNotFoundException(const std::string& message);

    // Returns the error message as a C-style string
    virtual const char* what() const noexcept override;
};

#endif // BOOKNOTFOUNDEXCEPTION_H
