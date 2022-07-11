// C++ program to illustrate the
// above conversion
#include <bits/stdc++.h>
using namespace std;

// Tie Class
class Time
{
    int hrs, mins;

public:
    // Constructor that assigns values to the member variables of the class
    Time(int a, int b)
    {
        hrs = a;
        mins = b;
    }

    // int() operator is used for Data conversion of class to primitive
    operator int() // Casting operator
    {
        cout << "Conversion of Class"
             << " Type to Primitive Type" << endl;
        return (hrs * 60 + mins);
    }

    ~Time()
    {
        cout << "Destructor is called."
             << endl;
    }
};

void TypeConversion(int hour, int mins)
{
    int duration;

    // Create Time Class object
    Time t(hour, mins);

    // Conversion OR duration = (int)t
    duration = t; // this line actually means -->> duration = t.operator int();
    cout << "Total Minutes are "
         << duration << endl;

    // Conversion from Class type to Primitive type
    cout << "2nd method operator"
         << " overloading " << endl;

    duration = t.operator int();

    cout << "Total Minutes are "
         << duration << endl;

    return;
}

int main()
{
    int hour, mins;
    hour = 2;
    mins = 20;
    TypeConversion(hour, mins);
    return 0;
}
