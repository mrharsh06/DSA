#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int j=1;
         char value='A'+n-row;
        while(j<=row){
            cout<<value;
            value=value+1;
            j=j+1;
        }
        cout<<endl;
        row=row+1;

    }
    return 0;
}