#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        Book(string atitle, string aauthor, int apages) {
            title = atitle;
            author = aauthor;
            pages = apages;
        }
};



int main() {
    
    // Book book1("Harry Potter");
    // book1.title = "Harry Potter";
    // book1.author = "prakhar";
    // book1.pages = 500;

    Book book1("Harry Potter", "Prakhar", 500);

    cout << book1.title;

    return 0;
}