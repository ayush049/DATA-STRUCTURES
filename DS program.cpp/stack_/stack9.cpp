// Program to reverse the string using stack 

//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
#define size 10000
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
    int k;
    for(int i=S.top;i>0;i--){
        k=S.item[i];
        cout<<char(k);
    }
    cout<<endl;
    
}

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        push(s[i]);
    }
    display();
}