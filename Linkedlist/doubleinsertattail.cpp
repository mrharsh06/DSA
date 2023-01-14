#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *prev;
Node *next;

//constructor
Node(int d){
    this->data=d;
    this->prev=NULL;
    this->next=NULL;
}
};
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void InsertAtTail(Node *&tail,int d){
    Node *temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void InsertAthead(Node *&head,int data){
    Node *temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void InsertAtposition(Node *&tail,Node *&head,int position,int data){
    if(position==1){
        InsertAthead(head,data);
        return;
    }
    Node *temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        InsertAtTail(tail,data);
        return;
    }
    Node *nodetoinsert =new Node(data);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}

int main(){
    Node* Node1=new Node(10);
    Node* tail=Node1;
    Node* head=Node1;
    print(head);
    InsertAtTail(tail,15);
    print(head);
    InsertAtTail(tail,25);
    print(head);
    InsertAtTail(tail,35);
    print(head);
    InsertAtposition(tail,head,3,100);
    print(head);
    
    
    return 0;
}