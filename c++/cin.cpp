#include<iostream>

using namespace std;

int main(){
    int num1, num2;

    cout<<"Enter the value of num1 : \n"; // '<<' this is insertion operator
    cin>>num1;// '>>' this is extraction operator
    
    cout<<"Enter the value of num2 : \n";
    cin>>num2;

    cout<<"The sum of numm1 and num2 is : "<<num1+num2;
    return 0;
}