#include<iostream>
using namespace std;

int main(){
    int array[4][3]={0,1,2,3,4,5,6,7,8,9,10,11};
   
   /* for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>array[j][i];
        }
    }
     for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
*/
for(int row=0;row<4;row++){
    for(int col=0;col<3;col++){
        cout<<array[row][col]<<" ";
    }
    cout<<endl;
}
    return 0;
}