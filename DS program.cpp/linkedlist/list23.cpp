#include "ll.h"

int func(struct node**l1,struct node**l2){
    struct node*r,*q;
    q=*l2;
    r=*l1;
    while(r!=NULL){
        if(q->info==r->info){
            r=r->next;
            q=q->next;
        }
        else{
            return false;
        }
    }
    return true;
}
void Palindrome_Check(struct node**l1,struct node**l2){
    struct node *p,*q,*r;
    p=*l1;
    q=*l2;
    while(p!=NULL){
        insert_beg((l2),p->info);
        p=p->next;
    }
    int x=func(&(*l1),&(*l2));
    if(x==1)
        cout<<"True";
    else
        cout<<"False";
}

int main(){
    struct node*l1,*l2;
    l1=NULL;
    l2=NULL;
    insert_beg(&(l1),1);
    insert_beg(&(l1),2);
    insert_beg(&(l1),3);
    insert_beg(&(l1),3);
    insert_beg(&(l1),2);
    insert_beg(&(l1),1);
    traversal(&l1);
    Palindrome_Check(&(l1),&(l2));
}