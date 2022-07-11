#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;
    int Q, sw;
    string name;
    map<string, int>::iterator itr;
    cin >> Q;
    while (Q--)
    {
        cin >> sw;
        switch (sw)
        {
        case 1:
            int marks;
            cin >> name >> marks;
            itr = m.find(name);
            if (itr == m.end())
            {
                m.insert({name, marks});
            }
            else
            {
                marks = marks + m[name];
                itr->second = marks;
            }
            break;
        case 2:
            cin >> name;
            // itr = m.find(name);
            m.erase(name);
            break;
        case 3:
            cin >> name;
            itr = m.find(name);
            if (itr != m.end())
                cout << itr->second << endl;
            else
                cout << '0' << endl;
            break;
        default:
            return;
        };
    }
}
/* int main() {
    int n;
    cin >> n;
    
    map<string, int> m;
    
    while (n--) {
        int t;
        cin >> t;
        
        string s;
        cin >> s;
        
        if (t == 1) {
            int a;
            cin >> a;
            
            m[s] += a;
        } else if (t == 2) {
            m[s] = 0;
        } else {
            cout << m[s] << "\n";
        }
    }
    
    return 0;
} */