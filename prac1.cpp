#include <iostream>
using namespace std;

class Complex {
public:
    double real;
    double imag;

    Complex() : real(0), imag(0) {}

    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(const Complex &other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator*(const Complex &other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
                       
    }

    void getData(double r, double i) {
        real = r;
        imag = i;
    }

    void display() const {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }
};

int main() {
    Complex c1, c2;
    c1.getData(3, 4);
    c2.getData(1, 2); 

    Complex sum = c1 + c2;
    Complex mul = c1 * c2;

    cout << "First Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum: ";
    sum.display();
    cout << "Product: ";
    mul.display();

    return 0;
}
