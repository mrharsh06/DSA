#include<iostream>
using namespace std;
void print(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void sort(int array[],int n){
    int left=0;
    int right=n-1;
        while(left<right){
            while(array[left]==0 && left<right){
                left++;
            }
            while(array[right]==1 && left<right){
                right--;
            }
            if(array[left]==1 && array[right]==0 && left<right){
            swap(array[left],array[right]);
            left++;
            right--;
            }
        }
}

int main()
{
    int arr[8]={1,0,0,1,0,1,1,0};
    sort(arr,8);
    print(arr,8);
    return 0;
}