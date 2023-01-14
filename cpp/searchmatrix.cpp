#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int key,int row,int col){
     for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
           if(key==arr[row][col]){   //check key is present or not
               return 1;
           }
        }
    }
    return 0;
}
int main(){
    int arr[3][4];
    //take input
    cout<<"enter the elements"<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
       
    }

     for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
       
    }
    cout<<"Enter the key you want to check"<<endl;
    int key;
    cin>>key;
    if(ispresent(arr,key,3,4)){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }
    return 0;
}