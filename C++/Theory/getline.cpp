#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string str1, str2;
    // search file to read
    ifstream write_file("file_01.txt");
    
    // read 1 line completely 
    getline(write_file, str1);
    cout << str1 <<endl;

    //read only 1st string of one line, stop reading after 'space'
    getline(write_file, str2, ' ');
    cout << str2 <<endl;
    return 0;
}