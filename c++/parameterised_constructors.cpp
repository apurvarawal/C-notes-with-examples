#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    Complex(int, int); // contructor declaration
      // function name n class name have to b the same

      void print(){
          cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;
      }
};

Complex ::Complex(int x, int y) { //--> parameterised constructor
     a = x;
     b = y;
}
int main(){
    //Implicit call
    Complex c1(4,5);
    c1.print();

    //Explicit call
    Complex b = Complex (9,5);
    b.print();
    return 0;
}

