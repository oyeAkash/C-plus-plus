// C++ program to illustrate the type-conversion
#include <bits/stdc++.h>
using namespace std;

class Time
{
    int hour;
    int mins;

public:
    // Default Constructor
    Time(){}
    Time(int t):hour(0), mins(0)
    {
        hour = t / 60;
        mins = t % 60;
    }
    void Display()
    {
        cout << "Time = " << hour
             << " hrs and "
             << mins << " mins\n";
    }
};

int main()
{
    Time T1;
    int dur = 90;

    // Conversion of int type to class type
    T1 = dur;
    T1.Display();
    return 0;
}
