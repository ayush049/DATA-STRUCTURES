#include<iostream>
using namespace std;
struct node{
    int data;
    struct node * next;
}*head,*newn,*temp;

void create(int n){
    int dt;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        cout<<"No allocation"<<endl;
        exit(0);
    }
    cin>>dt;
    head->data=dt;
    head->next=NULL;
    temp=head;
    for(int i=1;i<n;i++){
        newn=(struct node*)malloc(sizeof(struct node));
        if(newn==NULL){
        cout<<"No allocation"<<endl;
        exit(0);
    }
    cin>>dt;
    newn->data=dt;
    newn->next=NULL;
    temp->next=newn;
    temp=temp->next;
    }
}

void traverse(){
    temp=head;
    while(temp!=NULL){
        cout<<"Nodes are: "<<temp->data<<endl;
        temp=temp->next;
    }
}

struct node * deletion(int key){
    struct node * curr=head;
    struct node * prev=NULL;
    if(head == NULL){
        return NULL;
    }
    while(curr->data!=key){
        if (curr->next==NULL)
            return NULL;
        else{
            prev=curr;
            curr=curr->next;
        }
    }
    if(curr==head)
        head=head->next;
    else{
        prev->next=curr->next;
    }
    return curr;
}
int count(){
    int c=0;
    temp=head;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}
int search (int key){
    int i=0;
    temp=head;
    while(temp!=NULL){
        if(temp->data==key)
            return i;
    temp=temp->next;
    i++;

    }
    return i;
}

// int sort(int n){
//     struct node * current;
//     struct node * next;
//     for(int i=0;i<n-1;i++){
//         current=head;
//         next=head->next;
//     }
//     for(int j)
// }


int main(){
    int n,key,key1;
    cin>>n;
    create(n);
    traverse();
    cout<<endl;
    cout<<"Number of nodes in list: "<<count()<<endl;
    cout<<"Enter the value to be searched: ";
    cin>>key1;
    cout<<"Location of the key is:"<<search(key)<<endl;
    cout<<"Enter the node to be deleted: ";
    cin>>key;
    deletion(key);
    traverse();
}


