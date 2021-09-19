#include<iostream>
using namespace std;

class base1{
    protected:
    int int_base1;
    public:
    void get_base1(int a){
        int_base1=a;
    }
};

class base2{
    protected:
    int int_base2;
    public:
    void get_base2(int a){
        int_base2=a;
    }
};

class sum : public base1, public base2{
    public:
      void print(){
        cout<<"base1 = "<<int_base1<<endl;
        cout<<"base2 = "<<int_base2<<endl;
        cout<<"base1 + base2 = "<<int_base1+int_base2<<endl;
    }
};
int main(){
    sum tell;
    tell.get_base1(45);
    tell.get_base2(34);
    tell.print();
    return 0;
}