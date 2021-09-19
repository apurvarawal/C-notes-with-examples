#include<iostream>

using namespace std;
int main(){
    cout<<"Operators in c++"<< endl;
    cout<<"Following are the operators in c++"<<endl;
    int a = 3, b =9;
    cout<<"a+b = "<< a+ b <<endl;
    cout<<"a-b = "<< a-b <<endl;
    cout<<"a*b = "<< a* b <<endl;
    cout<<"a/b = "<< a/ b <<endl;
    cout<<"a%b = "<< a% b <<endl;
    cout<<"a++ = "<< a++  <<endl; //from now on 'a' takes the value which came as an output from the above command.
    cout<<"a-- = "<< a--  <<endl;
    cout<<"++a= "<< ++a <<endl;
    cout<<"--a = "<< --a <<endl;

    cout<<"Following are the comaprison operators in c++"<<endl;
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    
    cout<<"Following are the logical operators in c++"<<endl;
    cout<<"The value of ((a==b) && (a>b)) is: "<<((a==b) && (a>b))<<endl;
    cout<<"The value of ((a==b) || (a>b)) is: "<<((a==b) || (a>b))<<endl;
    return 0;
}