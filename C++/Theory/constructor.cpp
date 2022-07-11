#include <iostream>
using namespace std;

//  *************DEFAULT:

/* class Point
{
private:
    int x, y;

public:
    // Parameterized Constructor
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

int main()
{
    // Constructor called
    Point p1(10, 15);

    // Access values assigned by constructor
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();

    return 0;
} */

// ********Parameterized constructor:

/* class point
{
private:
  double x, y;
 
public:
   
  // Non-default Constructor &
  // default Constructor
  point (double px, double py)
  {
    x = px, y = py;
  }
};
 
int main(void)
{
 
  // Define an array of size
  // 10 & of type point
  // This line will cause error
  point a[10];
 
  // Remove above line and program
  // will compile without error
  point b = point(5, 6);
} */