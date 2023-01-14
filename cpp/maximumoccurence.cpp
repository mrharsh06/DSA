#include<iostream>
using namespace std;
char count(string s){
    int array[26]={0};
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            array[s[i]-'a']++;
        }
        else if(s[i]>='A' && s[i]<='z'){
            array[s[i]-'A']++;    //increase the index which is initially zero 
        }
    }
      int max=0;
      for(int i=1;i<26;i++){
          if(array[i]>array[max]){
             max=i; 
      }          
      }
      return('a'+max);                                      

    
}

int main(){
  string s="conText";
  cout<<"the maximum character in a string is "<<count(s);
    return 0;
}