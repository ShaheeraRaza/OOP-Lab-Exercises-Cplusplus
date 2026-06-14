#include <iostream>
#include <string>
using namespace std;
class bookType {
private:
    string title;
    string authors[4];
    int authorCount;
    string publisher;
    string ISBN;
    double price;
    int copiesInStock;
public:
    // Default Constructor
    bookType() {
        title = "";
        publisher = "";
        ISBN = "";
        price = 0.0;
        copiesInStock = 0;
        authorCount = 0;
    }
    // Parameterized Constructor
    bookType(string t, string a[], int ac, string p, string isbn, double pr, int c) {
        title = t;
        authorCount = ac;
        for (int i = 0; i < ac && i < 4; i++)
            authors[i] = a[i];
        publisher = p;
        ISBN = isbn;
        price = pr;
        copiesInStock = c;
    }
    // Destructor
    ~bookType() {}
    // ----- Title Operations -----
    void setTitle(string t) { title = t; }
    string getTitle() const { return title; }
    bool checkTitle(string t) const { return title == t; }
    // ----- Author Operations -----
    void addAuthor(string a) {
        if (authorCount < 4) {
            authors[authorCount++] = a;
        }
    }
    void showAuthors() const {
        for (int i = 0; i < authorCount; i++)
            cout << authors[i] << ", ";
        cout << endl;
    }
    // ----- Publisher Operations -----
    void setPublisher(string p) { publisher = p; }
    string getPublisher() const { return publisher; }
    // ----- ISBN Operations -----
    void setISBN(string isbn) { ISBN = isbn; }
    string getISBN() const { return ISBN; }
    bool checkISBN(string isbn) const { return ISBN == isbn; }
    // ----- Price Operations -----
    void setPrice(double pr) { price = pr; }
    double getPrice() const { return price; }
    // ----- Copies in Stock Operations -----
    void setCopies(int c) { copiesInStock = c; }
    int getCopies() const { return copiesInStock; }
    void updateCopies(int c) { copiesInStock += c; }
    // ----- Display Book Info -----
    void display() const {
        cout << "\nTitle: " << title << endl;
        cout << "Authors: ";
        showAuthors();
        cout << "Publisher: " << publisher << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Price: " << price << endl;
        cout << "Copies in Stock: " << copiesInStock << endl;
    }
};
int main() {
    bookType library[100];
    int count = 0;
    // Adding sample books
    string authors1[] = {"Author A", "Author B"};
    library[count++] = bookType("C++ Basics", authors1, 2, "ABC Publisher", "1111", 500, 10);
    string authors2[] = {"Author X"};
    library[count++] = bookType("Data Structures", authors2, 1, "XYZ Publisher", "2222", 700, 5);
    // ----- Search by Title -----
    string searchTitle = "C++ Basics";
    for (int i = 0; i < count; i++) {
        if (library[i].checkTitle(searchTitle)) {
            cout << "\nBook found by Title:";
            library[i].display();
        }
    }
    // ----- Search by ISBN -----
    string searchISBN = "2222";
    for (int i = 0; i < count; i++) {
        if (library[i].checkISBN(searchISBN)) {
            cout << "\nBook found by ISBN:";
            library[i].display();
        }
    }
    // ----- Update Copies -----
    for (int i = 0; i < count; i++) {
        if (library[i].checkISBN("1111")) {
            library[i].updateCopies(5);
            cout << "\nAfter Updating Copies:";
            library[i].display();
        }
    }
    return 0;
}

