#include<iostream>
using namespace std;
bool iseven(int n){
    if(n%2==0){
         return 1;
    }
    
    return 0;
}
int main(){
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    if(iseven(a)){
        cout<<"the number is even";
    }
    else{
        cout<<"the number is odd";
    }
    
    return 0;
}