#include<iostream>
using namespace std;

// static variables or functions is shared by all functions


class employee{
    static int count; //default value 0
    int ID;
    public:
    void employeeID(void){
         cout<<"Enter the employee ID."<<endl;
         cin>>ID;
         count++;
    }
    void getID(void){
        cout<<"The employee ID of employee number "<<count<<" is "<<ID<<endl;
    }

    static void getCount(void){ //static variables can only be aproached by static functions
        cout<<"The count of the employee is "<<count<<endl;
    }
};

int employee :: count = 3700; //If i want to start count from any number other than 0, then we will put count = that number, in this line
int main(){
    employee apurva, zombie;
    apurva.employeeID();
    apurva.getID();
    employee :: getCount();


    zombie.employeeID();
    zombie.getID();
    employee :: getCount();
    return 0;
}