#include <iostream>
#include <string>
using namespace std;

class Publication {
protected:
    string title;
    float price;

public:
    Publication() : title(""), price(0.0) {}

    virtual void getData(const string& t, float p) {
        title = t;
        price = p;
    }

    virtual void display() const {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication {
private:
    int pageCount;

public:
    Book() : pageCount(0) {}

    void getData(const string& t, float p, int pc) {
        Publication::getData(t, p);
        pageCount = pc;
    }

    void display() const override {
        Publication::display(); // Call base class method
        cout << "Page Count: " << pageCount << endl;
    }
};

class Tape : public Publication {
private:
    float playingTime;

public:
    Tape() : playingTime(0.0) {}

    void getData(const string& t, float p, float pt) {
        Publication::getData(t, p);
        playingTime = pt;
    }

    void display() const override {
        Publication::display(); // Call base class method
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};

int main() {
    try {
        Book book;
        Tape tape;

        book.getData("atomic_habit", 899, 256);
        tape.getData("lala", 499, 45);

        cout << "\nDisplaying Book Details:\n";
        book.display();

        cout << "\nDisplaying Tape Details:\n";
        tape.display();
    }
    catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
        cout << "Setting all data to zero values.\n";

        Book book;
        Tape tape;

        book.display();
        tape.display();
    }

    return 0;
}
