#include <iostream>
using namespace std;
class Staff
{
    public:
    int staffID;
    
    Staff ()
    {
        cout << "default staff constructor" << endl;
    }
    Staff (int s)
    {
        staffID = s;
        cout << "parameterized staff constructor" << endl;
    }
    int getstaffID ()
    {
        cout << "get staffID: ";
        return staffID;
    }
};
class Professor : public Staff
{
    public:
    int departmentID;
    string departmentName;

    Professor ()
    {
        cout << "default professor constructor" << endl;
    }
    Professor (int d_id, string d_N, int st) : Staff (st)
    {
        departmentID = d_id;
        departmentName = d_N;
        staffID = st;
        cout << "parameterized professor constructor" << endl;
    }
    int getid ()
    {
        cout << "get department ID: ";
        return departmentID;
    }
    string getname ()
    {
        cout << "get department name: ";
        return departmentName;
    }
};
class VisitingProfessor : public Professor
{
    public:
    int no_of_courses;
    int salary_per_course;

    VisitingProfessor ()
    {
        cout << "default visiting professor constructor" << endl;
    }
    VisitingProfessor (int n, int sp)
    {
        no_of_courses = n;
        salary_per_course = sp;
        cout << "parameterized visiting professor constructor" << endl;
    }
    int totalSalary () 
    {
        cout << "Total payment for all courses: " << no_of_courses * salary_per_course << endl;
        return no_of_courses * salary_per_course;
    }
    void display ()
    {
        cout << "Total Salary of Visiting Professor: " << no_of_courses * salary_per_course << endl;
    }
};

int main ()
{
    Staff s1 (101);
    cout << s1.getstaffID () << endl;

    Professor p1 (1005, "Bilal", 102);
    cout << p1.getid () << endl;
    cout << p1.getname () << endl;

    VisitingProfessor vp1 (6, 25000);
    vp1.totalSalary ();
    vp1.display ();

    return 0;
}
