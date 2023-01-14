#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int num;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"number is not prime"<<endl;
        }
        else{
            cout<<"number is prime"<<endl;
        }
    }
    return 0;
}