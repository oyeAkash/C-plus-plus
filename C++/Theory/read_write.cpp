#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student
{
private:
    int id;
    char name[20];

public:
    void getData();
    void search();
};

void Student::getData()
{
    Student st;
    char choice;
    cout << "Enter ID: ";
    cin >> name;
    fflush(stdin);
    cout << "Enter Name: ";
    cin >> id;
    ofstream file("read_write.txt");
    do
    {
        // stu.getData();
        file.write((char *)&st, sizeof(st));
        fflush(stdin);
        cout << "Do you want to add more(y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'n');
    file.close();
}

void Student::search()
{
    int id;
    cout << "Enter ID to search: ";
    fflush(stdin);
    cin >> id;
    Student stu;
    ifstream file("read_write.txt");
    while (!file.eof())
    {
        file.read((char *)&stu, sizeof(stu));
        if (stu.id == id)
        {
            cout << "ID: " << stu.id << endl
                 << "Name: " << stu.name << endl;
        }
        else
        {
            cout << "Data Not Found";
        }
    }
    file.close();
}

int main()
{
    Student stu;
    stu.getData();
    // stu.search();
    return 0;
}