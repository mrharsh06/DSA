#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"enter the number upto which you want to run fibonacci series"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    cout<<" "<<a;
    cout<<"  "<<b<<" ";
    for(int i=0;i<n-2;i++){  //as two number is already printed in form of a and b
       
        int nextnum=a+b;
        cout<<nextnum<<"  ";
        a=b;
        b=nextnum;
    }
    return 0;
}