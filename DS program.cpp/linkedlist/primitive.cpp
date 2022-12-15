#include<bits/stdc++.h>
using namespace std;
struct node {
    int info;
    struct node *next;
};
struct node *newnode(struct node **list){
    struct node *nn;
    nn=(struct node*)malloc(sizeof(struct node ));
    return nn;
}


    void insert_beg(struct node **list,int x){
    struct node*temp;
    temp=newnode(list);
    temp->info=x;
    temp->next=*list;
    *list=temp;
}

void traversal(struct node **list){
    struct node *p;
    p=*list;
    while(p!=NULL){
        cout<<p->info<<" ";
        p=p->next;
    }
    cout<<endl;
}
void insert_end(struct node **list,int x){
    struct node *p,*temp;
    temp=newnode(list);
    p=(*list);
    if(p==NULL){
        insert_beg(list,x);
    }
    else{
        while(p->next!=NULL){
             p=p->next;
        }
        p->next=temp;
        temp->info=x;
        temp->next=NULL;
    }
}
void insert_after(struct node ** list,struct node **loc,int x){
    struct node *q;
    q=newnode(list);
    q->info=x;
    q->next=(*loc)->next;
    (*loc)->next=q;
}
int main(){
    struct node *l,*loc;
    l=NULL;
    // insert_beg(&l,1);
    // insert_beg(&l,2);
    // insert_beg(&l,3);
    // insert_beg(&l,4);
    insert_end(&l,5);
    insert_end(&l,4);
    insert_end(&l,3);
    insert_end(&l,2);
    insert_end(&l,1);
    //
    cout<<"Original list: ";traversal(&l);
    loc=(l);
    cout<<"After Which Node Do you want to insert :- ";
    int n;
    cin>>n;
    for(int i=1 ; i<n ; i++){
        loc=loc->next;
    }
    insert_after(&l,&loc,6);
    cout<<"List after insertion: ";
    traversal(&l);
}