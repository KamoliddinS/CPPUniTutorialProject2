#include "../headers/common.h"

std::vector<Book> books;
int main() {
    int choice;

    do {
        std::cout << "\nLibrary Management System\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. Remove Book\n";
        std::cout << "3. Search Book\n";
        std::cout << "4. List Books\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice) {
            case 1: addBook(); break;
            case 2: removeBook(); break;
            case 3: searchBook(); break;
            case 4: listBooks(); break;
            case 5: std::cout << "Goodbye!\n"; break;
            default: std::cout << "Invalid choice! Try again.\n";
        }
    } while(choice != 5);

    return 0;
}