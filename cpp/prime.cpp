#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"number is not prime"<<endl;
        }
        else{
            cout<<"number is prime"<<endl;
        }
        i=i+1;
        }
    
    return 0;
}