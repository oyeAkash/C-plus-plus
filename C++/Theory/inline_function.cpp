/* inline function expands in one line and then start executing
     --->function must not contains  1- loop, switch, goto, ect.
                                     2- function recursion 
                                     3- static variable */

#include<iostream>
using namespace std;

inline void func();     //--->  inline function declaration

void func(){
    cout<<"you are in func"<<endl;
}


int main()
{
    cout<<"you are in main"<<endl;
    func();

    return 0;
}