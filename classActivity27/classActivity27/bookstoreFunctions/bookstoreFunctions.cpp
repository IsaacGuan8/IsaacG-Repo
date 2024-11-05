#include "bookstore.hpp"
#include "bookOperators.hpp"
#include "bookMenuChoices.hpp"
#include <iostream>

using std::string, std::cout, std::endl, std::getline, std::cin;

namespace bookstoreManagement{
    void addBook(Bookstore& bookstore, const Book& newBook){
        bookstore.inventory.push_back(newBook);
    }

    void findBook(const Bookstore& bookstore, const string& title){
        for (const auto& book : bookstore.inventory){
            if(book.title == title){
                cout << "Book titled " << title << " is found" << endl;
                cout << book << endl;
                return;
            }
        }
        cout << "Book titled " << title << " is not found" << endl;
    }

    void displayInventory(const Bookstore& bookstore){
        if (bookstore.inventory.empty()){
            cout << "No books currently in inventory" << endl;
        }else{
            for (const auto& book : bookstore.inventory){
                cout << book << endl;
            }
        }
    }

    void manageBookStore(Bookstore& bookstore){
        int choice = 0;
        
        do{
            cout << "Bookstore Management System" << endl;
            cout << addBookMenu << ". Add Book" << endl;
            cout << findBookMenu << ". Find Book" << endl;
            cout << displayInventoryMenu << ". Display Book Inventory" << endl;
            cout << exitMenu << ". Exit" << endl;
            cin >> choice;
            
            if(choice == addBookMenu){
                Book book;
                cout << "Enter book title: " << endl;
                cin.ignore();
                getline(cin, book.title);
                cout << "Enter book author: " << endl;
                getline(cin, book.author);
                cout << "Enter book quantity: " << endl;
                cin >> book.quanitity;
                
                cout << "Enter the release date month:" << endl;
                cin >> book.releaseDate.month;
                
                cout << "Enter the release date day: " << endl;
                cin >> book.releaseDate.day;
                
                cout << "Enter the release date year: " << endl;
                cin >> book.releaseDate.year;
                
                addBook(bookstore, book);
                cout << "Book has been sucessfully added" << endl;
            } else if (choice == findBookMenu){
                string title;
                cout << "Enter the book's title to find: " << endl;
                cin.ignore();
                getline(cin, title);
                findBook(bookstore, title);
            }else if (choice == displayInventoryMenu){
                displayInventory(bookstore);
            }
        } while (choice != exitMenu);
    }
}
