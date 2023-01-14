#include<iostream>
using namespace std;
bool Issorted(int *arr,int size){
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    //base case
    if(size==0||size==1){
    return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
           //recursive relation   
        bool remainingpart=Issorted(arr+1,size-1);
        return remainingpart;
    }

}

int main(){
     int arr[5]={1,2,8,5,6};
     bool ans=Issorted(arr,5);
     if(ans){
         cout<<"array is sorted"<<endl;
     }
     else{
         cout<<"array is not sorted" <<endl;
     }
    return 0;
}