#include <iostream>
using namespace std;
class Rectangle
{
    int length;
    int width;
    public:
    Rectangle ()
    {
        length = 1;
        width = 1;
    }
    int area ()
    {
        int area_of_rectangle = length * width;
        cout << "Area of Rectangle (no parameter version): " << area_of_rectangle << endl;
        return area_of_rectangle;
    }

    void set (int l, int w)
    {
        length = l;
        width = w;
    }
    int area (int l, int w)
    {
        int area_rectangle = l * w;
        cout << "Area of Rectangle (parameter version): " << area_rectangle << endl;
        return area_rectangle;
    }

    bool operator== (const Rectangle& r) const
    {
        return (length == r.length && width == r.width);
    }
};

int main ()
{
    Rectangle r1, r2;
    r2.set (20, 12);

    int area1 = r1.area ();
    int area2 = r2.area (20, 12);

    if (area1 == area2)
    {
        cout << "Area of both rectangles are same." << endl;
        return true;
    }
    else
    {
        cout << "Area of both rectangles are different." << endl;
        return false;
    }
    return 0;
}
