#include<iostream>
#include<math.h>
using namespace std;

class point{
    int x, y;
    
    public:
    point(int a , int b){
        
        x =a;
        y = b;
    }
    void tellpoint(){
        cout<<"The coordinates of the point are : ("<<x<<","<<y<<")"<<endl;
    }

   
};
int main(){
    point P(4,5);
    P.tellpoint();
    
    point Q(2,4);
    Q.tellpoint();
    return 0;
}