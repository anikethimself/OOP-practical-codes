#include <iostream>
#include <string>
using namespace std;

class Publication {
protected:
    string title;
    float price;

public:
    void inputDetails() {
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
        cin.ignore(); 
    }

    void displayDetails() const {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};
class Book : public Publication {
private:
    int pageCount;

public:
    void inputDetails() {
        Publication::inputDetails(); 
        cout << "Enter number of pages: ";
        cin >> pageCount;
        cin.ignore(); 
    }

    void displayDetails() const {
        Publication::displayDetails(); 
        cout << "Number of Pages: " << pageCount << endl;
    }
};

class Tape : public Publication {
private:
    float playTime;

public:
    void inputDetails() {
        Publication::inputDetails();
        cout << "Enter play time (in minutes): ";
        cin >> playTime;
        cin.ignore(); 
    }

    void displayDetails() const {
        Publication::displayDetails(); 
        cout << "Play Time: " << playTime << " minutes" << endl;
    }
};
int main() {
    Book book;
    Tape tape;

    cout << "Enter details for the book:" << endl;
    book.inputDetails();
    cout << "\nBook Details:" << endl;
    book.displayDetails();

    cout << "\nEnter details for the tape:" << endl;
    tape.inputDetails();
    cout << "\nTape Details:" << endl;
    tape.displayDetails();
    return 0;
}
