//Iterative Approach
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head==NULL||head->next==NULL){
        return head;
    }
    LinkedListNode<int> *prev=NULL;
    LinkedListNode<int>  *curr=head;
    LinkedListNode<int> *forword=NULL;
    while(curr!=NULL){
        forword=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forword;
    }
    return prev;
}

//