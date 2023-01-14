#include<iostream>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapalternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
    cout<<endl;
}
int main(){
    int even[8]={1,2,3,5,6,8,5,10};
    int odd[5]={5,4,10,6,8};
    swapalternate(even,8);
    print(even,8);

    swapalternate(odd,5);
    print(odd,5);

    return 0;
}