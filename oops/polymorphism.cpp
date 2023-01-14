#include<iostream>
using namespace std;
class A{
public:

//yha par hmne do function ka naam same rakh kar chlaya lekin vo chal nhe payega 
//isliye hme argument main kuch change karna pdega
void print(){
    cout<<"A ko print kar do isme: "<<endl;
}
//void print()

//ab argument change karne par yeah chal gaya isko function overloading bolte hain
void print(string name){
    cout<<"isme bhe A ko print kar do "<<endl;
}
};
int main(){
    A harsh;
    harsh.print();
    harsh.print("hum");
    return 0;
}