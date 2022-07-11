#include <iostream>
#include <list>
using namespace std;
  
int main()
{
    // declaration of list
    list<pair<int, char> > lis;
  
    // inserts at the beginning of the list
    auto it = lis.emplace(lis.begin(), 4, 'a');
  
    // inserts at the beginning of the list
    lis.emplace(it, 3, 'b');
  
    cout << "List: ";
  
    for (auto it : lis)
        cout << "(" << it.first << ", " << it.second << ") ";
  
    return 0;
}