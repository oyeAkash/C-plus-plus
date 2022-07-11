#include <iostream>
#include <exception>
using namespace std;

int main()
{
    int a=4, b = 0, c;
    try
    {
        if(b == 0)
            throw runtime_error("b can't be 0.");
        
        c = (a/b);
        cout << c << endl;
    }
    catch(runtime_error &e)
    {
        cout << "Error occured: " << endl;
        cout << *e.what();
    }
}