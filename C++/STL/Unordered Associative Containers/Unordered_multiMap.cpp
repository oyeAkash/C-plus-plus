#include<iostream>
#include <unordered_map>
using namespace std;


void print(unordered_multimap<int, int> m)
{
    for(auto it:m)
        cout << it.first<<" "<<it.second<<endl;

}
int main()
{
    unordered_multimap<int , int> m;

    m.insert(m.end(), {7, 7});
    
    for(int i=1; i<=5; i++)
        m.insert({i, i*2});

    m.insert({12, 70});
    m.insert({7, 70});
    print(m);
    return 0;
}