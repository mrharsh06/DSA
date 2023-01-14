#include<iostream>
using namespace std;
class sports{
public:
int types;
int player;
string sportsname;
};

class study{
public:
int standard;
string favouritesubject;
int rollno;
};

//here we inherit both sports and study class in a student class

class Student:public sports,public study{
public:
 void print(){
cout<<"I love to play and study together: "<<endl;
 }
};

int main(){
    Student harsh;
    harsh.player;
    harsh.standard;
    harsh.print();
  
    return 0;
}