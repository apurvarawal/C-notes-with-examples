#include<iostream>
using namespace std;
int c = 89;
int main(){
    int a, b,c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c= a+b;
    cout<<"The value of c is: "<<c<<endl;
    cout<<"The value of c is: "<<::c; //:: is scope reservation operator, it prints the global value of the variable.
    return 0;
}