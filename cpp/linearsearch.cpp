#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10]={0,1,2,3,-13,5,0,6,8,-32};
    cout<<"Enter the number you want to search"<<endl;
    int key;
    cin>>key;
    bool answer =linearsearch(arr,10,key); 
    if(answer){
        cout<<"number is present in an array "<<endl;
    }
    else{
        cout<<"number is not present "<<endl;
    }

    return 0;
}