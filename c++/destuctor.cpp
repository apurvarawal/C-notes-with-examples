#include<iostream>
using namespace std;

int count =0;

class num{
    public:
    num(){
        count++;
        cout<<"We are in the num class rn."<<endl<<" And the value of count is : "<<count<<endl;
    }
    ~num(){
        cout<<"We are in the destructor function"<<endl<<" And the value of count is :"<<count<<endl;
        count--;
    };
};
int main(){
    cout<<"We are in the main function."<<endl<<"We are creating a number n1."<<endl;
    num n1;
    {
        cout<<"Creating 2 more values for num."<<endl;
        num n2, n3;
    }
    return 0;
}