#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int t1, t2, t3;

class acess
{
private:
    struct
    {
        char username[10], password[8];
    } member;

public:

    void registeraton();
    void logIn();
};

void acess ::registeraton()
{
    cout << "Enter Username :";
    cin >> member.username;
    cout << "Enter Password :";
    cin >> member.password;
    ofstream file;
    file.open("login.text", ios::app);
    // file.seekp(0, ios_base::end);
    // t1 = file.tellp();
    // t2 = sizeof(member);
    // t3 = t1 / t2;
    // file.seekp((t3 - 1) * t1, ios_base::beg);
    file << member.username << endl
         << member.password;
    file.close();
    cout << "Registered Successfully...😊" << endl;
    file.close();
}

void acess ::logIn()
{
    string un, pw;
    cout << "Enter username :";
    cin >> member.username;
    cout << "Enter password :";
    cin >> member.password;
    ifstream file;
    file.open("login.text", ios::app);

    getline(file, un);
    getline(file, pw);
    if (un == member.username && pw == member.password)
    {
        cout << "Successfully Logged In" << endl;
        system("pause");
    }
    else
    {
        cout << "Invalid Username & Password...❌ " << endl;
        system("PAUSE");
    }
}

int main()
{
    acess obj;
    int choice;
    cout << "1 : Register \n2 : Login\nYour choice :";
    cin >> choice;
    switch (choice)
    {
    case 1:
        obj.registeraton();
        main();
        break;
    case 2:
        obj.logIn();
        break;
    default:
        cout << "Wrong Choice....☹ \n"
             << endl;
        main();
        break;
    }
}