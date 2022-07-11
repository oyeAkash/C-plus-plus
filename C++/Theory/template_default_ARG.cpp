#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>

class Akash
{
    public:
        T1 a;
        T2 b; 
        T3 c;
        Akash(T1 x, T2 y, T3 z)
        {
            a=x;
            b=y;
            c=z;
        }
        void display()
        {
            cout <<"a = "<< a <<endl
                 <<"b = "<< b << endl
                 <<"c = "<< c << endl << endl;
        }
};

int main()
{
    Akash <> ak(4, 6.4, 'A');   // leave '<>' empty for default3 
    ak.display();
    Akash <float, char, int> aka(2.4, 'a', 24); // the type of variable here we are using is different from the template initialisation type of variable
    aka.display();
    return 0;
}