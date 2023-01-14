#include<iostream>
using namespace std;
int findpivot(int arr[],int size){

   int s=0;
   int e=size-1;
   int mid=s+(e-s)/2;
   while(s<e){
       if(arr[mid]>=arr[0]){
           s=mid+1;
       }
       else{
           e=mid;
       }
       mid=s+(e-s)/2;
   }
   return s;
}
int main(){
    int pivot[5]={3,7,8,5,1};
    cout<<"the value of pivot is"<<findpivot(pivot,5)<<endl;
    return 0;
}