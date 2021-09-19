#include<iostream>

using namespace std;

int main(){
    //for loop
    for(int i=0;i<60;i++){
        cout<<i<<endl;
    }
    //while loop
     int i=0;
    while(i<12){
        cout<<i<<endl;
        i++;
    }
    //do while loop
    i=0;
    do{
        cout<<i<<endl;
        i++;
    }while(i<30);
    return 0;
    //infinite while loop
    while(true){
        cout<<i<<endl;
        i++;
    }
}