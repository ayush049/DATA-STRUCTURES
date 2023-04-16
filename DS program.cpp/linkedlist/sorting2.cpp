// AKSHAY'S BEST CODE

#include<iostream>
using namespace std;



struct node{
    int data;
    struct node * next;
}*head,*newn,*temp,*curr;

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
    cout<<"Nodes are: "<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }
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

int search (int val){
    int i=1;
    temp=head;
    while(temp!=NULL){
        if(temp->data==val) return i;
        temp=temp->next;
        i++;
    }
    return i;
}

struct node *del(){
    struct node *temp=head;
    head=head->next;
    return temp;
}

int delatnode(int key){
    struct node *curr=head;
    struct node *prev=NULL;
    
    if(head==NULL) return NULL;
    while(curr->data!=key){
        if(curr->next==NULL) return NULL;
        else{
        prev=curr;
        curr=curr->next;
        }
    }
    if(curr==head) head=curr->next;
    else prev->next=curr->next;
    return curr->data;
}

void sort(){
    struct node *nex;
    int n=count(),tem;
    for(int i=0 ;i < n ; i++){
        curr=head;
        nex=head->next;
        for(int j=1 ; j<n-i ; j++){
            if(curr->data>nex->data){
                tem=curr->data;
                curr->data=nex->data;
                nex->data=tem;
            }
            curr=nex;
            nex=nex->next;
        }
    }
}

int main(){
    int n,val;
    cout<<"Enter Size : ";
    cin>>n;
    create(n);
    traverse();
    cout<<endl;
    cout<<"Count Is : "<<count()<<endl;
    cout<<"Enter the value to be searched: ";
    cin>>val;
    cout<<"Location is:"<<search(val)<<endl;
    del();
    cout<<"After Deletion : "<<endl;
    traverse();
    int x;
    cout<<"Enter Node To be Deleted : ";
    cin>>x;
    cout<<"Deleted Element is : "<<delatnode(x)<<endl;
    cout<<"After Deletion : "<<endl;
    traverse();
    sort(); traverse();
}
