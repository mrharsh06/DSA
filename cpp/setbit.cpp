#include<iostream>
using namespace std;
int setbitA(int a){
    int count=0;
    while(a!=0){
        if(a&1){
            count++;
            
        }
           a= a>>1;
    

    }
    return count;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a;
    cin>>b;
    int ans1=setbitA(a);
    
    int ans2=setbitA(b);
    int answer=ans1+ans2;
    cout<<"the total setbit in a and b is "<<answer;

    
   return 0;
}