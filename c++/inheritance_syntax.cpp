#include<iostream>
using namespace std;

class employee{
    public:
    int n; // variables must be public, or the derived class will not be able to use these variables
    employee(){} // this is a must
    employee(int eID){
      n = eID;
    }
    void display(){
        int salary = 26;
        cout<<"eID = "<<n<<endl<<"salary = "<<salary<<endl;
    }
};


class programmer : public employee{ //public here makes the public variables of main class public variables of derived class
    public:
    programmer(int eID){
        n = eID;
    }
    int language = 9;
};
int main(){
    employee apurva(34), zombie(67);
    apurva.display();
    zombie.display();
    programmer blah(23);
    blah.display();
    cout<<blah.language<<endl; // if we want to print any variable of a class =, then it is printed like this
    return 0;
}