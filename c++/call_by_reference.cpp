#include<iostream>
using namespace std;
void swapPoint(int &a, int &b){
    int temp = a;
    a =b;
    b= temp;
    return;
}
int main(){
    int x = 7, y = 6;
    cout<<"Before swap a = "<<x<<" and b is "<<y<<endl;
    swapPoint(x,y);
    cout<<"After swap a = "<<x<<" and b is "<<y<<endl;
    return 0;
}