#include<iostream>
using namespace std;
int firstoccurence(int array[],int size,int key){
    int s=0;
    int e=size-1;
    int answer=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(key==array[mid]){
            answer=mid;
            e=mid-1;
        }
        else if(key>array[mid]){
            s=mid+1;
        }
        else if(key<array[mid]){

            e=mid-1;
        }
         mid=s+(e-s)/2;
    }
    return answer;
}
int lastoccurence(int array[],int size,int key){
    int answer=-1;
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(key==array[mid]){
            answer=mid;
            s=mid+1;
        }
        else if(key>array[mid]){
            s=mid+1;
        }
          else if(key<array[mid]){

            e=mid-1;
        }
         mid=s+(e-s)/2;
    }
    return answer;
}
int main(){
    int even[10]={0,1,2,3,4,4,4,4,4,5};
    int ans1=firstoccurence(even,10,4);
    int ans2=lastoccurence(even,10,4);
    int total;
     cout<<"the first occurence of 4 is in index " <<ans1<<endl;
     cout<<"the first occurence of 4 is in index " <<ans2<<endl;
     total=(ans2-ans1+1);
     cout<<total<<endl;

    return 0;
}