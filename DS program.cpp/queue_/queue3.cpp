// DOUBLE ENDED EQUEUE

// #include<iostream>
// using namespace std;
// #define size 10
// struct dequeue
// {
//     int a[10];
//     int f;
//     int r;
// };
// struct dequeue dq;
// void initialize(){
//     dq.f=0;
//     dq.r=0;
// }
// void insert(int x){
//     if()
// }
// int deletion(){
// }
// int main(){
// }


#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define size 10
struct Dequeue
{
    int a[size];
    int f,r;

}dq;
void initialize()
{
  dq.f=-1;
  dq.r=0;
}
bool isFull()
{
     return ((dq.f == 0 && dq.r == size - 1) ||
      dq.f == dq.r + 1);
}
bool isEmpty() {
  return (dq.f == -1);
}
void insertfront(int key){
   if (isFull()){
    cout <<"Overflow"<< endl;
    return;
  }

  if (dq.f == -1) {
    dq.f = 0;
    dq.r = 0;
  }

  else if (dq.f == 0)
    dq.f = size - 1;

  else
    dq.f = dq.f - 1;

  dq.a[dq.f] = key;
}
void insertrear(int key)
{
    if (isFull()) {
    cout <<" Overflow"<< endl;
    return;
  }

  if (dq.f == -1) {
    dq.f = 0;
    dq.r = 0;
  }

  else if (dq.r== size-1)
    dq.r=0;

  else
    dq.r= dq.r + 1;

  dq.a[dq.r] = key;
}
int deletefront()
{
    if (isEmpty()) {
    cout << "Queue Underflow"<< endl;
    exit(1);
  }
  int x=dq.a[dq.f];

  if (dq.f==dq.r) {
    dq.f= -1;
    dq.r=-1;
  } 
  else if (dq.f== size-1)
    dq.f=0;

  else
    dq.f=dq.f+1;

    return x;
}
int deleterear()
{
    if (isEmpty()) {
    cout <<"Underflow"<< endl;
    exit(1);
  }
  int y=dq.a[dq.r];

  if (dq.f ==dq.r) {
    dq.f = -1;
    dq.r = -1;
  } else if (dq.r== 0)
    dq.r= size-1;
  else
    dq.r = dq.r-1;

    return y;
}
// void display(struct Dequeue dq){
//     // for(int i=dq.f;i<=dq.r;i++){
//     //     cout<<dq.a[i]<<" ";
//     // }
//     // cout<<endl;
//     while(!isEmpty()){
        
//     }
// }

int main()
{
    initialize();
    insertfront(5);
    insertfront(2);
    insertrear(6);
    insertrear(7);
    insertfront(5);
    insertrear(6);
    //display(dq);

    cout<<deleterear()<<endl;
    cout<<deletefront()<<endl;

    
    return 0; 

}