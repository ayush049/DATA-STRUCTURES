// //Program for Decimal to Hexadecimal Conversion


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
    if(s.item[i]>=10 && s.item[i]<=15)
        cout<<char(55+s.item[i]);
    
    else
        cout<<s.item[i];
  }
  cout<<endl;
}

int main(){
    int n,r=0;
    cin>>n;
    while(n>0){
        r=n%16;
        push(r);
        n=n/16;
    }
    display();
    cout<<endl;
    //cout<<"stack has been created successfully"<<endl;
}    



// #include<bits/stdc++.h>
// using namespace std;
// #define TRUE 1
// #define FALSE 0
// struct Stack {
//     int item[10];
//     int top;
// };
// struct Stack S;

// void Initialize(){
//     S.top=-1;
// }
// void push(int x){
//     if (S.top==(10-1)){
//         cout<<"Stack Overflow";
//         exit(1);
//     }
//     else{
//         S.top=S.top+1;
//         S.item[S.top]=x;
//     }

// }
// int IsEmpty(){
//     if (S.top==-1){
//         return TRUE;
//     }
//     else{
//         return FALSE;
//     }
// }
// int Pop(){
//     if(IsEmpty()){
//         cout<<"Stack Underflow";
//         exit(1);
//     }
//     else{
//         int x=S.item[S.top];
//         S.top=S.top-1;
//         return x;
//     }
// }
// int stacktop(){
//     int x= S.item[S.top];
//     return x;
// }
// int main(){
//     int x,rem,a;
//     char conversion[16]={'0','2','3','4','4','5','6','7','8','9','A','B','C','D','E','F'};
//     cin>>x;
//     Initialize();
//     while(x!=0){
//         rem=x%16;
//         push(rem);
//         x=x/16;
//     }
//     while(!IsEmpty()){
//         a=Pop();
//         cout<<conversion[a];
//     }
// }