#ifndef DATE_H
#define DATE_H

#include <boost/date_time/gregorian/gregorian.hpp>
#include <string>

// Class to handle date operations using Boost library
class Date
{
private:
    // Boost date object to store the transaction date
    boost::gregorian::date transactionDate;

public:
    // Sets the transaction date from a string in YYYY-MM-DD format
    void setDate(const std::string& dateStr);

    // Returns the transaction date as a string in YYYY-MM-DD format
    std::string getDate() const;
};

#endif // DATE_H
