#include<iostream>
using namespace std;
//it is parent class
class student{
public:
int age;
int height;
int weight;
void funca(){
    cout<<"I am student a "<<endl;
}
};

class studentA:public student{
public:

};

class studentB:public student{
    public:
    void funcb(){
        cout<<"I am student b "<<endl;
    }
};
int main(){

    //here we use one parent class and two child class where we can access the value in both of parent class
    
    studentA harsh;
    harsh.funca();
    studentB prashant;
    prashant.funca();
    return 0;
}