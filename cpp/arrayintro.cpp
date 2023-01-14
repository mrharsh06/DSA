#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"Printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    } 
    cout<<"printing done";
}
int main(){

    int one[3]={1,2,3};
    int n=3;
    printArray(one,3);

    int two[10]={1,2,3,4,5,6,7};
    printArray(two,10);
    
    //initialiaing the all elements with zero

    int third[5]={0};
    printArray(third,10);

    //initialiaing the all elements with any integer not possible with this method
     int fourth[5]={1};
    printArray(fourth,5);
    
     /*int n=10;
    int number[10]={1};
    //cout<<"the value at 14 index is"<<number[14];
        //cout<<"the value at 20 index is"<<number[21];
    for(int i=0;i<n;i++){
    cout<<number[i]<<endl;
    }
    cout<<"everything goes well";*/
    return 0;
}