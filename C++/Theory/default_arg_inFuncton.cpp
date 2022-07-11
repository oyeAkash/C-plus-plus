#include<iostream>
using namespace std;


float moneyReceived(int current_money, float factor = 1.04){   //---->here float factor is default argument
    return current_money*factor;
}
int main()
{
    int money = 10000;
    cout<<"If you have "<<money<<" Rs. then you will receive "<<moneyReceived(money)<<" in 1 year"<<endl;
    cout<<"Fot VIPs: If you have "<<money<<" Rs. then you will receive "<<moneyReceived(money, 1.1)<<" in 1 year"<<endl;

    return 0;
}