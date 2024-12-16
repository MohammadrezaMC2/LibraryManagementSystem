#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <User.h>
#include "Date.h"

// Class representing a library transaction (either borrow or return of a book)
class Transaction
{
private:
    // Unique ID for each transaction
    std::string transactionID;

public:
    // Pointer to the user involved in the transaction
    User* user;
    // Pointer to the book involved in the transaction
    Book* book;
    // Pointer to the date of the transaction
    Date* transactionDate;

    // Enum for different types of transactions (Borrow or Return)
    enum TransactionType { Borrow, Return } type;

    // Constructor to initialize the transaction with user, book, type, and transaction date
    Transaction(User* User, Book* Book, TransactionType Type, const std::string& dateStr);

    // Displays the details of the transaction (user, book, date, and type)
    void displayTransactionDetails() const;

    // Returns the unique transaction ID
    std::string getTransactionID() const;
};

#endif // TRANSACTION_H
