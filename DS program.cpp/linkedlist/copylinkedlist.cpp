// Program for Creation of Copy of the Linked list

#include "ll.h"

void copy(struct node **list,struct node **l2){
    struct node * p;
    p=(*list);
    while(p!=NULL){
        insert_end(l2,p->info);
        p=p->next;
    }
    traversal(l2);
}

// struct node* copy(struct node **list,struct node **l2){
//     struct node * p,*q;
//     p=(*list);
//     q=(*l2);
//     //
//     while(p!=NULL){
//         q=newnode(l2);
//         q->info=p->info;
//         p=p->next;
//         q=q->next;
//     }
//     return 0;
// }
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
    //cout<<endl;
    cout<<"Copied list: ";copy(&l,&l2);
    //traversal(&l2);









}