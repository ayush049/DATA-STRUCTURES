// Program for counting nodes containing even and odd information.

#include "ll.h"
void count(struct node ** list){
    struct node * p,*temp;
    p=*list;
    int e=0,od=0;
    while(p!=NULL){
        if(p->info%2==0)   
            e++;
        else 
            od++;
        p=p->next;
    }
    cout<<"Number of even nodes: "<<e<<endl;
    cout<<"Number of odd nodes: "<<od;
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
    cout<<"list: ";traversal(&l);
    count(&l);
    
}