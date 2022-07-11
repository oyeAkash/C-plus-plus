#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(3);
    v = {1, 2, 3};
    cout << "current capacity: " << v.capacity() << endl
         << "size: " << v.size() << endl;
    v.push_back(4);
    cout << "current capacity: " << v.capacity() << endl
         << "size: " << v.size()  << endl;
    v.push_back(5);
    cout << "current capacity: " << v.capacity() << endl
         << "size: " << v.size() << endl;
    v.push_back(6);
    cout << "current capacity: " << v.capacity() << endl;
    v.push_back(7);
    cout << "current capacity: " << v.capacity() << endl;
    return 0;
}