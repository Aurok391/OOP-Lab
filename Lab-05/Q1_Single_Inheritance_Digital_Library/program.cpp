#include <iostream>
#include <string>
using namespace std;

class Catalog {
protected:
    void formatListing(const string& type, const string& title) {
        cout << type << ": " << title << endl;
    }
};

class PhysicalBook : public Catalog {
    string title;
public:
    PhysicalBook(string t) : title(t) {}
    void display() { formatListing("Physical Book", title); }
};

class EBook : public Catalog {
    string title;
public:
    EBook(string t) : title(t) {}
    void display() { formatListing("E-Book", title); }
};

int main() {
    PhysicalBook book("The C++ Programming Language");
    EBook ebook("Object-Oriented Programming");
    cout << "Digital Library Catalog\n";
    book.display();
    ebook.display();
    return 0;
}
