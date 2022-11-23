// //Program for Decimal to ANY BASE Conversion


#include<bits/stdc++.h>
using namespace std;
#define TRUE 1
#define FALSE 0
#define size 20
struct Stack {
    int item[size];
    int top;
};
struct Stack s;

void Initialize(){
    s.top=-1;
}

void push(int x){
    if (s.top==(size-1)){
        cout<<"Stack Overflow";
        //return ;
        exit(1);
    }
    else{
        s.top=s.top+1;
        s.item[s.top]=x;
    }
}

int IsEmpty(){
    if (s.top==-1){
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
        int x=s.item[s.top];
        s.top=s.top-1;
        return x;
    }
}

void display(){
  for(int i=s.top;i>0;i--){
    if(s.item[i]>=10 && s.item[i]<=35)
        cout<<char(55+s.item[i]);
    
    else
        cout<<s.item[i];
  }
  cout<<endl;
}

int main(){
    int n,r=0,x;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the base: ";
    cin>>x;
    while(n>0){
        r=n%x;
        push(r);
        n=n/x;
    }
    display();
    cout<<endl;
    //cout<<"stack has been created successfully"<<endl;
}    
