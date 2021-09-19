#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<40;i++){
        if(i==2){
            continue;  //continue skip kr dega us wale step ko, jispe lgaenge
        }
        cout<<i<<endl;
    }
    return 0;
}