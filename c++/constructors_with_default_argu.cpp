#include<iostream>
using namespace std;

class simple{
    int data1, data2, data3;
    public:
    simple(int a, int b= 7, int c= 9){
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void print(){
        cout<<"data1 = "<<data1<<endl;
         cout<<"data2 = "<<data2<<endl;
          cout<<"data3 = "<<data3<<endl;

    }
};
int main(){
    simple s1(3,4,6);
    s1.print();

    simple s2(3);
    s2.print();
    return 0;
}