#include<iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    // constructor: initialize the object with real & imaginary value
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // operator overloading
    Complex operator + (Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }
};


int main() {
    Complex c1(2,3), c2(4,5);
    Complex c3 = c1 + c2;

    cout << c3.real << " + " << c3.imag << "i";

    return 0;
}