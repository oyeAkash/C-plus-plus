#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int sw, q, val;
    cin >> q;
    q++;
    while(q--){
        cin >> sw;
        switch(sw){
            case 1:
                cin >> val;
                s.insert(val);
                break;
            case 2:
                cin >> val;
                s.erase(val);
                break;
            case 3:
                cin >> val;
                s.find(val);
                if(s.find(val) == s.end())
                {
                    cout << "No" << endl;
                }
                else {
                    cout << "Yes" << endl;
                }
                break;
            default:
                return 0;
        };
    }
    return 0;
}