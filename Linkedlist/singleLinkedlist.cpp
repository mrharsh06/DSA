#include<iostream>
#include<map>
using namespace std;
class Node{
public:
int data;  //it is node's data
Node* next; //it is node's address

//create a constructor
Node(int data){
    this ->data=data;
    this ->next=NULL;
}
};
//insert karane k liye ek function bna rhe hain
void insertAthead(Node* &head,int d){
   // new node create kar rhe hain
   Node * temp=new Node(d);
   temp->next = head;
   head=temp; 
}
//agar last main insert karna hain toh
void insertAttail(Node * &tail,int d){
    Node *temp=new Node(d);
    temp -> next=NULL;
    tail=temp;

}

void print(Node * &head){
     Node *temp=head;
     while(temp!=NULL){
         cout<<temp->data<<"  ";
         temp=temp->next;
     }
}

//to check circular linked list type
 bool Iscircular(Node *head){
        if(head==NULL){
            return true;
        }
        Node *temp=head->next;
        while(temp!=NULL && temp!=head){
            temp=temp->next;
        }
        if(temp==head){
            return true;
        }
 return false;
 }
 bool loopdetect(Node *head){
    if(head==NULL)
        return false;
    map<Node*,bool>visited;
    Node *temp=head;
    while(temp!=NULL){
        //cycle is present
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
 }

int main(){
    //create a new node
    Node* node1= new Node(10);  //here we create a new node in dynamic memory i.e heap

    //head pointed to node1
    Node *head=node1;
    Node *tail=node1;
   // print(head);
   print(head);
   // insertAthead(head,12);
    //print(head);
    insertAttail(tail,12);
    print(tail);
   // insertAthead(head,15);
    //print(head);
    insertAttail(tail,15);
    print(tail);
    insertAttail(tail,22);
    print(tail);
    
    /*if(Iscircular){
        cout<<"the list is circular"<<endl;
    }
    else{
        cout<<"not circular";
    }
    */
    return 0;
}