#include "primitive.cpp"

struct node * create(struct node * root,int x){
    if(root==NULL)
        return newnode(x);
    if(x<root->data)
        root->left=create(root->left,x);
    else
        root->right=create(root->right,x);
}
struct node * successor(struct node * curr){
    curr=curr->right;
    while(curr!=NULL && curr->left==NULL){
        curr=curr->left;
        return curr;
    }
}
    
struct node * del(struct node  * root,int x){
    if(root==NULL)
        return root;
    else if(x<root->data)
        root->left=del(root->left,x);
    else if(x>root->data)
        root->right=del(root->right,x);
    else{
        if(root->right==NULL){
            struct node *temp=root->left;
            del(root,x);
            return temp;
        }
        else if(root->left==NULL){
            struct node * temp=root->right;
            del(root,x);
            return temp;
        }
        else{
            struct node * temp=successor(root);
            root->data=temp->data;
            struct node * curr=swap(root->data,temp->data);
        }
    }
        
}


int main(){
//    struct node * root=(struct node *)malloc(sizeof(struct node));
//    root=NULL;
   struct node * root;
   root=newnode(20);
   int a[9]={15,30,40,50,12,18,35,80,7};
    for(int j=0;j<9;j++){
        create(root,a[j]);
    }

    inorder(root);
    cout<<endl;
    if(search(root,20)) cout<<"yes";
    else cout<<"no";

    deleteroot(&root);
    deletetree(root);

    
}