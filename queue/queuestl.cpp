#include<iostream>
using namespace std;
#include<queue>
int main(){
    queue<int> q;
    q.push(8);
    q.push(12);
    q.push(18);
    cout<<"the size of queue is : "<<q.size()<<endl;
    q.pop();
   cout<<"the size of queue is : "<<q.size()<<endl;
   cout<<"the front element of queue is : "<< q.front()<<endl;
   if(q.empty()){
       cout<<"queue is empty"<<endl;
   }
   else{
       cout<<"queue is not empty"<<endl;
   }
   
}