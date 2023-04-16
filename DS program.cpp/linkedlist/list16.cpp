#include "ll.h"
// struct node * middle(struct node ** list){
//     struct node *p,*q;
//     p=*list;
//     q=(*list)->next;
//     while(q!=NULL && q->next!=NULL){
//         p=p->next;
//         q=q->next->next;
//     }
//     return p;
// }
int main(){
    struct node * list1;
    list1=NULL;
    insert_end(&list1,1);
    insert_end(&list1,2);
    insert_end(&list1,3);
    insert_end(&list1,4);
    //insert_end(&list1,5);
    cout<<"Middle Element: "<<middle(&list1)->info;
}