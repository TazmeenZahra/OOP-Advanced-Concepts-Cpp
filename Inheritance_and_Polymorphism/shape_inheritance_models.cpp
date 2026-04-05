#include <iostream>
using namespace std;

class Shape
{
protected:
    string name;

public:
    Shape(string n)
    {
        name = n;
    }
    virtual void area() {}
    virtual void volume() {}
    virtual ~Shape() {}
};
class Two_D_shape : public Shape
{
public:
    Two_D_shape(string n) : Shape(n) {}
    void area() override
    {
        cout << "2_d shapes has area\n";
    }
};
class Three_D_shape : public Shape
{
public:
    Three_D_shape(string n) : Shape(n) {}
    void volume() override
    {
        cout << "3_d shapes has volume\n";
    }
};
class Triangle : public Two_D_shape
{
    double base, height;

public:
    Triangle(double b, double h) : Two_D_shape("Triangle")
    {
        base = b;
        height = h;
    }
    void area()
    {
        cout << name << " Area: " << 0.5 * base * height << endl;
    }
};
class Circle : public Two_D_shape
{
    double radius;

public:
    Circle(double r) : Two_D_shape("Circle")
    {
        radius = r;
    }
    void area()
    {
        cout << name << " Area: " << 3.1416 * radius * radius << endl;
    }
};
class Rectangle : public Two_D_shape
{
    double length, width;

public:
    Rectangle(double l, double w) : Two_D_shape("Rectangle")
    {
        length = l;
        width = w;
    }
    void area()
    {
        cout << name << " Area: " << length * width << endl;
    }
};
class Square : public Two_D_shape
{
    double side;

public:
    Square(double s) : Two_D_shape("Square")
    {
        side = s;
    }
    void area()
    {
        cout << name << " Area: " << side * side << endl;
    }
};
class Sphere : public Three_D_shape
{
    double radius;

public:
    Sphere(double r) : Three_D_shape("Sphere")
    {
        radius = r;
    }
    void volume()
    {
        double r3 = radius * radius * radius;
        cout << name << " Volume: " << (4.0 / 3) * 3.1416 * r3 << endl;
    }
};
class Cylinder : public Three_D_shape
{
    double radius, height;

public:
    Cylinder(double r, double h) : Three_D_shape("Cylinder")
    {
        radius = r;
        height = h;
    }
    void volume()
    {
        cout << name << " Volume: " << 3.1416 * radius * radius * height << endl;
    }
};
int main()
{
    Triangle t(12, 3);
    Rectangle r(8, 2);
    Square s(8);
    Circle c(9.5);
    Sphere sp(7);
    Cylinder cy(4, 7);

    t.area();
    r.area();
    s.area();
    c.area();

    sp.volume();
    cy.volume();
    return 0;
}
