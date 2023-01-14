#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void InsertAtnode(Node *&tail,int element,int data){
    if(tail==0){
        // agar list empty ho tab yeah karna hain
        Node *temp=new Node(data);
        tail=temp;
        temp->next=temp;
    }
    else{
        //element is present ans list is not empty
        Node *curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        // curr is found element vala node mil gaya
        Node *temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp; 

    }
}

void print(Node*tail){
    Node *temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
        while(tail!=temp);
            cout<<endl;

    }
    void deletenode(Node *tail,int element){
        if(tail==0){
            cout<<"Check tou linked list it is already empty";
        }
        else{
            Node *prev=tail;
            Node *curr=prev->next;
            while(curr->data!=element){
                prev=curr;
                curr=curr->next;
            }
            prev->next=curr->next;
            if(tail==curr){
                tail=prev;
            }
            curr->next=NULL;
            delete curr;
        }
    }

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
        else{
            return false;
        }


    }

int main(){
 Node *tail=NULL;
InsertAtnode(tail,5,3);
print(tail);
InsertAtnode(tail,3,7);
print(tail);
InsertAtnode(tail,7,8);
print(tail);
InsertAtnode(tail,8,10);
print(tail);
InsertAtnode(tail,8,9);
print(tail);
if(Iscircular){
    cout<<"LINKED list is circular"<<endl;
}
return 0;
}