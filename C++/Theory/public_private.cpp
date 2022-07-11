// This program also contains Nesting of Member Function

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    // void check_binary(void);    //---->i'll show error

public:
    inline void read(void);
    void check_binary(void);
    void display(void);
    void ones_complemet(void);
};

void binary ::read(void)
{
    cout << "Enter a Binary Number: ";
    cin >> s;
}

void binary ::check_binary(void) // :: is called Scope Resolution Operator
{
    for (int i = 0; i < s.length(); i++)
    {
        while (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "\nIncorrect Format of Binary Number" << endl;
            read(); //   it is Nesting of Member Function
        }
    }
}

void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

void binary ::ones_complemet(void)
{
    // check_binary(); //   it is Nesting of Member Function
    // display();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
    // display();
}

int main()
{
    binary b;
    b.read();
    b.check_binary();    //   mentioned in ones_complement();
    b.display();
    b.ones_complemet();
    b.display();
}