#include<iostream>
using namespace std;
struct Node{
    int val;
    Node *left;
    Node *right;
};

Node *newNode(int d){
    Node *temp=new Node;
    temp->val=d;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void inorder(struct Node *root){
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void preorder(struct Node *root){
    if(root==NULL)
    return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct Node *root){
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}
int main(){
    //tree bna rha hu
    struct Node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    cout<<"The inorder traversal is:";
        inorder(root);
        cout<<endl;
    cout<<"The preorder traversal is:";
        preorder(root);
        cout<<endl;
    cout<<"The postorder traversal is:";
        postorder(root);
        cout<<endl;
    return 0;
}