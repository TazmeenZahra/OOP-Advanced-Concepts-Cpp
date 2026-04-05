#include <iostream>
using namespace std;

class Employee
{
    public:
    int baseSalary;
    virtual void calculateSalary ()
    {
        cout << "Base salary cannot be determined" << endl;
    }
};
class Manager : public Employee
{
    public:
    int bonus;
    void calculateSalary ()
    {
        cout << "Enter Manager Salary: "; cin >> baseSalary;
        cout << "Enter bonus: "; cin >> bonus;

        cout << "Total Manager Salary: " << baseSalary + bonus << endl;
    }
};
class Engineer : public Employee
{
    public:
    int overtimePay;
    void calculateSalary ()
    {
        cout << "Enter Engineer Salary: "; cin >> baseSalary;
        cout << "Enter overtime pay: "; cin >> overtimePay;

        cout << "Total Engineer Salary: " << baseSalary + overtimePay << endl;
    }
};

int main ()
{
    Employee *obj1 =  new Manager ();
    Employee *obj2 = new Engineer ();

    obj1->calculateSalary ();
    obj2->calculateSalary ();
    return 0;
}
