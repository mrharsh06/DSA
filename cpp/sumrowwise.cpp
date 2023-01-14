#include<iostream>
using namespace std;
void rowsum(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
         int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" "<<endl;
    }
    cout<<endl;
}
int maxsum(int arr[][4],int m,int n){
    int maxi=0;
    for(int row=0;row<m;row++){
        int sum=0;
        for(int col=0;col<n;col++){
            sum+=arr[row][col];
        }
        maxi=max(maxi,sum);
    }
    return maxi;
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

  rowsum(arr,3,4);

  int maximumsum=maxsum(arr,3,4);
  cout<<"the maximum sum is "<<maximumsum;


    return 0;
}
