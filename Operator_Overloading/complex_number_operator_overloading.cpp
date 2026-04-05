#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imaginary;

    public:
    void set (int r, int i)
    {
        real = r;
        imaginary = i;
    }

    Complex operator* (const Complex& c)
    {
        Complex temp1;
        temp1.real = this->real * c.real; // ac
        temp1.imaginary = this->imaginary * c.imaginary; // bd

        Complex temp2;
        temp2.real = this->real * c.imaginary; // ad
        temp2.imaginary = this->imaginary * c.real; // bc

        
        cout << "(" << temp1.real << " - " << temp1.imaginary << ") + (" <<  temp2.real << " + " << temp2.imaginary << ")i" << endl;

        return c;
    }

    void display()
    {
        cout << real << " + " << imaginary << "i" << endl; 
    }
};
int main ()
{
    Complex c1, c2;
    c1.set (1, 3);
    c2.set (2, 5);

    cout << "Complex Number 1: "; c1.display(); cout << endl;
    cout << "Complex Number 2: "; c2.display(); cout << endl;

    cout << "Formula: "; c1 * c2;
    return 0;
}
