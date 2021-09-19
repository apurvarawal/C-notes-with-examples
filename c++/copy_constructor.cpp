#include<iostream>
using namespace std;

class val{
    int a= 0;
    public:
    val(){};
    val(int num);
    val(val &obj);
    void display();
};
val :: val(int num){
    a = num;
    }

//even if we do not make a copy contructor, the program supplies a copy constructor on it's own.
val ::    val(val &obj){
        cout<<"Copy constructor has a value!!"<<endl;
       a = obj.a;

    }
void val ::  display(){
    cout<<"The value of the number is : "<<a<<endl;
}

int main(){
    val v1, v2, v3(43), z2;
    v1.display();
    v2.display();
    v3.display();
    val z1(v1); //Copy constructor invoked
    z1.display();

    z2 = z1; //Copy constructor not called ; jb sirf assignment operator ka use krenge to call ni hoga
    z2.display();

    val z3 = v3;  // Copy constructor called
    z3.display(); 
    return 0;
}