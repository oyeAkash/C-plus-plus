#include<iostream>
#include <map>
using namespace std;


void print(map<int, int> m)
{
    for(auto it:m)
        cout << it.first<<" "<<it.second<<endl;

}
int main()
{
    map<int , int> m;

    for(int i=1; i<=5; i++)
        m.insert({i, i*10});
    
    m.insert(m.end(), {7, 70});
    m.insert(m.begin(), {7, 90});
    print(m);
    return 0;
}