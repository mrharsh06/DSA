#include<iostream>
using namespace std;
void saydigit(int n,string name[]){
    //base case
    if(n==0)
    return;
    int digit=n%10;
     n=n/10;
     //recursive relation
    saydigit(n,name); 
    cout<<name[digit]<<" ";
}

int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","Eight","nine"};
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    saydigit(n,arr);
    return 0;
}