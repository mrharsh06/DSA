#include<iostream>
using namespace std;

int part(int arr[],int s,int e){
int pivot=arr[s];
int count=0;

for(int i=s+1;i<=e;i++){
    if(arr[i]<=pivot){
        count++;
    }
}
//place pivot element or one element on the right position
int pivotindex=s+count;
//isse pivot element apni sahe position par pauch gaya hain
swap(arr[pivotindex],arr[s]);

//left aur right vale condition dekh lo
//left main pivot element se choote element hone chahiye
//right main bde hine chahiye
int i=s;
int j=e;
while(i<pivotindex && j>pivotindex){

    while(arr[i]<pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }

if(i<pivotindex && j>pivotindex){
    swap(arr[i++],arr[j--]);
}

}
return pivotindex;
}
void quicksort(int arr[],int s,int e){
    //base case
    if(s>=e)
    return;
//index return krega jispr hmne ek elment ko she position par daal diya hain
int p=part(arr,s,e);
//recursive relation

//left vala sort kar liya
quicksort(arr,s,p-1);

//right vala sort karlo
quicksort(arr,p+1,e);
}
int main(){
    int arr[10]={5,15,2,6,1,9,10,10,9,1};
    int n=10;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}