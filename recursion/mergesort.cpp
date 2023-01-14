#include<iostream>
using namespace std;
void merge(int array[],int s,int e){
    int mid=s+(e-s)/2;
    //do array create kar lo
    int len1=mid-s+1;  //left array ki length
    int len2=e-mid; //right array ki length
    int *first=new int[len1];
    int *second=new int[len2];  //dynamic memory main ho rhe hain kyoki hme value starting main pta nhe hain

//main array ki values ko copy kar lo dono array main
int mainindex=s;
for(int i=0;i<len1;i++){
    first[i]=array[mainindex++];
}
mainindex=mid+1;
for(int i=0;i<len2;i++){
    second[i]=array[mainindex++];
}
//merge kar do dono array ko
int index1=0;
int index2=0;
 mainindex=s;
while(index1<len1 && index2<len2){
    if(first[index1]<second[index2]){
        array[mainindex++]=first[index1++];
    }
    else{
        array[mainindex++]=second[index2++];
    }
}
while(index1<len1){
      array[mainindex++]=first[index1++];
}
while(index2<len2){
      array[mainindex++]=second[index2++];
      delete []first;
      delete []second;

}
}
void sortarray(int array[],int s,int e){
    //base case
    int mid=s+(e-s)/2;
    if(s>=e){
        return;
    }
    //right array ko sort kar de
    sortarray(array,mid+1,e);
    //left part sort karna hain
    sortarray(array,s,mid);
    merge(array,s,e);

}
int main(){
    int arr[5]={11,5,4,0,6};
    sortarray(arr,0,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}