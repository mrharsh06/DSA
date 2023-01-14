#include<iostream>
using namespace std;
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }

}
   int length(char name[]){
       int count=0;
       for(int i=0;name[i]!='\0';i++){
           count++;
       }
       return count;
   }
int main(){
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    //it willp print only  upto null character and if you use space tab aur enter then it will not print 
    //afterword character
    cout<<"your name is "<<name<<endl;
    int len=length(name);
    cout<<"Length of your name is "<<len<<endl;
    reverse(name,len);
    cout<<"reverse of your name is "<<name;
    return 0;
}