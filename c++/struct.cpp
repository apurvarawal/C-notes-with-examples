#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eID;
    float salary;
}ep;

int main(){
    ep apurva;
    apurva.eID = 1;
    apurva.salary = 12000;
    ep zombie;
    zombie.eID= 2;
    zombie.salary = 13000;
    cout<<"The value of Apurva ID is : "<<apurva.eID<<endl;
    cout<<"The value of Apurva salary is : "<<apurva.salary<<endl;
    cout<<"The value of Zombie ID is : "<<zombie.eID<<endl;
    cout<<"The value of Zombie salary is : "<<zombie.salary<<endl;
    return 0;
}