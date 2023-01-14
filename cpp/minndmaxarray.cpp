#include<iostream>
#include<climits>
using namespace std;
int maxArray(int number[],int size) 
{
   int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        /*if(maxi<number[i]){
            maxi=number[i];
        }*/
        maxi=max(maxi,number[i]);
    }
    return maxi;
}
    int minArray(int number[],int size) 
{
    int min=INT_FAST64_MAX;
    for(int i=0;i<size;i++){
        if(min>number[i]){
            min=number[i];
        }

    }
    return min;

    

}
int main(){
    int size;
    cout<<"enter the size of an array"<<endl;
    cin>>size;
    int number[100];
    for(int i=0;i<size;i++){
        cin>>number[i];
    }
    cout<<"the maximum number in an array is "<<maxArray(number,size)<<endl;
      cout<<"the minimum number in an array is "<<minArray(number,size)<<endl;
    return 0;
}