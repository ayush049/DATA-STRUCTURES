#include "ll.h"

struct node * so_rt(struct node ** list){
    struct node * curr,*nex;
    int size=nodescount(list);
    int i,j,temp;
    for(i=0;i<size;i++){
        curr=(*list);
        nex=(*list)->next;
    }
    for(j=0;j<size-i-1;j++){
        if(curr->info>nex->info){
            temp=curr->info;
            curr->info=nex->info;
            nex->info=temp;
        }
        curr=nex;
        nex=nex->next;
    }
}
int main(){
    struct node *l1;
    struct node *l2;
    l1=NULL;
    l2=NULL;
    insert_end(&l1,1);
    insert_end(&l1,23);
    insert_end(&l1,4);
    insert_end(&l1,15);
    insert_end(&l1,14);
    so_rt(&l1);
    traversal(&l1);
}