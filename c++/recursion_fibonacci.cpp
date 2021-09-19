#include<iostream>
using namespace std;
int fibo(int n){
    
    if(n<=1){
        return 1;
    }
    return fibo(n-2)+ fibo(n-1);
}
int main(){
    int a;
    cout<<"Enter the value of a."<<endl;
    cin>>a;
    cout<<"The "<<a<<"th term of the fibonacci series for the given number is "<< fibo(a) <<endl;
    return 0;
}