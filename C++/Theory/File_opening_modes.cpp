#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "NOTE:\n\tThis programe will write only one line in the file" << endl;
    cout << "Enter the text: " << endl;
    string str_write, str_read;

    // ios::out --> open for output operations
    // ofstream obj_of_ofstream("sample.txt"); // by default ---> ios::out

    // ios::app --> open and append the content after the current content in the file
    ofstream obj_of_ofstream;
    obj_of_ofstream.open("sample.txt", ios::app);

    // ios::trunc --> if file is open then its previous content will be deleted and replaced by new one
    // obj_of_ofstream.open("sample.txt", ios::trunc);

    getline(cin, str_write);

    obj_of_ofstream << str_write << endl;

    obj_of_ofstream.close();

    ifstream obj_of_ifstream("sample.txt"); // by default--> ios::in

    // obj_of_ifstream.open("sample.txt", ios::in);
    cout << "Content of file: " <<endl;
    while (obj_of_ifstream)
    {
        getline(obj_of_ifstream, str_read);
        cout << "\t" << str_read << endl;
    }
    obj_of_ifstream.close();

    return 0;
}