#include "../headers/common.h"

void removeBook() {
    std::string isbn;
    std::cout << "\nEnter ISBN of book to remove: ";
    std::cin >> isbn;

    // Search and remove (Using vector's erase-remove idiom)
    books.erase(std::remove_if(books.begin(), books.end(),
                               [&isbn](const Book &b) { return b.isbn == isbn; }),
                books.end());
;
    std::cout << "Book removed successfully (if it was present).\n";
}