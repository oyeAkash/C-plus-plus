#include <iostream>
using namespace std;
 
int main()
{
    int l=0, r=0, i=0, j=6;
    int a[] = {5,4,3,2,7,8,9};
    l =a[i];
    r =a[j];
    while(i < j)
    {
        if(l<r){
            i++;
            l = l + a[i];
        }
        else{
            j--;
             r = r + a[j];
        }
    }
    cout << a[i];
    return 0;
}