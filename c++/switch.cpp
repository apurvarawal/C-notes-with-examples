#include<iostream>

using namespace std;

int main(){

    int age;
    cout<<"Enter your age."<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You are 18."<<endl;
        break;
   
    default:
        cout<<"You are not 18."<<endl;
        break;
    }
    return 0;
}