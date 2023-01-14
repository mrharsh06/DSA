#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    
    //constructor called
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

};
void Inserathead(Node *&head,int data){
    Node *temp=new Node(data);
    temp->next=head;
    head=temp;

}
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


void reverse(Node *&head){
    Node *curr=head;
    Node *prev=NULL;
    Node *forword=NULL;
    while(curr!=NULL){
        forword=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forword;
    }
    head=prev;
}

int main(){
    Node *node1=new Node(10);
    Node *head=node1;
    print(head);
    Inserathead(head,15);
    print(head);
     Inserathead(head,25);
    print(head);
     Inserathead(head,35);
    print(head);
    reverse(head);
    print(head);
    return 0;
}