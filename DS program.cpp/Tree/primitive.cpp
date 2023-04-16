#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node * left;
    struct node * right;
};
struct node * newnode(int data){
    struct node *n1=(struct node *)malloc(sizeof(struct node));
    n1->data=data;
    n1->left=NULL;
    n1->right=NULL;
    return n1;
}
//

void inorder(struct node *n){
    if(n==NULL)
        return;
    inorder(n->left);
    cout<<n->data<<" ";
    inorder(n->right);
}
//

void preorder(struct node *n){
    if(n==NULL)
        return;
    cout<<n->data<<" ";
    preorder(n->left);
    preorder(n->right);
}
//

void postorder(struct node *n){
    if(n==NULL)
        return;
    postorder(n->left);
    postorder(n->right);
    cout<<n->data<<" ";
}
//

int height(struct node * root){
    int left=0,right=0;
    if(root==NULL)
        return 0;
    else{
        left=height(root->left);
        right=height(root->right);
        if(left>right)
            return left+1;
        else{
            return right+1;
        }

    }
}
//

int nodescount(struct node *root){
    int left=0,right=0;
    if(root==NULL)
        return 0;
    else{
        return (1+nodescount(root->left)+nodescount(root->right));
    }
}
//

int sum(struct node * root){
    int sumleft=0,sumright=0;
    if(root==NULL)
        return 0;
    else{
        sumleft+=sum(root->left);
        sumright+=sum(root->right);
        return(root->data+sumleft+sumright);
    }
}
//

int countone(struct node * root){
    if(root==NULL)
        return 0;
    else{
        if(root->left!=NULL && root->right==NULL)
            return countone(root->left)+1;
        else if(root->left==NULL && root->right!=NULL)
            return countone(root->right)+1;
        else
            return countone(root->left)+countone(root->right);
    }
}
//

bool isCBT(struct node * root, int index,int node_count){
    if(root==NULL)
        return true;
    if(index>node_count)
        return false;
    return isCBT(root->left,2*index,node_count)&& isCBT(root->right,2*index+1,node_count);
}
int counttwo(struct node * root){
    if(root==NULL)
        return 0;
    else{
        if(root->left!=NULL && root->right!=NULL)
            return(counttwo(root->left)+1+counttwo(root->right));
    }
}
//

bool isFBT(struct node * root){
    if(root==NULL)
        return true;
    if(root->left==NULL && root->right==NULL)
        return true;
    if(root->left && root->right)
        return isFBT(root->left)&& isFBT(root->right);
    return false;
}


bool search(node *root , int x)
{   
    node *p =root;
    if(p==NULL)
    return false;
    else if((p->data)==x)
    return true;
    else{

    
    if((p->data)<x)
     search(p->right , x);
    else if((p->data)>x)
    search(p->left  , x);
    }
}

struct node *deletetree(struct node *node1){
    if(node1 == NULL)
        return ;
    deletetree(node1->left);
    deletetree(node1->right);
    cout<<node1->data;
    return node1;
}

void deleteroot(struct node ** noder){
    deletetree(*noder);
    *noder=NULL;
}













// int main(){
//     struct node * root=(struct node *)malloc(sizeof(struct node));
//     root=newnode(1);
//     root->left=newnode(2);
//     root->right=newnode(3);
//     root->left->left=newnode(4);
//     root->left->right=newnode(5);
//     //root->left->left->right=newnode(6);
//     //root->right->right=newnode(7);
//     //root->right->left->left=newnode(7);
//     inorder(root);
//     cout<<endl;
//     //preorder(root);
//     //postorder(root);
//     //cout<<height(root)<<endl;
//     //cout<<nodescount(root);
//     //cout<<sum(root);
//     //cout<<countone(root);
//     //cout<<counttwo(root);
//     if(isCBT(root,1,nodescount(root)))
//         cout<<"CBT";
//     else
//         cout<<"Not a CBT";   
//     cout<<endl;
//     if(isFBT(root))
//         cout<<"FBT";
//     else
//         cout<<"Not a FBT";
// }

