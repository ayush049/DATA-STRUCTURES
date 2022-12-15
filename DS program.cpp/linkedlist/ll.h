// #include<iostream>
// using namespace std;
// struct node {
//     int info;
//     struct node *next;
// };
// struct node *newnode(struct node **list){
//     struct node *nn;
//     nn=(struct node*)malloc(sizeof(struct node ));
//     return nn;
// }
// // struct node * insert_beg(struct node **list,int x){
//     void insert_beg(struct node **list,int x){
//     struct node*temp;
//     temp=newnode(list);
//     temp->info=x;
//     temp->next=*list;
//     *list=temp;
// }
// // int insert_end(struct node** list,int x){
// //     struct node* temp,*p;
// //     temp=*list;
// // }
// void traversal(struct node *list){
//     struct node *p;
//     p=list;
//     while(p!=NULL){
//         cout<<p->info<<" ";
//         p=p->next;
//     }
//     //cout<<endl;
// }


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


    void insert_beg(struct node **list,int x){
    struct node*temp;
    temp=newnode(list);
    temp->info=x;
    temp->next=*list;
    *list=temp;
}

void traversal(struct node **list){
    struct node *p;
    p=*list;
    while(p!=NULL){
        cout<<p->info<<" ";
        p=p->next;
    }
    cout<<endl;
}
void insert_end(struct node **list,int x){
    struct node *p,*temp;
    temp=newnode(list);
    p=(*list);
    if(p==NULL){
        insert_beg(list,x);
    }
    else{
        while(p->next!=NULL){
             p=p->next;
        }
        p->next=temp;
        temp->info=x;
        temp->next=NULL;
    }
}
void insert_after(struct node ** list,struct node **loc,int x){
    struct node *q;
    q=newnode(list);
    q->info=x;
    q->next=(*loc)->next;
    (*loc)->next=q;
}
