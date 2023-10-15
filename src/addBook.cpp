#include "../headers/common.h"

void addBook() {
    Book newBook;

    std::cout << "\nEnter book title: ";
    std::cin.ignore(); // To clear the buffer
    std::getline(std::cin, newBook.title);

    std::cout << "Enter author: ";
    std::getline(std::cin, newBook.author);

    std::cout << "Enter ISBN: ";
    std::cin >> newBook.isbn;

    std::cout << "Enter publication year: ";
    std::cin >> newBook.year;

    // Push the new book to the books vector (assuming we're using a global vector named "books")
    books.push_back(newBook);

    std::cout << "Book added successfully!\n";
}