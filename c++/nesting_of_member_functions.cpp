#include<iostream>
using namespace std;
int s;

class binary{
      public:
      void read(void);
      void chk_bin(void);
      void display(void);
};

void binary::read(void){
    cout<<"Enter a number."<<endl;
    cin>>s;
    }
    void binary::chk_bin(void){
        for(int i=0; i != s.length; i++)
    if(s.at(i) == '0' && s.at(i) == '1'){
        cout<<"It is a binary number."<<endl;
    }
    else{
        cout<<"It is not a binary number."<<endl;
    }
}


int main(){
    
    return 0;
}