#include<iostream>
using namespace std;
char getlower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkpallindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(getlower(name[s])!=getlower(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"name is pallindrome or not "<<checkpallindrome(name,4)<<endl;
    cout<<getlower('A');
    return 0;
}