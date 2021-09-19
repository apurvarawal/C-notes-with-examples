#include<iostream>
using namespace std;

class c2;

class c1{
    int a;
    friend void swap(c1 & , c2 &);
    public:
    void setValue(int x){
        a = x;
    }
    void getValue(){
        cout<<"The value of 'a' is : "<<a<<endl;
    }
    
};

class c2{
    int b;
    friend void swap(c1 & , c2 &);
    public:
    void setValue(int y){
        b = y;
    }
    void getValue(){
        cout<<"The value of 'b' is : "<<b<<endl;
    }
    
};

void swap(c1 &x , c2 &y){
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.setValue(45);
    oc2.setValue(67);

    swap(oc1  , oc2 );

    cout<<"The swapped value of a is :";
    oc1.getValue();
    cout<<"The swapped value of b is :";
    oc2.getValue();
    return 0;
}