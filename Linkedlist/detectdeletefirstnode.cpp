#include<iostream>
using namespace std;
#include<map>
class Node{
public:
int data;
Node *next;
Node(int d){
    this->data=d;
    this->next=NULL;
}
};
void Insertathead(Node *&head,int d){
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}
void Insertattail(Node *&tail,int d){
    Node *temp=new Node(d);
    temp->next=NULL;
    tail=temp;
}
void print(Node *head){
    Node *temp=head;
    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
   cout<<endl;
}

bool detectloop(Node *head){
    if(head==NULL){
        return false;
    }
    Node *temp=head;
    map<Node*,bool>visited;
    while(temp!=NULL){
    if(visited[temp]==true)
    return true;
    visited[temp]=true;
     temp=temp->next;
}
return false;
}
Node* floyddetectionloop(Node *head){
    if(head==NULL){
        return NULL;
    }
    Node*fast=head;
    Node *slow=head;
    while(fast!=NULL && slow!=NULL){
        fast=fast->next;
        if(fast!=NULL){
        fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            cout<<"Loop is present "<<slow->data<<endl;
            return slow;
        }
        
    }
    return NULL;
}
Node *getstartingnode(Node *head){
    if(head==NULL){
        return NULL;
    }
    Node *intersection=floyddetectionloop(head);
    Node *slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
void deleteloop(Node *head){
    if(head==NULL)
    return;
    Node *first=getstartingnode(head);
    Node *temp=first;
    while(temp->next!=first){
        temp=temp->next;
    }
    temp->next=NULL;
    return;

}

int main(){
    Node *Node1=new Node(10);
    Node *head=Node1;
     Node *tail=Node1;
  Insertathead(head,20);
    print(head);
   Insertathead(head,30);
    print(head);
    Insertathead(head,40);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
   tail->next=head->next;
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
  if(detectloop(head)){
      cout<<"LOOP is detected "<<endl;
  }
  else{
      cout<<"LOOP is not present"<<endl;
  }
  if(floyddetectionloop==NULL){
      cout<<"loop is not present"<<endl;
  }
   else{
       cout<<"loop is present"<<endl;
   }

   Node *firstvalue=getstartingnode(head);
   cout<<"the value of first node is "<<firstvalue->data<<endl;

   deleteloop(head);
   print(head);


if(detectloop(head)){
      cout<<"LOOP is detected "<<endl;
  }
  else{
      cout<<"LOOP is not present"<<endl;
  }

    return 0;
}