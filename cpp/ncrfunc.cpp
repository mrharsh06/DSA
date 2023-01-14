#include<iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

int ncr(int n,int r){
    int numerator=factorial(n);
    int denominator=factorial(r)*factorial(n-r);
    return numerator/denominator;
}
int main(){
    int n,r;
    cout<<"enter the value of n and r"<<endl;
    cin>>n>>r;
    cout<<"the answer is "<<ncr(n,r);
    return 0;
}