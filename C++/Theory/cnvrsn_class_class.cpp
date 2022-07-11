#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, width;
    float area;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
        area = length * width;
    }
    void print()
    {
        cout << "Length= " << length << endl
             << "Width= " << width << endl
             << "Area of Rectangle= " << area << endl;
    }
};
class Triangle
{
private:
    int base, height;
    float area;

public:
    Triangle(int b, int h)
    {
        base = b;
        height = h;
        area = 0.5 * (base * height);
    }
    void print()
    {
        cout << "Base= " << base << endl
             << "Height= " << height << endl
             << "Area of Triangle= " << area << endl;
    }
    operator Rectangle()
    {
        Rectangle temp(base, height);
        return temp;
    }
};

int main()
{
    Triangle t(10, 20);
    t.print();
    Rectangle r = t;
    r.print();
    return 0;
}