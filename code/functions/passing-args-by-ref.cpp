#include <iostream>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    int pages;
};

void updatePages(Book& book, int newPages);

int main() {
    
    Book book1 = {"C++ Programming", "John Doe", 500};
    cout << "Initial Details:\nTitle: " << book1.title << ", Author: " << book1.author << ", Pages: " << book1.pages << endl;

    updatePages(book1, 600);
    cout << "Updated Details:\nTitle: " << book1.title << ", Author: " << book1.author << ", Pages: " << book1.pages << endl;

    return 0;
}

void updatePages(Book& book, int newPages) {
    book.pages = newPages;
}
