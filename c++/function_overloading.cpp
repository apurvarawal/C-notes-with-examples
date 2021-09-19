#include<iostream>
using namespace std;

//function overloading ensures that the correct function is executed, even when the name of many functions is same,
//it does so, by reading the number of variables.

int volume(int a, int b, int c){
    return a*b*c;
}

int volume(int r, int h){
    return (3.14*r*r*h);
}

int volume(int a){
    return a*a*a;
}
int main(){
    cout<<"The volume of cuboid is "<<volume(2,3,4)<<endl;
    cout<<"The volume of cube is "<<volume(2)<<endl;
    cout<<"The volume of cylinder is "<<volume(2,3)<<endl;
    
    return 0;
}