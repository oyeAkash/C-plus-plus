// Copy in classes will be followed by 2 methods
//     1-  Calling copy constructor
//     2-  assignment operator overloading
#include <iostream>
using namespace std;

class dummy
{
private:
    int a, b;
    

public:
    void setData(int x, int y)
    {   a = x; b = y;    }
    void showData()
    {   cout << "a = " << a << "\nb = " << b << endl;   }
    // dummy(dummy &d)  // not compulsory to impliment this copy constructor
    // {   a = d.a; b = d.b;   }   // compiler will automatically generate this copy constructor
};
void shallow_copy()
{
    dummy d1;
    d1.setData(3,4);
    // dummy d2 = d1; //here Copy constructor will be called
    dummy d2;   // line 22 & 23 will work together
    d2 = d1;    //here by default assignment operator will overloaded
    d2.showData();
}


class dummy1
{
private:
    int a, b, *ptr;
public:
    void setData(int x, int y, int z)
    {   a = x; b = y; *ptr = z;    }
    void showData()
    {   cout << "a = " << a << "\nb = " << b << endl;   }
    // dummy1(){}
    dummy1(dummy1 &d)
    { 
        a = d.a;
        b = d.b;   
        ptr = new int;
        *ptr = *(d.ptr);
    }   
};
void deep_copy()
{
    dummy1 d1;
    d1.setData(3,4,5);
    // dummy1 d2 = d1;
    dummy1 d2;
    d2 = d1;
    d2.showData();
}
int main()
{
    cout << "SHALLOW COPY" << endl;
    shallow_copy();
    cout << "DEEP COPY" << endl;
    deep_copy();
    return 0;
}