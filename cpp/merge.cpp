#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while( i<n&&j<m){
        if(arr1[i]>arr2[j]){
            arr3[k]=arr2[j];
            j++;
            k++;
             }
             else{
                 arr3[k]=arr1[i];
                 i++;
                 k++;
                 }
    }
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        i++;
    }
   
}
void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int arr1[5]={1,3,5,8,10};
    int arr2[3]={3,5,9};
    int arr[8]={0};
    merge(arr1,5,arr2,3,arr);
    print(arr,8);
    return 0;
}