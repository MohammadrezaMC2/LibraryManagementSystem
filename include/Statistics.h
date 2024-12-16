#ifndef STATISTICS_H
#define STATISTICS_H

#include <iostream>

// Class to track and display library statistics related to books
class Statistics
{
public:
    // Number of books currently borrowed
    int booksBorrowed;
    // Total number of books in the library
    int totalBooks;

    // Constructor to initialize statistics with default values
    Statistics();

    // Updates the statistics based on whether a book was borrowed or returned
    void updateStatistics(bool borrowed);

    // Displays the current statistics of the library
    void displayStatistics() const;
};

#endif // STATISTICS_H
