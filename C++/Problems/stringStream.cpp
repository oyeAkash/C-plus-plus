// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?h_r=next-challenge&h_v=zen&isFullScreen=true&h_r=next-challenge&h_v=zen

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    stringstream ss(str);
    vector<int> integers;
    char ch;
    int a;
    while(ss >> a)
    {
        integers.push_back(a);
        ss >> ch;
    } 
    return integers;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}