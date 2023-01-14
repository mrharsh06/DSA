#include<iostream>
using namespace std;
//array print karne apne hisaab k index start se
//start=2 is default argument hain jo yeah btayega ki agar iski koi vcalue function main pass na kraye
//toh yeah by defalut uski value 2 man lega is case main

//note-: default argument ko hmesha right side main likhte hain
void print(int arr[],int size,int start=2){
    for(int i=start;i<size;i++){
        cout<<arr[i];
        cout<<endl;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    
    print(arr,5);
    
    return 0;
}