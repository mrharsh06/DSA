#include<iostream>
using namespace std;
int sum(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
     cout<<endl;
     //base case
    if(size==0){
        return 0;
    }
    int answer=sum(arr,size-1)+arr[size-1];
    cout<<answer<<endl;
    return (answer);
    /*if(size==1){
        return  arr[0];
    }
        int remainingsum=sum(arr+1,size-1);
        int answer= arr[0]+remainingsum;
        cout<<answer<<endl;
        return answer; */
        
    
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
   int ans= sum(arr,size);
   cout<<"the sum of elements of an array is "<<ans;
    return 0;
}