#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
       void numbers(int v1, int v2){
           a = v1;
           b = v2;
       }
       // friend command can be written either in private or in public area
       friend Complex sumComplex(Complex o1, Complex o2); // this will let the functon sum to use the variables of the given class.
       void print(){
           cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
       }
};
   
  Complex sumComplex(Complex o1, Complex o2){
       Complex o3;
       o3.numbers((o1.a+ o2.a),(o1.b + o2.b));
       return o3;
   }
int main(){
    Complex c1,c2,c3;
    c1.numbers(6,7);
    c1.print();
    c2.numbers(4,5);
    c2.print();
    c3 = sumComplex(c1,c2);
    c3.print();
    return 0;
}