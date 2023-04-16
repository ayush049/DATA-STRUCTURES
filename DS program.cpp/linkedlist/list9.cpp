// Program for Splitting a Linked List(in-place)


#include"ll.h"
void splitting(struct node**l1,struct node**l2,int x){
    struct node*p;
    struct node*q;
    p=(*l1)->next;
    q=(*l1);
    x=x-1;
    while(x--){
        p=p->next;
        q=q->next;
    }
    while(p!=NULL){
        p=p->next;
        int x=Delete_After(&q);
        insert_end(&(*l2),x);
    }
    traversal (l1);
    traversal (l2);
}
int main(){
    struct node*l1;
    l1=NULL;
    struct node*l2;
    l2=NULL;
    insert_end(&l1,1);
    insert_end(&l1,2);
    insert_end(&l1,3);
    insert_end(&l1,4);
    insert_end(&l1,5);
    insert_end(&l1,6);
    insert_end(&l1,7);
    insert_end(&l1,8);
    insert_end(&l1,9);
    insert_end(&l1,10);
    //
    traversal(&l1);
    //
    int x;
    cout<<"Enter the node from where you want to split the list"<<endl;
    cin>>x;
    splitting(&l1,&l2,x);
}