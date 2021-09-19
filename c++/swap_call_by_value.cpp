#include<iostream>
using namespace std;

void swapPointer(int *a, int *b){ //since the address will remain constant, therefore values can be swapped only by using pointers.
int temp = *a;
*a= *b;
*b = temp;
return;
}
int main(){
    int x = 2, y =7;
    cout<<"Values of a and b before swap is "<<x<<" "<<y<<" "<<"respectively"<<endl;
    swapPointer(&x,&y);
    cout<<"Values of a and b after swap is "<<x<<" "<< y<<" "<< "respectively"<<endl;

    return 0;
}