#include <iostream>
using namespace std;

// class 'TEMPLATE'
template <class T>
class akash
{
public:
    T a;
    akash(T a)
    {
        this->a = a;
    }
    void print();
};

// member function 'TEMPLATE'
template <class T>
void akash<T>::print()
{
    cout << a << endl;
}

int main()
{
    akash<int> obj(34);
    cout << obj.a << endl;
    obj.print();
}