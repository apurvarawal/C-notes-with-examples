#include<iostream>
using namespace std;

inline int product(int a, int b)
{ //inline function reduces the time of execution, for the function which has to be performed again and again
   static int c = 0; //only once the value of c will be taken
   c = c+1;
    return a*b + c;
}

int main(){
    int x = 7,y = 2;
    cout<<product(x,y)<<endl;
    cout<<product(x,y)<<endl;
      cout<<product(x,y)<<endl;
        cout<<product(x,y)<<endl;
          cout<<product(x,y)<<endl;
            cout<<product(x,y)<<endl;
              cout<<product(x,y)<<endl;
                cout<<product(x,y)<<endl;
                  cout<<product(x,y)<<endl;
                    cout<<product(x,y)<<endl;

    return 0;
}