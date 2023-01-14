#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int j=1;
        while(j<=n){
            char value='A'+row+j-2;
            cout<<value;
            j=j+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}