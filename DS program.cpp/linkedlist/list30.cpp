#include "ll.h"


void Delete_kth(struct node**l1,int n){
    struct node*p,*q;
    p=(*l1);
    q=(*l1);
    n=n+1;
    while(n--){
        p=p->next;
    }
    while(p!=NULL){
        p=p->next;
        q=q->next;
    }
    Delete_After(&q);
    traversal(l1);
}
int main(){
    struct node*l1;
    l1=NULL;
    int n;
    insert_end(&l1,1);
    insert_end(&l1,2);
    insert_end(&l1,3);
    insert_end(&l1,4);
    insert_end(&l1,5);
    insert_end(&l1,6);
    //
    cout<<"Enter the Node to Delete from last :- ";
    cin>>n;
    //
    traversal(&l1);
    //
    Delete_kth(&l1,n);
}

// GFG solution 
//###############################
// Node*p,*q;
//         p=(head);
//         q=(head);
//         while(n--){
//             if(p!=NULL){
//                 p=p->next;
//             }
//             else{
//                 return -1;
//             }
//         }
//         while(p!=NULL){
//             p=p->next;
//             q=q->next;
//         }
//         return q->data;