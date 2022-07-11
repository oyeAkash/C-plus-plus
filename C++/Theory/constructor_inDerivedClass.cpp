#include <iostream>
using namespace std;

class base1{
public:
    base1(int i){
        int x = i;
        cout << "constructor of  BASE_1 is called value of 'i' is " << i << endl;
    }
};
class base2{
public:
    base2(int i){
        int x = i;
        cout << "constructor of  BASE_2 is called value of 'i' is " << i << endl;
    }
};
class derived : public base1, public base2{
    int data1, data2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(c){
        data1 = b;
        data2 = d;
        cout << "constructor of derived class is called"
             << "value of 'b' & 'd' is " << data1 << data2 << endl;
    }
};

int main(){
    derived obj(1, 2, 3, 4);

    return 0;
}