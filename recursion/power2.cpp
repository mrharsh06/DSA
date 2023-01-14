#include<iostream>
using namespace std;
int pow(int n){
    //base case
    if(n==0)
    return 1;
   /* int smallproblem=pow(n-1);   //for learning purpose
    int bigproblem=2*smallproblem;
    return bigproblem; */
    return 2*pow(n-1);  //recursive relation
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int ans=pow(n);
    cout<<"the answer is " <<ans;
}