#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> data_array = {1, 2, 3, 4, 5};
    array<int, 5> array_data = {11, 12, 13, 14, 15};

    data_array.empty() ? cout << "Array empty" : cout << "Array not empty" << endl;

    cout << "at- array_name.at('index')- " << data_array.at(3) << endl;
    cout << "[]- array_name['index']- " << data_array[3] << endl;
    cout << "front- array_name.front()- " << data_array.front() << endl;
    cout << "back- array_name.back()- " << data_array.back() << endl;
    cout << "size- array_name.size()- " << data_array.size() << endl;
    data_array.fill(5);
    cout << "fill- array_name.fill('value')- ";
    for (int i = 0; i < 5; i++)
    {
        cout << data_array.at(i) << " ";
    }
    cout << "\nswap- first_array.swap(second_array)- " << endl;
    array_data.swap(data_array);
    cout << "\tarray_data= ";
    for (int i = 0; i < 5; i++)
    {
        cout << array_data.at(i) << " ";
    }
    cout << "\n\tdata_array= ";
    for (int i = 0; i < 5; i++)
    {
        cout << data_array[i] << " ";
    }
    return 0;
}