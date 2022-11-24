//Program for Postfix Evaluation

#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
#define size 20
struct stack
{
    char item[20];
    int top;
};
struct stack s;
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

int pop(){
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
int evaluate(int b,int a,char op){
    switch(op){
        case '+' : return a+b;
        case '-' : return a-b;
        case '*' : return a*b;
        case '/' : return a/b;
        case '%' : return a%b;
    }
}
int postfix(char c[]){
    int i=0;
    char symb;
    Initialize();
    while(c[i]!='\0'){
        i++;
        if(c[i]>='0' && c[i]<='9'){
            push(c[i]-'0');
        }
        else{
            int b=pop();
            int a=pop();
            int x=evaluate(b,a,c[i]);
            push(x);
        }
    }
    return s.top;
}
int main(){
    Initialize();
    char c[20];
    cout<<"Enter the expression: ";
    cin>>c;
    int d=postfix(c);
    cout<<d;
}