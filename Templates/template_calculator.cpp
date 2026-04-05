#include <iostream>
using namespace std;

template <typename T>
class Calculator 
{
    private:
    T num1, num2;

    public:
    Calculator (T n1, T n2) : num1 (n1), num2 (n2) 
    {
        cout << "Calculator constructor called" << endl;
    }

    T add () 
    { 
        return num1 + num2; 
    }
    T subtract () 
    { 
        return num1 - num2; 
    }
    T multiply () 
    { 
        return num1 * num2; 
    }
    T divide () 
    {
        if (num2 == 0) 
        {
            cout << "Error! Division by zero" << endl;
            return 0;
        }
        else
        {
            return num1 / num2;
        }
    }

    void showResults () 
    {
        cout << "Results for " << num1 << " and " << num2 << ":" << endl;
        cout << "Sum: " << add () << endl;
        cout << "Difference: " << subtract () << endl;
        cout << "Product: " << multiply () << endl;
        cout << "Quotient: " << divide () << endl << endl;
    }
};

int main () 
{
    Calculator <int> intCalc (8, 4);
    cout << "Integer Calculations:" << endl;
    intCalc.showResults ();

    Calculator <double> doubleCalc (9.5, 2.5);
    cout << "Double Calculations:" << endl;
    doubleCalc.showResults ();

    return 0;
}
