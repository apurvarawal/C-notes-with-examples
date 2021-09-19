#include<iostream>
using namespace std;

union money //it allots the same memory to each of the element, thats y only one element can b picked at a time, and also, it picks the highest memory among all of them
{
    /* data */
    int rice; 
    char car;
    float muscle;
};

int main(){
    union money m1;
    m1.car = 'd';
    cout<<m1.car;
    return 0;
}