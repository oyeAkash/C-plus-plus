// Here are some rule ---->>>
// 1- Base Class pointer can point any Derived Class object.
// 2- Derived Class Pointer can't point Base Class Object
#include <iostream>
using namespace std;
class Base
{
public:
    int x = 0;
    void display()
    {
        cout << "Base class called x= " << x << endl;
    }
};
class Derived : public Base
{
public:
    int y = 0;
    void display()
    {
        cout << "Derived class called x= " << y << endl;
    }
};

int main()
{
    Base base_obj, *base_ptr;
    Derived derived_obj, *derived_ptr;

    base_ptr = &derived_obj; //   Base Class Pointer --> Derived Class Object
    base_ptr->display();     //  base class display() will be called

    base_ptr->x = 12;
    // base_ptr->y=12;     // can't acces will throw ERROR
    base_ptr->display();
    // derived_ptr = &base_obj;       //   Derived Class Pointer --> Base Class Object
                                    // throw ERROR
    derived_ptr = &derived_obj;
    derived_ptr->x = 13;
    base_ptr->display();
    derived_ptr->display();
    
    return 0;
}
