//Program for Decimal to Binary Conversion


#include<bits/stdc++.h>
using namespace std;
#define TRUE 1
#define FALSE 0
#define size 20
struct Stack {
    int item[size];
    int top;
};
struct Stack S;

void Initialize(){
    S.top=-1;
}

void push(int x){
    if (S.top==(size-1)){
        cout<<"Stack Overflow";
        //return ;
        exit(1);
    }
    else{
        S.top=S.top+1;
        S.item[S.top]=x;
    }
}

int IsEmpty(){
    if (S.top==-1){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int Pop(){
    if(IsEmpty()){
        cout<<"Stack Underflow";
        exit(1);
    }
    else{
        int x=S.item[S.top];
        S.top=S.top-1;
        return x;
    }
}

void display(){
  for(int i=S.top;i>=0;i--){
    cout<<S.item[i];
  }
  cout<<endl;
}

int main(){
    int n,r;
    cin>>n;
    while(n!=0){
        r=n%2;
        push(r);
        n=n/2;
    }
    // push(100);
    // push(200);
    // push(300);
    display();
    cout<<endl;
    cout<<"stack has been created successfully"<<endl;
    int e,y;
    // y=Pop();
    // cout<<"Popped element: "<<y<<endl;
    // cout<<endl;
    // display();

}