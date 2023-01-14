#include<iostream>
using namespace std;
void print(int n){
    //base case
    if(n==0)
    return;
   /* print(n-1);  //head recurssion
    cout<<n<<endl; */
    cout<<n<<endl;
    print(n-1);  //tail recurssion
}

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    print(n);
    return 0;
}