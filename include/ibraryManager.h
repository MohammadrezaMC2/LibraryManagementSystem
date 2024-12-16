#ifndef IBRARYMANAGER_H
#define IBRARYMANAGER_H


class ibraryManager
{
private:
    Library* library;
    User* findUserByID(int userID);
    Book* findBookByID(int bookID);

public:
    void addNewUser(User* user);
    void addNewBook(Book* book);
    void issueBook(int userID, int bookID);
    void returnBook(int userID, int bookID);

};

#endif // IBRARYMANAGER_H
