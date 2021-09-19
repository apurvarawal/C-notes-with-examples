#include<iostream>
using namespace std;

class Interest{
    int p, y;
    float r, returnValue;
    public:
    Interest(){}; //even if no value is entered the program will still run
    Interest(int principal, int years, float rate);
    Interest(int principal, int years, int rate);
    void result();
    
};

Interest :: Interest(int principal, int years, float rate){
        p = principal;
        y = years;
        r = rate;
        int returnValue = p;

        
        for(int i =0 ; i<years ; i++){
             returnValue = returnValue *(1+r);
        }
    }

Interest :: Interest(int principal, int years, int rate ){
        p = principal;
        y = years;
        r = float (rate)/ 100;
        int returnValue = p;
        
        for(int i =0 ; i<years ; i++){
             returnValue = returnValue *(1+r);
        }
    }

     void Interest ::  result(){
       
        cout<<"The total bank deposit is : "<<returnValue<<endl;
    }

int main(){
    Interest I1,I2;
    int principal, years, rate;
    float Rate;
    cout<<"Enter the value of p, y and r."<<endl;
        cin>>principal>>years>> rate ;

        I1 = Interest( principal,  years,  rate);
        I1.result();

     cout<<"Enter the value of p, y and r."<<endl;
       cin>>principal>>years>> Rate ;


        I2 = Interest(principal,  years,  Rate);
        I2.result();
    return 0;
}