#include<iostream>
using namespace std;
void reverse(string &str,int i,int j){
    cout<<"the string is now "<<str<<endl;
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--; 
    reverse(str,i,j);
}

int main(){
    string name="prashant";
    reverse(name,0,name.length()-1); 
    cout<<"the reverse string is "<<name<<endl;
    return 0;
}