#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;
    if((ch>='a')&&(ch<='z')){
        cout<<"the character is small alphabet";
    }
   else if((ch>='A')&&(ch<='Z')){
       cout<<"the character is Large alphabet";
   }
   else{
       cout<<"the character is numeric"<<endl;
   }
    return 0;
}