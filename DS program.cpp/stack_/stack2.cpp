// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     char e[50];//="(())";
//     cin>>e;
//     int i,j=0;
//     while(e[i]!='\0'){
//         if(e[i]=='(' || e[i]=='{' || e[i]=='['){
//             e[j]==e[i];
//             j++;
//         }
//     }
//     int i=0,f=1;
//     char x;
//     Initialize();
//     while(e[i]!='\0'){
//         x=e[i];
//         if(x=='('){
//             push(x);
//         }
//         else{
//             if(IsEmpty()){
//                 f=0;
//                 break;
//             }
//             else{
//                 Pop();
//             }
//         }
//         i++;
//     }
//     if(IsEmpty()){
//         if(f==0){
//             cout<<"Incorrect";
//         }
//         else{
//             cout<<"correct";
//         }
//     }
//     else{
//         cout<<"Incorrect";
//     }
// }
//}



//Program for Stack Primitive Operations

#include<bits/stdc++.h>
using namespace std;
#define TRUE 1
#define FALSE 0
#define size 2
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
    cout<<S.item[i]<<endl;
  }
  cout<<endl;
}

int main(){
    int n;
    //n=(struct stack *)malloc(sizeof(struct stack));
    S.top=-1;
    push(100);
    push(200);
    push(300);
    display();
    
    cout<<endl;
    cout<<"stack has been created successfully"<<endl;
    int e,y;
    y=Pop();
    cout<<"Popped element: "<<y<<endl;
    cout<<endl;
    display();

}