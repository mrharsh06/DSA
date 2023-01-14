#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int>s;
s.push(2);
s.push(3);
s.push(5);
cout<<"the top element of stack is "<<s.top()<<endl;
s.pop();
cout<<"the top element of stack is "<<s.top()<<endl;
if(s.empty()){
    cout<<"the stack is empty"<<endl;
}
else{
    cout<<"the stack is  not empty"<<endl;
}
cout<<"the size of stack is "<<s.size()<<endl;
}
