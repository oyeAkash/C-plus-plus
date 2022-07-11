#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int cur_idStudent = 0;
int cur_idprofessor = 0;

class Person
{
public:
    string name;
    int age;
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

class Professor : public Person
{
public:
    Professor()
    {
        id = ++cur_idprofessor;
    }
    ~Professor() {}
    int publication, id;
    void getdata()
    {
        cin >> name;
        cin >> age;
        cin >> publication;
    }
    void putdata()
    {
        cout << name << ' '
             << age << ' '
             << publication << ' '
             << id << endl;
    }
};

class Student : public Person
{
public:
    int marks[6], id;
    Student()
    {
        id = ++cur_idStudent;
    }
    ~Student() {}
    void getdata()
    {
        cin >> name;
        cin >> age;
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
    }
    void putdata()
    {
        int sum = 0;
        for (int i = 0; i < 6; ++i)
        {
            sum += marks[i];
        }
        cout << name << ' '
             << age << ' '
             << sum << ' '
             << id << endl;
    }
};
int main()
{
    int n, val;
    cin >> n; // The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}