#include<iostream>
using namespace std;
class Human{
    public:
string Gender;
int age=26;
int height;
};
class Men:public Human{
 public:
string name;
int weight;
};
//here i do multi level inheritance like a chain
class Hero:public Men{
    public:
    void print(){
        cout<<"I am hero "<<endl;
    }
};

int main(){
    Hero Akshay;
    Akshay.age;
    Akshay.print();
    Akshay.name;
    return 0;
}