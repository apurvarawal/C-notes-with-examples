
 
 //Header files are of 2 types.
 //1. system header files: comes with the compiler
 #include<iostream>
 //2. User defined header files.
 #include "this.h" // this will produce an error if this.h is not present in the current directory.
 using namespace std;
 int main(){
     cout<<"This is hello world.";
     return 0;
 }