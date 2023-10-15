#include "../headers/common.h"


void searchBook() {
    std::string searchTerm;
    std::cout << "\nEnter title/author/ISBN to search: ";
    std::cin.ignore();
    std::getline(std::cin, searchTerm);

    // Search
    for (const auto &book : books) {
        if (book.title == searchTerm || book.author == searchTerm || book.isbn == searchTerm) {
            std::cout << "\nFound: " << book.title << ", " << book.author << ", " << book.isbn << ", " << book.year << "\n";
        }
    }
}