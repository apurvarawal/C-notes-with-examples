#include<iostream>
using namespace std;

float moneyReceived(int money, float factor = 1.04)//default arguments are written in the last, after all variables

{
    return money * factor;  
}

//If we dont write factor in cout statement, then by default 1.04 will be used in the command, 
//while if we write factor value, in the cout statement, then it will take the renewed value, 
//and not the default value.

int main(){
    int money = 100000;
    cout<<"The money received by a person with income rs "<<money<<" is rs "<<moneyReceived(money)<<endl;
    cout<<"The money received by a VIP with income rs "<<money<<" is rs "<<moneyReceived(money, 1.08)<<endl;

    return 0;
}