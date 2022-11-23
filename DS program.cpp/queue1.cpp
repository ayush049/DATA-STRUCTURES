// LINEAR QUEUE

#include<iostream>
using namespace std;
#define size 10
struct queue
{
    int a[10];
    int f;
    int r;
};
//struct queue q;

void initialize(struct queue *q){
    q->f=0;
    q->r=-1;
}
int isempty(struct queue *q){
    if(q->r - q->f +1 == 0){
        return true;
    }
    else
        return false;
}
void insert(struct queue *q,int x){
    if(q->r==size-1){
        cout<<"Queue oveflow";
        exit(1);
    }
    else{
        q->r+=1;
        q->a[q->r]=x;
    }
}
int deletion(struct queue *q){
    if(isempty(q)){
        cout<<"Queue underflows";
        exit(1);
    }
    else{
        int x=q->a[q->f];
        q->f+=1;
        return x;
    }
}
void display(struct queue *q){
    for(int i=q->f;i<=q->r;i++){
        cout<<q->a[i]<<" ";
    }
    cout<<endl;
}


int main(){
    struct queue q;
    initialize(&q);
    insert(&q,20);
    insert(&q,24);
    insert(&q,55);
    insert(&q,25);
    cout<<"Before deletion: ";display(&q);
    cout<<"Deleted element: "<<deletion(&q)<<endl;;
    cout<<"After deletion: ";display(&q);
}