
#ifndef BOOKCATALOG_H
#define BOOKCATALOG_H

#include <map>
#include <string>
#include "BookCollection.h"

class BookCatalog {

public:
    // Public member variable: stores collections of books by collection name
    std::map<std::string, BookCollection*> collections;

    // Public member functions
    void addCollection(const std::string& collectionName, BookCollection* collection);
    void removeCollection(const std::string& collectionName);
    void displayCatalog() const;  // To display all collections in the catalog

};

#endif // BOOKCATALOG_H
