#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

void putPointer()
{
    // tellp()
    ofstream myFile("sample.txt");
    cout << "Position of put pointer is at index: " << myFile.tellp() << endl;
    myFile << "hi";
    cout << "Position of put pointer is at index: " << myFile.tellp() << endl;
    myFile.close();
}
void getPointer()
{
    // tellg()
    char ch;
    ifstream myFile("sample.txt");
    cout << "Position of get pointer is at index: " << myFile.tellg() << endl;
    myFile >> ch;
    cout << ch << endl;
    cout << "Position of get pointer is at index: " << myFile.tellg() << endl;
    myFile.close();
}
void seek_p()
{
    ofstream myFile("seek_G_P.txt");
    cout << "Position before setting: " << myFile.tellp() << endl;
    myFile << "Hi";
    getch();
    myFile.seekp(3);
    myFile << "Doraemon";
    cout << "Position: " << myFile.tellp() << endl;
    myFile.close();
}
void seek_g()
{
    char ch;
    ifstream myFile("seek_G_P.txt");
    cout << "Position before setting: " << myFile.tellg() << endl;
    myFile.seekg(3);
    myFile >> ch;
    cout << "Character (after 3 bytes): " << ch << endl;
    cout << "Position (after 3 bytes) at index: " << myFile.tellg() << endl;
    myFile.close();
}
int main()
{
    // putPointer();   //tellp();
    // getPointer();   //tellg();
    seek_p(); // seekp();
    seek_g(); // seekg();
    return 0;
}