#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m){
    int i=0;
    int j=0;
    while( i<n&&j<m){
        if(arr1[i]>arr2[j]){
             arr1[i]=arr2[j];
            j++;
           i++;
             }
    }
            
    while(i<n){
       break;
    }
   
   
}
void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int arr1[8]={1,3,5,8,10,0,0,0};
    int arr2[3]={3,5,9};
    merge(arr1,8,arr2,3);
    print(arr1,8);
    return 0;
}