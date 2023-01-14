#include<iostream>
using namespace std;

int main(){
    char op;
    int a,b;
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    cout<<"enter the operator on which you want to operate these number"<<endl;
    cin>>op;
    switch(op){
        case '+':
        cout<<"addition is "<<a+b;
        break;
        case'-':
        cout<<"subtraction is"<<a-b;
        break;
        case'*':
        cout<<"Product is"<<a*b;
        break;
        case'/':
        cout<<"division is"<<a/b;
        break;
        default:
        cout<<"we are unable to operate this"<<endl;



    }

    return 0;
}