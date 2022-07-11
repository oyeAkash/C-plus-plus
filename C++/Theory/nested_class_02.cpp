#include <iostream>
#include <string.h>

using namespace std;

class Student
{
private:
    int id;
    char name;

public:
    //  Nested class:---- is public for parent class
    class Address
    {
    private:
        int houseNo;
        char street[20], city[20], state[20], pincode[6];

    public:
        void setAddress(int h, char *s, char *c, char *st, char *p)
        {
            houseNo = h;
            strcpy(street, s);
            strcpy(city, c);
            strcpy(state, st);
            strcpy(pincode, p);
        }
        /* to access the data member we have to implicite below function here.
        Either we can't accessed the data members of Nested class   */
        void printAddress()
        {
            cout << "Address: " << endl
                 << houseNo << endl
                 << street << endl
                 << city << endl
                 << state << " " << pincode << endl;
        }
    };
    Address add;        //creatin obj of inner class is must 
    void setID(int id)
    {
        this->id = id;
    }
    void setName(void)
    {
        cin >> name;
    }
    void address(int h, char *s, char *c, char *st, char *p)
    {
        add.setAddress(h, s, c, st, p);
    }
    void showStudents()
    {
        cout << "Students Details:" << endl
             << "Name: " << name << endl
             << "ID: " << id << endl;
        add.printAddress();
    }
};

int main()
{
    Student::Address addr; // when inner class is in public section of outer class only then we can create a obj of inner class in main function like this
    Student st;
    st.setID(1);
    st.address(103, "Belahari Road", "Sultanpur", "Uttar Pradesh", "228120");
    st.showStudents();
    return 0;
}