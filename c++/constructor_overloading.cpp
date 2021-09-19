#include<iostream>
using namespace std;

class Complex{
    int x,y;
    public:
    Complex(){
        x = 0;
        y = 0;
    }    
    Complex(int a, int b){
        x = a;
        y = b;
    }
    Complex(int a){
        x = a;
       y=0;
    }
    void print(){
        cout<<x<<"+"<<y<<"i"<<endl;
    }
};
int main(){
    Complex c1;
    c1.print();
    Complex c2(3);
    c2.print();
    Complex c3(4,5);
    c3.print();
    
    return 0;
}