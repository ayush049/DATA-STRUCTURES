#include<bits/stdc++.h>
using namespace std;
struct node {
    int info;
    struct node *next;
};
struct node *newnode(struct node **list){
    struct node *nn;
    nn=(struct node*)malloc(sizeof(struct node ));
    return nn;
}
// struct node * insert_beg(struct node **list,int x){
    void insert_beg(struct node **list,int x){
    struct node*temp;
    temp=newnode(list);
    temp->info=x;
    temp->next=*list;
    *list=temp;
}
// int insert_end(struct node** list,int x){
//     struct node* temp,*p;
//     temp=*list;
// }
void traversal(struct node **list){
    struct node *p;
    p=*list;
    while(p!=NULL){
        cout<<p->info<<" ";
        p=p->next;
    }
    //cout<<endl;
}
struct node *concat(struct node **list1,struct node **list2){
    struct node *p;
    p=*list1;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=*list2;
    return(*list1);
    //traversal(&list1);
}
int main(){
    struct node *l1;
    struct node *l2;
    l1=NULL;
    l2=NULL;
    insert_beg(&l1,1);
    insert_beg(&l1,2);
    insert_beg(&l1,3);
    insert_beg(&l1,4);
    //
    insert_beg(&l2,5);
    insert_beg(&l2,6);
    insert_beg(&l2,7);
    insert_beg(&l2,8);
    traversal(&l1);
    cout<<endl;
    concat(&l1,&l2);
    traversal(&l1);
}