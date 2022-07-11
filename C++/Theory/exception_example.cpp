#include <iostream>
#include <exception>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    try
    {
        if(b==0)
            throw "b can't be equal to 0.";

        c = a/b; 

    }
    catch(const char *c)
    {
        cout << "Exception occured: " << c;
    }
}