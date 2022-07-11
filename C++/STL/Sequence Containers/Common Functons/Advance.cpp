#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    for (int i = 0; i < 10; i++)
        vec.push_back(i * 10);

    // printing vector element
    cout << "Vector Elements: ";
    for (int i = 0; i < 10; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Declaring the vector iterator
    vector<int>::iterator it = vec.begin();

    // Printing alternate elements
    cout << "Alternate Vector Elements: ";
    while (it < vec.end())
    {
        cout << *it << " ";
        advance(it, 2);
    }
}