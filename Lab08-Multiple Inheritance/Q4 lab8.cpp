#include <iostream>
using namespace std;
class Media {
protected:
    string title;
public:
    Media(string t) {
        title = t;
    }
    void borrow() {
        cout << title << " has been borrowed.\n";
    }
    void returnItem() {
        cout << title << " has been returned.\n";
    }
    void display() {
        cout << "Title: " << title << endl;
    }
};
class BookInfo {
protected:
    string author;
public:
    BookInfo(string a) {
        author = a;
    }
};

class MagazineInfo {
protected:
    int issueNumber;
public:
    MagazineInfo(int i) {
        issueNumber = i;
    }
};
class DVDInfo {
protected:
    string director;
public:
    DVDInfo(string d) {
        director = d;
    }
};
class Book : public Media, public BookInfo {
public:
    Book(string t, string a) : Media(t), BookInfo(a) {}
    void display() {
        Media::display();
        cout << "Author: " << author << endl;
    }
};
class Magazine : public Media, public MagazineInfo {
public:
    Magazine(string t, int i) : Media(t), MagazineInfo(i) {}
    void display() {
        Media::display();
        cout << "Issue Number: " << issueNumber << endl;
    }
};
class DVD : public Media, public DVDInfo {
public:
    DVD(string t, string d) : Media(t), DVDInfo(d) {}
    void display() {
        Media::display();
        cout << "Director: " << director << endl;
    }
};
int main() {
    Book b("C++ Programming", "Bjarne Stroustrup");
    Magazine m("Tech Monthly", 42);
    DVD d("Inception", "Christopher Nolan");

    cout << "\n--- Book ---\n";
    b.display();
    b.borrow();
    b.returnItem();

    cout << "\n--- Magazine ---\n";
    m.display();
    m.borrow();
    m.returnItem();

    cout << "\n--- DVD ---\n";
    d.display();
    d.borrow();
    d.returnItem();

    return 0;
}
