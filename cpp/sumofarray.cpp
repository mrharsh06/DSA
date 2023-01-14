#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
 
    return sum;
}
   /* void print(int arr[],int size)
    {
        for(int i=0;i<size;i++){
            cout<<arr[i]<<endl;
        }
        cout<<endl;10
        
    }*/
    

int main(){
    int arr[10];
    cout<<"enter the total elements of an array"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sum(arr,n);
   
    
    return 0;
}