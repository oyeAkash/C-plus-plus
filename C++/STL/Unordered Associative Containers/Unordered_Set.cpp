#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s1;

    s1.insert(50);
    for(int i=1; i<=5; i++)
        s1.insert(i*2);

    s1.insert(20);
    // s1.insert(s1.begin(), 80);

    for(auto itr : s1)
    {
        cout << itr << " ";
    }
    return 0;
}
