#ifndef LIBRARYEXCEPTION_H
#define LIBRARYEXCEPTION_H

#include <exception>
#include <string>

// Custom exception class to handle library-specific errors
class LibraryException : public std::exception
{
private:
    // Error message describing the exception
    std::string message;

public:
    // Constructor to initialize the exception with a custom error message
    LibraryException(const std::string& message);

    // Returns the error message as a C-style string
    const char* what() const noexcept override;
};

#endif // LIBRARYEXCEPTION_H
