#include<iostream>
using namespace std;
int main(){
    enum MEAL{breakfast, lunch, dinner};
    cout<<(lunch==3)<<endl; // since this condition is false, therefore , we get a 0.
    return 0;
}