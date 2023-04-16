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

//****************************************************************//
void insert_beg(struct node **list,int x){
    struct node*temp;
    temp=newnode(list);
    temp->info=x;
    temp->next=*list;
    *list=temp;
}
//*****************************************************************//
void traversal(struct node **list){
    struct node *p;
    p=*list;
    while(p!=NULL){
        cout<<p->info<<" ";
        p=p->next;
    }
    cout<<endl;
}
//******************************************************************//
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
//*******************************************************************//
void insert_after(struct node ** list,struct node **loc,int x){
    struct node *q;
    q=newnode(list);
    q->info=x;
    q->next=(*loc)->next;
    (*loc)->next=q;
}
//*******************************************************************//
int nodescount(struct node ** l1){
    struct node *p;
    p=*l1;
    int c=0;

    while(p!=NULL){
        p=p->next;
        c++;
    }
    return c;
}

//**********************************************************************//
struct node * middle(struct node ** list){
    struct node *p,*q;
    p=*list;
    q=(*list);
    while(q!=NULL && q->next!=NULL){
        p=p->next;
        q=q->next->next;
    }
    return p;
}
//***********************************************************************//
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

//************************************************************************//
struct node * binarysearch(struct node ** list,int key){
    struct node * p=*list;
    struct node * mid;
    if(p!=NULL){
        mid=middle(list);
        if(key==mid->info)
            return mid;
        else{
            if(key<mid->info){
                mid->next=NULL;
                binarysearch(&p,key);}
            else{
                p=mid->next;
                binarysearch(&p,key);}
        }
    }
    else 
        return NULL;
}



//***************************************************************************//

// Delete After the node
int Delete_After(struct node**list){
    struct node *p,*q;
    int x;
    p=*list;
    if(p!=NULL && p->next!=NULL){
        q=p->next;
        p->next=q->next;
        x=q->info;
        free(q);
        return x;
    }
    else{
        exit(1);
    }
}

//**************************************************************************//
// Deletion in begining 
int Delete_Beg(struct node**list){
    struct node *temp=*list;
    int x;
    (*list)=(*list)->next;
    x=temp->info;
    free(temp);
    return x;
}
//**************************************************************************//
// Deletion At the end
int Delete_End(struct node**list){
    struct node *p,*q;
    p=*list;
    q=NULL;
    int x;
    while(p->next!= NULL){
        q=p;
        p=p->next;
    }
    q->next=NULL;
    x=p->info;
    free(p);
    return x;
}