#include<iostream>
using namespace std;
int main(){
    int a=3;
    int *b = &a; // b will store the address of a
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;
    return 0;
}