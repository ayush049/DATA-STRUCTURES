// Program for Intersection of two sorted Linked List (consider lists as sets)

#include "ll.h"

struct node * intersection(struct node **l1,struct node **l2){
    struct node * l3=NULL;
    struct node * p,*q;
    p=*l1,q=*l2;
    while(p!=NULL && q!=NULL){
        if(p->info<q->info){
            p=p->next;
        }
        else if(p->info>q->info){
            q=q->next;
        }
        else{
            insert_beg(&l3,p->info);
            p=p->next;
            q=q->next;
        }
    }
    while(p!=NULL){
        p=p->next;
    }
    while(q!=NULL){
        q=q->next;
    }
    reversal(&l3);
    traversal(&l3);
}
int main(){
    struct node * list1,*list2,*list3;
    list1=NULL;
    list2=NULL;
    list3=NULL;
    insert_end(&list1,1);
    insert_end(&list1,2);
    insert_end(&list1,3);
    insert_end(&list1,4);
    insert_end(&list1,5);
    //
    insert_end(&list2,3);
    insert_end(&list2,4);
    insert_end(&list2,5);
    insert_end(&list2,6);
    insert_end(&list2,7);
    //
    intersection(&list1,&list2);
    //traversal(&list3)
}

