#include<iostream>
using namespace std;
int AP(int n){
    int Ap=(3*n +7);
    return Ap;
}
int main(){
    int n;
    cout<<"enter the nth term of an AP"<<endl;
    cin>>n;
    cout<<AP(n);
    return 0;
}