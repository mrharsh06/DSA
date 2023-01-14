#include<iostream>
using namespace std;
bool pallindrome(string str,int i,int j){
    //base case
    //is condition ka matlab hain ki string check krli hain aur rqual hain
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
 return pallindrome(str,i+1,j-1);
}

int main(){
    string name="abcdcba";
    if(pallindrome(name,0,name.length()-1)){
        cout<<"string is palindrome"<<endl;
    }
    else{
        cout<<"string is not pallindrome"<<endl;
    }
   return 0;
}