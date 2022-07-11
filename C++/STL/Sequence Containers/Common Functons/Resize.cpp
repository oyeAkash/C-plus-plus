#include <iostream>
#include <vector>
#include <list>
using namespace std;
  
    // SYNTAX-- vector::resize('size', 'value');
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
    vector<int> _vector;
    list<int> _list;
  
    for(int i=1; i<=10; i++)
    {
        _vector.emplace_back(i*10);
        _list.emplace_back(i*10);
    }

    cout << "\nVector before resizing: ";
    showVector(_vector);

// resizing to 4
    _vector.resize(4);

    cout << "\nVector after resizing : ";
    showVector(_vector);

    cout << "\nList before resizing: ";
    showList(_list);

// resizing to 4
    _list.resize(4);

    cout << "\nList after resizing: ";
    showList(_list);
    return 0;
}