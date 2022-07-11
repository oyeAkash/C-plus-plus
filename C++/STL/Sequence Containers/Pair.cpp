// declaration-->>      pair < type_1, type_2 > pair_object_name;
// implimentation-->>   pair_object_name(1st member, 2nd member);
// accessing members-->> 1st--pair_object_name.first 
//                       2nd--pair_object_name.second 

#include <iostream>
#include <utility>
#include <string>
using namespace std;

class Student
{
private:
    int age;
    string name;

public:
    void setStudent(string s, int a)
    {
        name = s;
        age = a;
    }
    void showStudent()
    {
        cout << "Name: " << name << endl
             << "\t  Age: " << age << endl;
    }
};

int main()
{
    pair<string, int> p1;           //  
    pair<string, string> p2;        //  declaration of pair
    pair<string, float> p3;         //
    pair<int, Student> p4;          //

    p1 = make_pair("akash ", 22);                   //
    p2 = make_pair("sultanput, ", "uttar-pradesh"); //
    p3 = make_pair("version ", 2.05f);              //    implimentation
    Student s1;                                     //
    s1.setStudent("nobita ", 22);                   //
    p4 = make_pair(1, s1);                          //

    cout << "Pair 1: " << p1.first << p1.second << endl;    //
    cout << "Pair 2: " << p2.first << p2.second << endl;    //  accessing members
    cout << "Pair 3: " << p3.first << p3.second << endl;    //
    cout << "Pair 4: " << p4.first << " ";                  //
    Student s2 = p4.second;                                 
    s2.showStudent();
    return 0;
}