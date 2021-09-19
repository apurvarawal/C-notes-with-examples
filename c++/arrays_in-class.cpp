#include<iostream>
using namespace std;

class employee{
    int ID;
    public:
      void setData(void){
          cout<<"Enter the ID."<<endl;
          cin>>ID;
      }
      void getData(void){
          cout<<"The ID of the employee is "<<ID<<endl;
      }
};
int main(){
    employee google[4];
    for(int i = 0; i<4; i++){
        google[i].setData();
        google[i].getData();
    }
    return 0;
}