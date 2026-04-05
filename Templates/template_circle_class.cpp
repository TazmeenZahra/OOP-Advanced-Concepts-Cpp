#include <iostream>
#include <cmath> 

using namespace std;

template <typename T>
class Circle 
{
    private:
    T radius;

    public:
    Circle (T r) : radius (r) {}

    double getArea () const 
    {
        return M_PI * radius * radius;
    }

    double getCircumference () const 
    {
        return 2 * M_PI * radius;
    }

    void display () const 
    {
        cout << "Circle with " << (is_integral<T>::value ? "int" : "double") << " radius " << radius << ":" << endl;
        cout << "  Area: " << getArea () << endl;
        cout << "  Circumference: " << getCircumference () << endl;
        cout << endl;
    }
};

int main () 
{
    Circle<int> circle1 (5);
    circle1.display ();

    Circle<double> circle2 (5.5);
    circle2.display ();

    return 0;
}
