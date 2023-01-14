#include<iostream>
using namespace std;
class Human{
public:
int age=6;
int height=25;
int weight;
};
class Men:public Human{
 public:
string colour;
int age=5;
void print(){
    cout<<"i am men "<<endl;
}
};
int main(){
    Men Harsh;
     Harsh.height;
     Harsh.print();
     Harsh.age;
    
    return 0;
}