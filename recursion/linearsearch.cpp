#include<iostream>
using namespace std;
void print(int arr[],int n){
    //print krake deklh rhe hain
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}
bool linearsearch(int arr[],int size,int k){
    print(arr,size);
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        //recursive relation
        return linearsearch(arr+1,size-1,k);
    }
}

int main(){
    int arr[5]={2,5,3,7,8};
    int key=10;
    if(linearsearch(arr,5,key)){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }
    
    return 0;
}