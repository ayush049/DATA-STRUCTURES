#include "ll.h"

struct node * addition(struct node **l1,struct node ** l2){
    reversal(l1);
    reversal(l2);
    struct node * p=*l1;
    struct node * q=*l2;
    int carry=0,sum=0,total=0;;
    struct node * l3=NULL;
    while(p!=NULL && q!=NULL){
        total=p->info+q->info+carry;
        sum=total%10;
        carry=total/10;
        insert_beg(&l3,sum);
        p=p->next;
        q=q->next;
    }
    while(p!=NULL){
        total=p->info+carry;
        sum=total%10;
        carry=total/10;
        insert_beg(&l3,sum);
        p=p->next;
    }
    while(q!=NULL){
        total=q->info+carry;
        sum=total%10;
        carry=total/10;
        insert_beg(&l3,sum);
        q=q->next;
    }
    if(carry==1){
        insert_beg(&l3,carry);
    }
    traversal(&l3);

}

int main(){
    struct node * list1,*list2;
    list1=NULL;
    list2=NULL;
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

    addition(&list1,&list2);

}