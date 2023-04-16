#include "ll.h"

struct node * insertasc(struct node ** l,int x){
    struct node * p= *l;
    struct node * q= NULL;
    while(x>=p->info){
        q=p;
        p=p->next;
    }
    if(q!=NULL)
        insert_after(&q,&(q),x);
    else
        insert_beg(&q,x);
    
    return *l;
}
int main(){
    struct node * list1;
    list1=NULL;
    insert_end(&list1,10);
    insert_end(&list1,20);
    insert_end(&list1,30);
    insert_end(&list1,40);
    insert_end(&list1,50);
    int x;cin>>x;
    insertasc(&list1,x);
    traversal(&list1);
}