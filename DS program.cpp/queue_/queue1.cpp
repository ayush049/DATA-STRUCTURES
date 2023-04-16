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
    if(q->f==q->r)
        return true;
    else
        return false;
}

void enqueue(struct queue *q,int x){
    if(q->r==size-1){
        cout<<"Queue overflow";
    }
    else{
        q->r+=1;
        q->a[q->r]=x;
    }
}

int dequeue(struct queue *q){
    if(isempty(q)){
        cout<<"Stack underflow";
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
    enqueue(&q,20);
    enqueue(&q,24);
    enqueue(&q,55);
    enqueue(&q,25);
    cout<<"Before deletion: ";display(&q);
    cout<<"Deleted element: "<<dequeue(&q)<<endl;;
    cout<<"After deletion: ";
    display(&q);
    cout<<"Deleted element "<<dequeue(&q)<<endl;
    cout<<"After deletion: ";
    display(&q);
}