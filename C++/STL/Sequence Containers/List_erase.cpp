#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> list_1, list_2;

    // implimenting list elements
    for (int i = 1; i <= 10; i++)
    {
        list_1.emplace_back(i * 10);
        list_2.emplace_back(i * 10);
    }
    cout << "List before deleting any element: ";
    for (auto itr = list_1.begin(); itr != list_1.end(); itr++)
    {
        cout << *itr << " ";
    }

    // creating & pointing iterator
    list<int>::iterator itr1, itr2;
    itr1 = list_1.begin();

    // easing first element of list
    list_1.erase(itr1);

    cout << "\nList after deleting first element:";
    for (auto itr = list_1.begin(); itr != list_1.end(); itr++)
    {
        cout << *itr << " ";
    }

    // pointing iterators to the beging of the list
    itr1 = list_2.begin();
    itr2 = list_2.begin();

    // increment in iterator position
    advance(itr2, 4);

    // erasing up to the range of the list
    list_2.erase(itr1, itr2);

    cout << "\nList after deleting first four elements: ";
    for (auto itr = list_2.begin(); itr != list_2.end(); itr++)
    {
        cout << *itr << " ";
    }

    return 0;
}