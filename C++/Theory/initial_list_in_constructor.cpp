#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(j*i)
    // Test(int i, int j) :  b(j),a(i+b)       //---> here 'a' will show garbeg velues because we have declared 1st 'a' and then 'b'. So 1stly 'a' will be initialize
    {
        cout << "Constructor Executed" << endl
             << "Value of 'a' is: " << a << endl
             << "Value of 'b' is: " << b << endl;
    } 
};

int main()
{
    Test obj(2, 3);
    return 0;
}