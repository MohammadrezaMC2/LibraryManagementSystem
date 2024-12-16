#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include "Library.h"
#include "User.h"
#include "Staff.h"
#include "Admin.h"
#include "Book.h"
#include "LibraryException.h"

int main() {
    try {
        // Create a library instance
        Library library;

        // Create some books
        Book* book1 = new Book("C++ Programming", "Jane Doe", "1234567890", 300);
        Book* book2 = new Book("Data Structures", "John Smith", "0987654321", 500);

        // Add books to the library
        library.addBook(book1);
        library.addBook(book2);

        // Create some users
        User* user1 = new User("Alice", 1, "alice@example.com", User::Regular);
        Staff* staff1 = new Staff("Bob", 2, "bob@example.com", false);
        Admin* admin1 = new Admin("Carol", 3, "carol@example.com");

        // Register users in the library
        library.registerUser(user1);
        library.registerUser(staff1);
        library.registerUser(admin1);

        // Borrow a book
        library.borrowBook(user1, book1); // Alice borrows "C++ Programming"

        // Try borrowing the same book again (should throw an exception)
        library.borrowBook(user1, book1); // This will throw a LibraryException

    } catch (const LibraryException& e) {
        std::cerr << "Library Error: " << e.what() << std::endl; // Handle the exception and show an error message
    } catch (const std::exception& e) {
        std::cerr << "General Error: " << e.what() << std::endl; // Handle any other standard exceptions
    }

    return 0;
}
