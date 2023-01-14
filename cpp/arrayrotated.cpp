#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>&array,int k){
vector<int>temp(array.size());
for(int i=0;i<array.size();i++){
    temp[(i+k)%array.size()]=array[i];
}
array=temp;
}
void print(vector<int>array,int n){
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>array={1,5,6,7,8,4};
    int k;
    cout<<"enter the value of k for which the array is to rotated"<<endl;
    cin>>k;
    rotate(array,k);
    print(array,6);
    return 0;
}