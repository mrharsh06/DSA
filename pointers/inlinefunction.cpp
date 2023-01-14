#include<iostream>
using namespace std;
inline int getmax(int &m,int &n){
    //when the function is single line we can use inline function
return (m>n)?m:n;;
}

int main(){
    //we want to calculate maximum out of 2
    int a;
    cin>>a;
    int b;
    cin>>b;
   /* if(a>b){
        cout<<"a is greater"<<endl;
    }
        else{
            cout<<"b is greater"<<endl;
        } */

    //instead of using such big code we can use turniary function

    //int ans=(a>b)?a:b;//
    cout<<"the maximum number is "<<getmax(a,b);
    
    
    return 0;
}