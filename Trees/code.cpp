#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
        return false;
        break;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
     int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
   vector<int>prime;
   vector<int>nonprime;
   for(int i=0;i<n;i++){
    if(check(array[i])){
        prime.push_back(array[i]);
    }
    else{
        nonprime.push_back(array[i]);
    }
   }
   for(int i=0;i<2;i++){
    cout<<prime[i];
   }
    return 0;
}