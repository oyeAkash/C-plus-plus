#include<iostream>
using namespace std;

class complex
{
    private:
    int a, b;
    public:
    complex()       /* default constructor */
    {
        a=b=0;
    }
    complex(int x)   /* single parameterized constructor */
    {
        a=x;
        b=0;
    }
    complex(int x, int y)       /* double parameterized constructor */
    {
        a=x;
        b=y;
    }
    void print()
    {
        cout<<"Your complex number is "<<a<<" + "<<b<<"i "<<endl;
    }
};
int main()
{
    complex c1;
    c1.print();

    complex c2(1);
    c2.print();
    
    complex c3(1,2);
    c3.print();

    return 0;
}