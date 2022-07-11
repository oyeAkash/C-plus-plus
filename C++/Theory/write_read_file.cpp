#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "NOTE:\n\tThis programe will write only one line in the file" << endl;
    cout << "Enter the text: " << endl;
    string str_write, str_read;
// creating ofstream class object for writing mode
// opening file using constructor
    ofstream obj_of_ofstream("sample.txt");

// opening file to write
    // obj_of_ofstream.open("sample.txt");

// read a line from standard input
    // getline(cin, str_write);
// directly write in file
    obj_of_ofstream << "i'm directly written in line 1\n";
    obj_of_ofstream << "i'm directly written in line 2\n";

// writing in file
    obj_of_ofstream << str_write << endl; 
    
// closing file
    obj_of_ofstream.close();

// creating ifstream class object for reading mode
// opening file using constructor
    ifstream obj_of_ifstream("sample.txt");

// opening file to read using 'open()' function
    // obj_of_ifstream.open("sample.txt");

// reading from saved file
    while (getline(obj_of_ifstream, str_read))
    {
        cout << "\t" << str_read << endl;
    }
// closing file
    obj_of_ifstream.close();

    return 0;
}

// write whole structure/class at once
// (ofstream)OBJECT.write(reinterpret_cast <char*(data type)> (&CLASS/structure OBJECT), sizeof(CLASS/structure));

// read whole structure/class at once
// (ifstream)OBJECT.read(reinterpret_cast <char*(data type)> (&CLASS/structure OBJECT), sizeof(CLASS/structure));