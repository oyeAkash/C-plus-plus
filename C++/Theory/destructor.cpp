#include <iostream>
using namespace std;

int i=0;

class xyz
{
public:
    xyz()
    {
        i++;
        cout << i << "st object created" << endl;
    }
    ~xyz()     //---->>  DESTRUCTOR DECLARATION
    {
        cout << i << "st object destroyed" << endl;
        i--;
    }
};

int main(void)
{
    cout << "Main Block" << endl;
    xyz obj1;
    {
        //---   in this block compiler will automatically call DESTRUCTOR
        cout << "Block 1" << endl; 
        xyz obj2, obj3;                 
        cout << "Exiting Block 1" << endl;
    }
    cout << "Exiting Main Block" << endl;
    cout<<"aer";
    return 0;
}