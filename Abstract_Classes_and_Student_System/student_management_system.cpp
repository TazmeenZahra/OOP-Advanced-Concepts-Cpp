#include <iostream>
using namespace std;

class Student 
{
protected:
    string name;
    string id;
    int age;
    
public:
    Student (string n, string i, int a) : name(n), id(i), age(a) {}
    
    virtual void display () = 0;
    virtual float calculateGPA () = 0;
    
    virtual ~Student () {}
};

class UndergraduateStudent : public Student 
{
private:
    float u_grades [5];
    int u_numCourses;
    
public:
    UndergraduateStudent (string n, string i, int a, float u_g[], int u_num) 
        : Student (n, i, a), u_numCourses (u_num) 
    {
        for (int i = 0; i < u_num; i ++) 
        {
            u_grades [i] = u_g [i];
        }
    }
    
    float calculateGPA () override 
    {
        if (u_numCourses == 0) 
        {
            return 0.0f;
        }
        float total = 0.0f;
        for (int i = 0; i < u_numCourses; i ++) 
        {
            total += u_grades [i] / 25.0f;
        }
        return total / u_numCourses;
    }
    
    void display () override 
    {
        cout << "Undergraduate Student:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << calculateGPA () << endl;
        cout << endl;
    }
};

class GraduateStudent : public Student 
{
private:
    float g_grades [5];
    int g_numCourses;
    
public:
    GraduateStudent (string n, string i, int a, float g_g [], int g_num) 
        : Student (n, i, a), g_numCourses (g_num) 
    {
        for (int i = 0; i < g_num; i ++) 
        {
            g_grades [i] = g_g [i];
        }
    }
    
    float calculateGPA () override 
    {
        if (g_numCourses == 0) 
        {
            return 0.0f;
        }
        float total = 0.0f;
        for (int i = 0; i < g_numCourses; i ++) 
        {
            if (g_grades [i] >= 90) 
            {
                total += 4.0f;
            }
            else if (g_grades [i] >= 80) 
            {
                total += 3.0f;
            }
            else if (g_grades [i] >= 70) 
            {
                total += 2.0f;
            }
            else if (g_grades [i] >= 60) 
            {
                total += 1.0f;
            }
        }
        return total / g_numCourses;
    }
    
    void display () override 
    {
        cout << "Graduate Student:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << calculateGPA () << endl;
        cout << endl;
    }
};

int main () 
{
    float undergradGrades [] = {85, 90, 78, 92, 88};
    UndergraduateStudent undergrad ("Tazmeen Zahra", "U123", 20, undergradGrades, 5);
    
    float gradGrades [] = {92, 88, 95, 84, 90};
    GraduateStudent grad ("Khirad Fatima", "G456", 25, gradGrades, 5);
    
    Student* students [2];
    students [0] = &undergrad;
    students [1] = &grad;
    
    for (int i = 0; i < 2; i ++) 
    {
        students [i]->display ();
    }
    return 0;
}
