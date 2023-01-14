#include<iostream>
using namespace std;
int getsum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;

}

int main(){
    int n;
    cin>>n;
    //variable size array
    int *arr=new int[n];
    //taking input from user
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=getsum(arr,n);
    cout<<"answer of sum of element is "<<ans<<endl;



    
    return 0;
}