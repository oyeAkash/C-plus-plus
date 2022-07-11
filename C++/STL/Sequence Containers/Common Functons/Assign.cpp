#include<iostream>
#include <list>
#include <vector>
using namespace std;

void showList(list<int> list_)
{
    for(auto itr=list_.begin(); itr!=list_.end(); itr++)
        cout << *itr << " ";
}

void showVector(vector<int> vector_)
{
    for(auto itr=vector_.begin(); itr!=vector_.end(); itr++)
        cout << *itr << " ";
}

int main()
{
    vector<int> vector_1{1,2,3,4}, vector_2;
    list<int> list_1, list_2;

    // vector_1.assign(4, 1);
    list_1.assign(4,2);

    cout << "assigned Vector_1: ";
   showVector(vector_1);

    cout << "\nassigned List_1: ";
    showList(list_1);

    vector_2.assign(vector_1.begin(), vector_1.end());

    cout << "\ncopy Vector_1 -> Vector_2: ";
    showVector(vector_2);

    list_2.assign(list_1.begin(), list_1.end());

    cout << "\ncopy List_1 -> List_2: ";
    showList(list_2);
    return 0;
}