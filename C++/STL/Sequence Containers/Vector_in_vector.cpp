#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> vec;

    vector<int> v1 {1,2,3};
    vector<int> v2 {4,5,6};
    vector<int> v3 {7,8,9};

    vec.emplace_back(v1);
    vec.emplace_back(v2);
    vec.emplace_back(v3);

    for(auto external_vec : vec){
        for(auto inner_vec: external_vec){
            cout<<inner_vec<<" ";
        }
        cout<<endl;
    }
// vec[index of outer vector][index of inner vector]
    cout<<"manual print of vector: "<<vec[0][2];

    return 0;
}