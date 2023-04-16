#include "ll.h"
struct node*Delete(struct node**l1 , int x){
    struct node*p,*q;
    q=NULL;
    p=*l1;
    if(q==NULL){
        if(p->info==x){
            Delete_Beg(&p);
            p=p->next;
        }
    }
    // q=*l1;
    // p=p->next;
    // while(p!=NULL){
    //     if(p->info==x){
    //         Delete_After(&p);
    //         p=p->next;
    //         q=q->next;
    //     }
    //     p=p->next;
    //     q=q->next;
    // }
    
    traversal(&p);
    return 0;
}
int main(){
    struct node*l1;
    l1=NULL;
    insert_end(&l1,2);
    insert_end(&l1,2);
    insert_end(&l1,3);
    insert_end(&l1,4);
    insert_end(&l1,5);
    insert_end(&l1,2);
    insert_end(&l1,2);
    int x;
    cin>>x;
    Delete(&l1,x);
}