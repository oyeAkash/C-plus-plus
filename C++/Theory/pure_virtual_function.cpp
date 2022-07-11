// Sometimes implementation of all function can't be provided in base class because we don'tknow the implementation. Such a class is called abstract class.
// NOTE---
//  1- A class is abstract if it has at least one pure virtual functoin.
//  2- We can have pointer and references of abstract class type.
//  3- If we don't override the pure virtual functon in derived class, then derived class
//     also becomes abstract class.
//  4- An abstract class can have constructor.

#include <iostream>
using namespace std; 

class Base
{
public:
    virtual void fun() = 0;
};

class Derived : public Base
{
public:
    void fun()
    {
        cout << "fun() is called" << endl;
    }
};

int main(void)
{
    Base *ptr = new Derived();
    ptr->fun();
    return 0;
}