#include <iostream>
using namespace std;

// Single Inheritance
/* class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};

class Car : public Vehicle
{
public:
    Car()
    {
        cout << "This is a car" << endl;
    }
};

int main()
{
    // creating object of sub class will
    // invoke the constructor of base classes
    Car obj;
    return 0;
} */

// Multilevel Inheritance
/* class Vehicle
{
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};

// first sub_class derived from class vehicle
class fourWheeler: public Vehicle
{  public:
    fourWheeler()
    {
      cout<<"Objects with 4 wheels are vehicles"<<endl;
    }
};
// sub class derived from the derived base class fourWheeler
class Car: public fourWheeler{
   public:
     Car()
     {
       cout<<"Car has 4 Wheels"<<endl;
     }
};


int main()
{
    //creating object of sub class will
    //invoke the constructor of base classes
    Car obj;
    return 0;
} */

// Hierarchical Inheritance
/* class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};

// first sub class
class Car : public Vehicle
{
    public:
        Car(){
            cout<<"This is Car"<<endl;
        }
};

// second sub class
class Bus : public Vehicle
{
     public:
        Bus(){
            cout<<"This is Bus"<<endl;
        }
};

int main()
{
    // creating object of sub class will
    // invoke the constructor of base class
    Car obj1;
    Bus obj2;
    return 0;
} */

// Hybrid Inheritance
/* class vehicle
{
public:
    vehicle()
    {
        cout << "This is Vehical\n"
             << endl;
    }
};
class Car : public vehicle
{
public:
    Car()
    {
        cout << "This is a Car\n"
             << endl;
    }
};
class Bus : public vehicle
{
public:
    Bus()
    {
        cout << "This is a Bus\n"
             << endl;
    }
};
class Fare : public Car, public Bus
{
public:
    Fare()
    {
        cout << "That is Fare" << endl;
    }
};
int main()
{
    Fare obj;
    return 0;
} */

// C++ program demonstrating ambiguity in Multipath Inheritance
/* class ClassA
{
public:
    int a;
};

class ClassB : public ClassA
{
public:
    int b;
};
class ClassC : public ClassA
{
public:
    int c;
};

class ClassD : public ClassB, public ClassC
{
public:
    int d;
};

int main()
{

    ClassD obj;

    // obj.a = 10;				 //Statement 1, Error
    // obj.a = 100;				 //Statement 2, Error

    obj.ClassB::a = 10;  // Statement 3
    obj.ClassC::a = 100; // Statement 4

    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout << "\n A from Class B : " << obj.ClassB::a;
    cout << "\n A from Class C : " << obj.ClassC::a;

    cout << "\n B : " << obj.b;
    cout << "\n C : " << obj.c;
    cout << "\n D : " << obj.d;
    return 0;
} */


