#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return (a + b);
}

int sum(int a, int b, int c)
{
    return (a + b + c);
}

int main()
{
    cout << "The sum of 3 & 6 is :" << sum(3, 6) << endl;       /* as you can see here we can call the function by giving 2 values*/
    cout << "The sum of 3, 6 & 7 is :" << sum(3, 6, 7) << endl; /* as you can see here we can call the function by giving 3 values*/

    return 0;
}