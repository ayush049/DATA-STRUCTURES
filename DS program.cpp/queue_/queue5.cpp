#include<iostream>
using namespace std;
struct pqueue {
    int pri[20];
    int ind;
}pq;
void initialize(){
    pq.ind==-1;
}
void insert_pq(int p ){
    if(pq.ind ==-1){
        pq.ind++;
        pq.pri[pq.ind]=p;
    }
    else{
        for(int i=pq.ind;i>=0;i--){
            if(p<pq.pri[i]){
                pq.pri[i+1]=pq.pri[i];
                pq.pri[i]=p;
            }
        }
        pq.ind++;
    }
}
void display(){
   for(int i=0;i<=pq.ind;i++){
    cout<<pq.pri[i]<<" ";
   } 
   cout<<endl;
}
int main(){
    insert_pq(2);
    insert_pq(5);
    insert_pq(1);
    insert_pq(6);
    insert_pq(3);
    display();
}