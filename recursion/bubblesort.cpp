#include<iostream>
using namespace std;
void sortarray(int arr[],int n){
    //base case
    if(n==0 || n==1){
        return;
    }
    //ek case solve kar do baaki recursion apne aap kar lega
    //last vale index p largest element paucha do
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursive relation
    //n-1 isliye kiya hain quoki ek element apni sahe jagah par pauch gaya hain
    sortarray(arr,n-1);
}

int main(){
    int arr[5]={11,5,9,8,7};
    sortarray(arr,5);
    for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}