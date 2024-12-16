#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <map>
#include <vector>
#include "Book.h"
#include "User.h";
#include "Transaction.h"

class Library
{
private:
   std::map<std::string, Transaction*> transactionHistory;

public:
    std::vector<Book*> books;
    std::vector<User*> users;
    void addBook(Book* book);
    void removeBook(Book* book);
    void registerUser(User* user);
    void borrowBook(User* user, Book* book);
    void returnBook(User* user, Book* book);
    void displayLibraryDetails() const;
    void setTransactionHistory(std::map<std::string, Transaction*> TransactionHistory)
    {
         transactionHistory = TransactionHistory;
    }
};

#endif // LIBRARY_H
