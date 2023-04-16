#include"ll.h"
void duplicates(struct node**l1){
    struct node*p,*q,*r;
    p=(*l1);
    while(p!=NULL){
        q=p->next;
        r=p;
        while(q!=NULL){
        if(q->info==p->info){
            q=q->next;
            Delete_After(&r);
        }
        else{
            q=q->next;
            r=r->next;
        }
        }
        p=p->next;
    }
    traversal(l1);
}
int main(){
    struct node*l1;
    l1=NULL;
    insert_end(&l1,1);
    insert_end(&l1,2);
    insert_end(&l1,1);
    insert_end(&l1,2);
    insert_end(&l1,3);
    insert_end(&l1,4);
    insert_end(&l1,3);
    insert_end(&l1,5);
    duplicates(&l1);
}