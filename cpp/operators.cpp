#include<iostream>
using namespace std;

int main(){
    int a=1;
    int b;
    int c;
    b=(++a);
    c=(a++);
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<a;
    return 0;
}