#include <iostream>
using namespace std;

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y;
    cout << "Enter the value of 'x' & 'y'"<< endl;
    cin >> x >> y;
    swapp(x, y);
    cout << "x = " << x << endl
         << "y = " << y;
    return 0;
}