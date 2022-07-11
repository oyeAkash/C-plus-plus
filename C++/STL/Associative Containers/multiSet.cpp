#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main()
{
    multiset<int> s1;

    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);

    s1.insert(50);
    s1.insert(10);

    multiset<int>::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr << " ";
    }
    return 0;
}
