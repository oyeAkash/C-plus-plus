#include <iostream>
#include <list>
using namespace std;
  
int main()
{
    // declaration of list
    list<int> lis = { 1, 2, 3, 4};
  
    auto it = lis.emplace(lis.begin(), 2);
    // inserts at the beginning of the list
    lis.emplace(it, 10);
    lis.emplace_back(9);
    lis.emplace_front(8);
    cout << "List: ";
    for (auto it = lis.begin(); it != lis.end(); ++it)
        cout << *it << " ";
  
    return 0;
}