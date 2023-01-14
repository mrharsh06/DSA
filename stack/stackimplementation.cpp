#include<iostream>
using namespace std;
class stack{
//properties
public:
    int top;
    int *arr;
    int size;
//behaviour
stack(int size){
    this->size=size;
    arr=new int(size);
    top=-1;
}
void push(int element){
     if(size-top>1){
         top++;
         arr[top]=element;
     }
     else{
         cout<<"stack is empty"<<endl;
     }

}
void pop(int element){
    if(top>=0)
    top--;
    else
    cout<<"stack underflow"<<endl;

}
int peek(){
if(top>=0)
return arr[top];
else{
    return -1;
}
}
bool IsEmpty(){
if(top==-1){
return true;
}
else{
return false;
}
}

};
int main()
{
stack st(5);
st.push(22);
st.push(42);
st.push(56);
st.push(38);

cout<<"the top element of stack is:"<<st.peek()<<endl;

st.pop(38);
cout<<"the top element of stack is:"<<st.peek()<<endl;
st.pop(56);
st.pop(42);
if(st.IsEmpty()){
    cout<<"Stack is empty "<<endl;
}
    else{
        cout<<"Stack is not Empty"<<endl;
    }
    cout<<"the top element of stack is:"<<st.peek()<<endl;

return 0;
}
