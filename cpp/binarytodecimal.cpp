#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int n;
    cout<<"Enter the binary number"<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int digit=n%10;
        if(n==1){
            ans=digit*pow(2,i)+ans;
        }
        n=n/10;
        i++;

    }
    cout<<"the answer is "<<ans<<endl;
}