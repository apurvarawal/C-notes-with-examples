#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    Complex(void); // contructor declaration
      // function name n class name have to b the same

      void print(){
          cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;
      }
};

Complex ::Complex(void) { //--> default constructor
     a = 45 ;
     b = 56 ;
     
}
int main(){
    Complex c1,c2;
    c1.print();
    c2.print();
    return 0;
}

//CHARACTERISTICS OF CONSTRUCTORS
//1. It should be declared in the public section of the class.
//2. They are automatically invoked whenever the character is created.
//3. They can not return values and do not have a return type.
//4. It can have default arguments.
//5. We can not refer to their address.