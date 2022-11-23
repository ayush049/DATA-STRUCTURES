#include<bits/stdc++.h>
using namespace std;
#define size 10
#define TRUE 1
#define FALSE 0
struct Stack {
    int item[size];
    int top;
};
struct Stack S;

void Initialize(){
    S.top=-1;
}
void push(){
    int x;
    if (S.top==(size-1)){
        cout<<"Stack Overflow";
        //return ;
        exit(1);
    }
    else{
        cout<<"Enter the element to be pushed: ";
        cin>>x;
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
int stacktop(){
    int x= S.item[S.top];
    return x;
}
void display (){
    int i;
    if (S.top == -1){
        cout<<"Stack is empty"<<endl;
        return;
    }
    else{
        cout<<"The status of the stack is "<<endl;
        for (i = S.top; i >= 0; i--){
            cout<<S.item[i]<<endl;
        }
    }
    cout<<"\n";
}

int main(){
    //struct stack s;
    S.top=-1;
    int n;
    cout<<"Enter the number of enteries to be pushed: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        push();
    }
    display();
}
   
//     cout<<"stack has been created successfully"<<endl;
//     cout<<endl;
//     int e,y;
//     cout<<"Stack top: "<<stacktop()<<endl;
//     cout<<endl;
//     y=Pop();
//     cout<<"Popped element: "<<y<<endl;
//     cout<<endl;
//     cout<<"One Element is pushed" <<endl;
//     push(400);
//     push(500);
//     cout<<endl;
//     cout<<"Popped element: "<<Pop()<<endl;
//     cout<<endl;
//     cout<<"Popped element: "<<Pop()<<endl;
//     cout<<endl;
//     cout<<"Stack top: "<<stacktop()<<endl;
//     cout<<endl;
//     cout<<"Popped element: "<<Pop()<<endl;
//     cout<<endl;
//     int i=IsEmpty();
//     if(i==1)
//         cout<<"Stack is empty"<<endl;
//     else
//         cout<<"Stack is not empty"<<endl;
//}











    // cout<<"Enter size: ";
    // cin>>n;
    // int stack[n];
    // int top=-1;
     //push(e);
    // print(stack,n);
//}