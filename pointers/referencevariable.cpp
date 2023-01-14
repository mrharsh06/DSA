#include<iostream>
using namespace std;
void update1(int n){   //this function made a copy of i but in some other memory
n=n+1;                 //this is call by value due to which in main function value of i doesn't change
}
void update2(int &n){   //this function point out exact same memory but different variable name
//due to which the value of i increases in main function if we increse the value in this function
    n=n+1; 
}

int main(){
    int i=5;
    int &j=i; //how to initialise reference variable
    cout<<i<<endl;
    cout<<j<<endl;
    i=i+1;
    cout<<i<<endl;
    cout<<++j<<endl;
    update1(i);   
    cout<<"the value after of i after call by value "<<i<<endl; 
    //value of i doesn't change in after calling update function
    update2(i);
    cout<<"the value of i after call by reference is "<<i<<endl;
    //this time value of i increases as call by reference 
    return 0;
}