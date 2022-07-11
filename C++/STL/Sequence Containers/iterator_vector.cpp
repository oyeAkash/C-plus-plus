#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    for (int i = 0; i <= 9; i++)
        v.push_back(10 * (i + 1));

    cout << "Current Capacity: " << v.capacity() << endl
         << "Current Size: " << v.size() << endl
         << "Current Vector: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    vector<int>::iterator it = v.begin();
    v.insert(it, 9999);
    
    cout << endl
         << endl;
    cout << "size: " << v.size() << endl
         << "Current Capacity: " << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    v.insert(it + 2, 9999);
    cout << endl
         << endl;
    cout << "size: " << v.size() << endl
         << "Current Capacity: " << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}