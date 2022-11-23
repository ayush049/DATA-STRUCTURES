// CIRCULAR QUEUE

#include<bits/stdc++.h>
using namespace std;
# define size 10 
struct cqueue{
    int items[size];
    int Rear;
    int Front;
};
//struct cqueue cq;
void Initialize(struct cqueue *cq){
    cq->Front=0;
    cq->Rear=0;
}
int isempty(struct cqueue *cq){
    if(cq->Front==cq->Rear)
        return true;
    else
        return false;
}
void insert(struct cqueue *cq,int x){
    if((cq->Rear+1)%size == cq->Front){
        cout<<"Queue Overflows";
        exit(1);
    }
    cq->Rear=(cq->Rear+1) % size;
    cq->items[cq->Rear]=x;
}
int deletion(struct cqueue *cq){
    int x;
    if(isempty(cq)){
        cout<<"Queue Underflows";
        exit(1);
    }
    cq->Front=(cq->Front+1) % size;
    x=cq->items[cq->Front];
    return x;
}
void display(struct cqueue *cq){
    for(int i=cq->Front+1;i<=cq->Rear;i++){
        cout<<cq->items[i]<<" ";
    }
    cout<<endl;
}
int main(){
    struct cqueue cq;
    Initialize(&cq);
    //insert(&cq,0);
    insert(&cq,2);
    insert(&cq,4);
    insert(&cq,6);
    insert(&cq,8);
    insert(&cq,10);
    insert(&cq,12);
    cout<<"Before deletion: ";display(&cq);
    cout<<"Deleted element: "<<deletion(&cq)<<endl;;
    cout<<"After deletion: ";display(&cq);
}