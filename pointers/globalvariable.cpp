#include<iostream>
using namespace std;
//global variable kya hain
//global variable vo variable hain jisko main kise bhe function main use kar skta hu
//kise bhe function main
int n=10;
void fun1(int a){
cout<<n<<endl;
n=n+1;

}

int fun2(int b){
    cout<<n;
    return 0;
}
int main(){
    int i=5;
    cout<<n<<endl;//value before
     fun1(i);
     cout<<n<<endl; //value after updation in func1
     //that is why we are not using global variable because value get affected in any of the function
     //whenever we want to use same variable then we should use reference variable
    return 0;
}