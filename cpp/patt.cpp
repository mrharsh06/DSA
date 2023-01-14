#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int j=1;
        while(j<=n-row+1){
            cout<<j;
            j=j+1;
        }
        int star=row;
        while(star<=(2*row-2)){
            cout<<"**";
            star++;
        }
         int col =1;
        while (col<=n-row+1)
        {
            cout << (n-row-col+2);
            col++;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}