


#include "ll.h"

struct node*p_swap(struct node**l1){
    struct node*p,*q;
    p=(*l1)->next;
    q=(*l1);
    while(p!=NULL && p->next!=NULL){
        swap(q->info,p->info);
        p=p->next->next;
        q=q->next->next;
    }
    if(p->next==NULL){
        swap(q->info,p->info);
    }
    return 0;
}
int main(){
    struct node*l1;
    l1=NULL;
    insert_end(&l1,10);
    insert_end(&l1,20);
    insert_end(&l1,30);
    insert_end(&l1,40);
    insert_end(&l1,50);
    insert_end(&l1,60);
    insert_end(&l1,70);
    insert_end(&l1,80);
    traversal(&l1);
    p_swap(&l1);
    traversal(&l1);
}