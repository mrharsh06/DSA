#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int array[8]={0,1,5,25,36,57,59,60};
    int odd[5]={1,5,9,12,15};
   int answer= binarysearch(array,8,59);
   int oddanswer= binarysearch(odd,5,12);
    cout<<"the 59 is present in the "<<answer<<" index"<<endl;
    cout<<"the 12 is present in the "<<oddanswer<<" index"<<endl;
    return 0;
}