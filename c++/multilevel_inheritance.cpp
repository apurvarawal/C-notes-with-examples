#include<iostream>
using namespace std;

class student{
    protected:
    int roll_number;
    public:
    void set_data(int);
    void get_data();
};

void student :: set_data(int r){
    roll_number = r;
}

void student :: get_data(){
    cout<<"The roll number of the student is :"<<roll_number<<endl;
}

class marks : public student{
    protected:
    float maths;
    float physics;
    public:
    
    float ur_marks(float , float );
};

float marks :: ur_marks(float m, float p){
     maths = m;
     physics = p;
     return 0;
}

class percentage : public marks{
    public:
    void display();
};

void percentage :: display(){
     cout<<"The percentage of the student is :"<<(maths + physics)/2<<endl;
}
int main(){
    percentage apurva;
    apurva.set_data(398);
    apurva.get_data();
    apurva.ur_marks(45.5 , 50.6);
    apurva.display();
    return 0;
}