#include <iostream>
#include <string>
using namespace std;

template <typename T>
T findMax (T a, T b) 
{
    return (a > b) ? a : b;
}

int main () 
{
    int num1 = 3;
    int num2 = 7;
    cout << "Max of " << num1 << " and " << num2 << " is: " << findMax (num1, num2) << endl;

    double d_num1 = 4.5;
    double d_num2 = 2.3;
    cout << "Max of " << d_num1 << " and " << d_num2 << " is: " << findMax (d_num1, d_num2) << endl;

    string str1 = "apple";
    string str2 = "banana";
    cout << "Max of \"" << str1 << "\" and \"" << str2 << "\" is: " << findMax (str1, str2) << endl;

    return 0;
}
