#include "ll.h"

struct node * reversal(struct node ** list){
    struct node * p,*c,*n;
    p=NULL;
    c=*(list);
    n=(*list)->next;
    while(c!=NULL){
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL)
            n=n->next;
    }
    *list=p;
}

int main(){
    struct node * list1;
    list1=NULL;
    int key;
    insert_end(&list1,10);
    insert_end(&list1,24);
    insert_end(&list1,31);
    insert_end(&list1,40);
    insert_end(&list1,45);

    cout<<"Original list: ";traversal(&list1);
    reversal(&list1);
    cout<<"Reversed list: ";
    traversal(&list1);
}