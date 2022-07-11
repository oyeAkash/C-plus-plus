#include <iostream>
using namespace std;

//----------------------------FLOAT, DOUBLE & LONG DOUBLE literals---------------------
int main()
{
    float a=4.5;
    float b=4.5f;
    double c=4.5;
    double d=4.5l;
    long double e = 4.5;
    long double f = 4.5l;
    cout<<"size of a "<<sizeof(4.5)<<endl;
    cout<<"size of b "<<sizeof(4.5f)<<endl;
    cout<<"size of c "<<sizeof(4.5F)<<endl;
    cout<<"size of d "<<sizeof(4.5l)<<endl;
    cout<<"size of e "<<sizeof(4.5L)<<endl;
    return 0;
}