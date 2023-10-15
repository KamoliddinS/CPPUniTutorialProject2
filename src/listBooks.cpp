#include "../headers/common.h"

void listBooks() {
    std::cout << "\nList of Books:\n";
    for (const auto &book : books) {
        std::cout << book.title << ", " << book.author << ", " << book.isbn << ", " << book.year << "\n";
    }
}