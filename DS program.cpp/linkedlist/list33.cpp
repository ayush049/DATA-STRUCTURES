#include "ll.h"

struct node* addzeros(struct node**l1,struct node**l2){
    if(nodescount(l1)>nodescount(l2)){
        int x=nodescount(l1)-nodescount(l2);
        while(x--){
            insert_beg(l2,0);
        }
    }
    else if(nodescount(l1)<nodescount(l2)){
        int x=nodescount(l2)-nodescount(l1);
        while(x--){
            insert_beg(l1,0);
        }
    }
    else{
        return 0;
    }
    return 0;
}
bool Greater(struct node**l1,struct node**l2){
    struct node*p,*q;
    p=*l1;
    q=*l2;
    if(nodescount(l1)>nodescount(l2)){
        return true;
    }
    else if(nodescount(l1)<nodescount(l2)){
        return false;
    }
    else{
        while(p!=NULL && q!=NULL){
            if(p->info>q->info){
                return true;
            }
            else if(p->info<q->info){
                return false;
            }
            else{
                p=p->next;
                q=q->next;
            }
        }
    }
    return 0;
}
struct node*sub_number(struct node**l1,struct node**l2){
    struct node*p,*q,*r;
    r=NULL;
    int diff,bor=0;
    int x=Greater(&(*l1),&(*l2));
    addzeros(&(*l1),&(*l2));
    reversal(&(*l1));
    reversal(&(*l2));
    p=(*l1);
    q=(*l2);
    while(p!=NULL && q!=NULL){
        if(x==1){
            if(p->info<q->info){
                diff=10+(p->info-q->info)-bor;
                bor=1;
                insert_beg(&r,diff);
            }
            else{
                diff=(p->info-q->info)-bor;
                bor=0;
                insert_beg(&r,diff);
            }
        }
        else{
            if(q->info<p->info){
                diff=10+(q->info-p->info)-bor;
                bor=1;
                insert_beg(&r,diff);
            }
            else{
                diff=(q->info-p->info)-bor;
                bor=0;
                insert_beg(&r,diff);
            }
        }
        p=p->next;
        q=q->next;
    }
    traversal(&r);
    return 0;
}
int main(){
    struct node*l1,*l2;
    l1=NULL;
    l2=NULL;
    insert_end(&l1,4);
    insert_end(&l1,5);
    insert_end(&l1,8);
    insert_end(&l1,6);
    traversal(&l1);
    insert_end(&l2,2);
    insert_end(&l2,4);
    insert_end(&l2,9);
    traversal(&l2);
    sub_number(&l1,&l2);
}