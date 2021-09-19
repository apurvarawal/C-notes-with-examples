#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void numbers(int v1 , int v2){
        a = v1;
        b = v2;
    }
    void sumOfComplex(complex l1, complex l2){
        a = l1.a + l2.a;
        b = l1.b + l2.b;
    }
    void print(void){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    complex c1, c2, c3;
    c1.numbers(1,2);
    c1.print();

    c2.numbers(4,5);
    c2.print();

    c3.sumOfComplex(c1,c2);
    c3.print();

    return 0;
}