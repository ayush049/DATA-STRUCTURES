
#include "ll.h"

// Deletion of node at first position
int del_beg(struct node **list){
    struct node *p,*temp;
    p=*list;
    temp=p;
    p=p->next;
    *list=p;
    int x=temp->info;
    free(temp);
    return x;
//     struct node *temp=*list;
//     int x;
//     (*list)=(*list)->next;
//     x=temp->info;
//     free(temp);
//     return x;

}

// Deletion of node at last position
int del_end(struct node ** list){
    struct node *curr,*prev;
    prev=NULL;
    curr=*(list);
    while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    int x=curr->info;
    free(curr);
    return x;

}
int main(){
    struct node *l,*l2;
    l=NULL;
    l2=NULL;
    insert_end(&l,5);
    insert_end(&l,4);
    insert_end(&l,3);
    insert_end(&l,2);
    insert_end(&l,1);
    cout<<"Original list: ";traversal(&l);
    cout<<"Deleted node: "<<del_beg(&l)<<endl;
    cout<<"List after deletion: ";traversal(&l);
   cout<<"Deleted node: "<<del_end(&l)<<endl;
    cout<<"List after deletion: ";traversal(&l);
}

