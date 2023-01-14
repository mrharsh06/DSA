#include<iostream>
using namespace std;
class Node{
public:
int data;
Node * next;
//constructor
 Node(int data){
    this->data=data;
    this ->next=NULL;
}
//destructor
~Node(){
    int value=this->data;
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
    }
    cout<<"memory is free for node with data:"<<value<<endl;
}
};
void insertAthead(Node * &head,int d){
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertAttail(Node *&tail,int d){
    Node *temp=new Node(d);
    temp->next=NULL;
    tail=temp;
}
void insertaAtposition(Node * &tail,Node * & head,int position,int d){
    //this is used to insert the node at head position
    if(position==1){
        insertAthead(head,d);
        return;
    }
    Node *temp= head;
    //here this function update the tail of linked list or to add node at the end
    if(temp->next==NULL){
        insertAttail(tail,d);
        return;
    }
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    } 
    //creating an node for d
    Node*nodeToinsert=new Node(d);
    nodeToinsert->next=temp->next;
    temp->next=nodeToinsert;
}
void deletenode(int position,Node *&head){
//deleting first or start node
if(position==1){
    Node*temp=head;
    head=head->next;
    //memory free of starting node
    temp->next=NULL;
    delete temp;
}
else{
    //deleting any middle node or last node
    Node *curr=head;
    Node *prev=NULL;
    int cnt=1;
    while(cnt<position){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}
}
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
}
int main(){
Node *node1=new Node(10);
Node *head=node1;
Node *tail=node1;
print(head);
insertAthead(head,15);
print(head);
insertAthead(head,20);
print(head);
insertaAtposition(tail,head,4,6);
print(head);
cout<<"head is: "<<head->data<<endl;
cout<<"Tail is: "<<tail->data<<endl;
deletenode(2,head);
print(head);
    return 0;
}