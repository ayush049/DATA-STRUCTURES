//POSTFIX EVALUATION 

//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
struct Stack {
    int item[10];
    int top;
};
struct Stack s;

void Initialize(){
    s.top=-1;
}
void push(int x){
    if (s.top==(10-1)){
        cout<<"Stack Overflow";
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
int stacktop(){
    int x= s.item[s.top];
    return x;
}
int evaluate(int a,int b,char symb){
    switch(symb){
        case '+' : return a+b;
        case '-' : return a-b;
        case '*' : return a*b;
        case '/' : return a/b;
        case '%' : return a%b;
    }
}
void postfix(char c[]){
    int i=0;
    char symb;
    Initialize();
    while(c[i]!='\0'){
        symb=c[i];
        i++;
        if(symb>='0' && symb<='9'){
            push(symb-'0');
        }
        else{
            int b=Pop();
            int a=Pop();
            int x=evaluate(a,b,symb);
            push(x);
        }
    }
    cout<<Pop();
}
int main(){
    Initialize();
    char c[20];
    cout<<"Enter the expression: ";
    cin>>c;
    postfix(c);
}
