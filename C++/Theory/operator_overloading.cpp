#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << endl
             << "Complex Number is: " << a << " + " << b << "i" << endl;
    }
    Complex addComplex(Complex c2)
    {
        Complex temp;
        temp.a = a + c2.a;
        temp.b = b + c2.b;
        return temp;
    }
    Complex operator+(Complex c2)
    {
        Complex temp;
        temp.a = a + c2.a;
        temp.b = b + c2.b;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c2.setData(2, 3);

    c3 = c1.addComplex(c2); // 1st method
    c3.showData();

    c3 = c1.operator+(c2); // 2nd method
    c3.showData();
    
    c3 = c1 + c2; // 3rd method
    c3.showData();

    return 0;
}