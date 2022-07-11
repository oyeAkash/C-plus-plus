#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n, num, i, val;
    cin >> m;
    vector<int> v(m);
    for (i = 0; i < m; i++)
        cin >> v[i];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> val;
        vector<int>::iterator low;
        low = lower_bound(v.begin(), v.end(), val);

        if (v[low - v.begin()] == val)
        {
            cout << "Yes " << (low - v.begin() + 1) << endl;
        }
        else
        {
            cout << "No " << (low - v.begin() + 1) << endl;
        }
    }
    return 0;
}