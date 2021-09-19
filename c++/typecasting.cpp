// typecasting means to convert one type of variable into another.

#include<iostream>

using namespace std;

int main(){
    int a = 45;
    float b = 46.67;
    cout<<float(a)<<endl;
    cout<<int(b);

    const int c = 43;
    //const int maintains a caonstant value of c
    cout<<c<<endl;
    c= 67;
    cout<<c<<endl; //This will show an error
    return 0;
}