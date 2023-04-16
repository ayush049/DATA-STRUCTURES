#include "ll.h"

struct node * vowel(struct node ** l1,struct node ** l2){
    struct node *p=*l1;
    struct node *q=*l2;
    while(p!=NULL && q!=NULL){
        if(q->info=='a'||'e'||'i'||'o'||'u'){
            insert_after(p,q,q);
        }
    }
}