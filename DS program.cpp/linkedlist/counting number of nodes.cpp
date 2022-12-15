#include<iostream>
//#include<ll.h>
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
// struct node * insert_beg(struct node **list,int x){
    void insert_beg(struct node **list,int x){
    struct node*temp;
    temp=newnode(list);
    temp->info=x;
    temp->next=*list;
    *list=temp;
}

// struct node *concat(struct node ** l1, struct node ** l2){
int nodescount(struct node ** l1){
    struct node *p;
    p=*l1;
    int c=0;

    while(p!=NULL){
        p=p->next;
        c++;
    }
    return c;
}
int main(){
    struct node *l1;
    struct node *l2;
    insert_beg(&l1,1);
    insert_beg(&l1,2);
    insert_beg(&l1,3);
    insert_beg(&l1,4);
    cout<<nodescount(&l1);
}