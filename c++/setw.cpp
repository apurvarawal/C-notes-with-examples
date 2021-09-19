#include<iostream>
#include<iomanip> //isse setw aega 
using namespace std;

int main(){
    int a = 700, b = 89, c = 8;
    

    cout<<"The value of 'a' without setw is :"<<a<<endl;
    cout<<"The value of 'b' without setw is :"<<b<<endl;
    cout<<"The value of 'c' without setw is :"<<c<<endl;

    cout<<"The value of 'a' with setw is : "<<setw(3)<<a<<endl;
    cout<<"The value of 'b' with setw is : "<<setw(3)<<b<<endl;
    cout<<"The value of 'c' with setw is : "<<setw(3)<<c<<endl;
    return 0;
}