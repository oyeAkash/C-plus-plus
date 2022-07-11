#include <iostream>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "calss A is printing" << endl;
    }
};
class B
{
public:
    void print()
    {
        cout << "calss B is printing" << endl;
    }
};
class AB : public A, public B
{
public:
    void print()
    {
        cout << "calss AB is printing" << endl;
        A::print();     // if we'll not declare this syntax then
        B::print();     // only class AB's 'print' function will called
    }
};

int main()
{
    AB obj;
    obj.print();
    return 0;
}