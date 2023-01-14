#include<iostream>
using namespace std;
class Human{
public:
int age;
int height;
int weight;
public:
int getheight(){
return this->height;
}
void setheight(int a){
    this->height=a;
}
};
//making of child class male in which we do inheritance
class Male : public Human{
    public:
    string color;

    void print(){
        cout<<"men is sleeping"<<endl;
    }

};
int main(){
   Male robin;
   cout<<"the value of robin height is : "<<robin.getheight()<<endl;
    robin.setheight(85);
    cout<<robin.height<<endl;
    robin.print();
    return 0;
}