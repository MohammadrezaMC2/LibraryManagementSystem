cmake_minimum_required(VERSION 3.10)

# Project Name
project(LibraryManagementSystem)

# Set C++ standard to C++11 (or any other version you're using)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find Boost library (Make sure Boost is installed)
find_package(Boost REQUIRED)

# Include the directories for the header files
include_directories(include ${Boost_INCLUDE_DIRS})

# Add source files
set(SOURCES
    src/Book.cpp
    src/User.cpp
    src/Transaction.cpp
    src/Library.cpp
    src/SearchEngine.cpp
    src/LibraryException.cpp
    src/EmailNotification.cpp
    src/Statistics.cpp
    src/Date.cpp
    src/Admin.cpp
    src/Staff.cpp
    src/Member.cpp
    src/Feedback.cpp
    src/DiscountCoupon.cpp
    src/BookCatalog.cpp
    src/BookCollection.cpp
    src/BookIterator.cpp
    src/BookNotFoundException.cpp
)

# Create the executable for the main program
add_executable(LibraryManagementSystem main.cpp ${SOURCES})

# Link Boost libraries
target_link_libraries(LibraryManagementSystem Boost::Boost)

# If you have unit tests, you can add the test folder (optional)
# enable_testing()
# add_subdirectory(test)
