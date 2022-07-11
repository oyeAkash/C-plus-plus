#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main()
{
    tuple<string, int, int> t1;

    t1 = make_tuple("akash", 22, 1234);
    
    cout << get<0>(t1) << " "
         << get<1>(t1) << " "
         << get<2>(t1) << " ";
    return 0;
}