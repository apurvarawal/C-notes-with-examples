#include<iostream>
using namespace std;

class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1, int b1, int c1);// declaration
        void getdata(){ //PRINT krvaega
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
    }
};
     
     void employee :: setdata(int a1, int b1, int c1){
         a = a1;
         b =b1;
         c= c1;
     }
int main(){
    employee apurva; // keeping apurva as my class name
    apurva.d = 32; // declaring public data
    apurva.e = 43;
    apurva.setdata(23, 56, 67); // call out krega is part ko class k
    apurva.getdata(); // call out krega is part ko class k

    return 0;
}