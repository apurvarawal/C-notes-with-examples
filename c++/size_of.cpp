#include<iostream>
using namespace std;
int main(){
    float a = 34.67f;
    long double b = 34.67l;
    cout<<"The size of a is : "<<sizeof(34.67)<<endl;
    cout<<"The size of b is : "<<sizeof(34.67)<<endl;
    cout<<"The size of af is : "<<sizeof(34.67f)<<endl;
    cout<<"The size of aF is : "<<sizeof(34.67F)<<endl;
    cout<<"The size of al is : "<<sizeof(34.67l)<<endl;
    cout<<"The size of aL is : "<<sizeof(34.67L)<<endl;

    
    return 0;
}