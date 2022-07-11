#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    // ---------------------setw(enter_integer_value)------------
    //  <iomanip>
    /* int i= 1;
    cout<<setw(10)<<i<<endl;
    cout<<setw(5);
    cout<<i<<endl; */

    //----------------------setprecision(enter_any_digit)-----------
    /* double f= 3.14159;
    cout << setprecision(5) << f << '\n';
    cout << setprecision(3) << f << '\n'; */

    // ---------------------setbase(), hex, oct, dec------------
    double f= 70;
    cout << setbase(8) << 70 << '\n';
    cout << setbase(10) << 70 << '\n';
    return 0;
}
