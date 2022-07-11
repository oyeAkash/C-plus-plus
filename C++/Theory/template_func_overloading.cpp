#include <iostream>
using namespace std;

void func(int a)
{
    cout << "i'm function of name func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "i'm function of name func() " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "i'm function of name func1() " << a << endl;
}

int main()
{
    func(12);   //  exact match of type has more priority it means normal function will be called firstly
    func<int>(21);
    func<float>(2.1);
    func1<float>(1.2);
    return 0;
}