// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t_c;
//     string s;
//     cin>>t_c;
//     while(t_c--){
//         cin>>s;
//         int i=strlen(s);
//         while(
            
//         }
//     }
// 	return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int t_c;
//     string s,t,m;
//     cin>>t_c;
//     while(t_c--){
//         cin>>s>>t;
//         for(int i=1;i<s.size;i++){
//             for(int j=1;j<t.size;j++){
//                 if(s[i]==t[j])
//                     m[]
//             }
//         }
//     }
// 	return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// #define TRUE 1
// #define FALSE 0
// struct Stack {
//     char item[10];
//     int top;
// };
// struct Stack S;

// void Initialize(){
//     S.top=-1;
// }
// void push(char x){
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
// char Pop(){
//     if(IsEmpty()){
//         cout<<"Stack Underflow";
//         exit(1);
//     }
//     else{
//         char x=S.item[S.top];
//         S.top=S.top-1;
//         return x;
//     }
// }
// int stacktop(){
//     char x= S.item[S.top];
//     return x;
// }
// int precedence(char a1 , char a2){
//     if((a1=='$') || (a1=='*') || (a1=='/') || (a1=='%')){
//         if(a2=='$'){
//             return FALSE;
//         }
//         else{
//             return TRUE;
//         }
//     }
//     else{
//         if((a1=='+') || (a1=='-')){
//             if((a2=='+') || (a2=='-')){
//                 return TRUE;
//             }
//             else{
//                 return FALSE;
//             }
//         }
//     }
// }
// void infix_to_postfix(char *infix){
//     int i=0,j=0;
//     char postfix[20],s,x;
//     Initialize();
//     while(infix[i]!='\0'){
//         s=infix[i++];
//         if((s>='a' && s<='z')||(s>='A' && s<='Z')||(s>='0' && s<='9')){
//             postfix[j]==s;
//             j++;
//         }
//         else{
//             while(!IsEmpty() && precedence(stacktop(),s)){
//                 x=Pop();
//                 postfix[j]=x;
//                 j++;
//             }
//             push(s);
//         }
//     }
//     while(!IsEmpty()){
//         x=Pop();
//         postfix[j]=x;
//         j++;
//     }
//     postfix[j]='\0';
//     cout<<"postfix :- "<<postfix;
// }
// int main(){
//     char infix[]="a+b";
//     infix_to_postfix(infix);
// }


// leetcode contest question below 

// string oddString(vector<string>& wd) {
//             int n = wd[0].size();
//             map<vector<int>,int>as1;
//             for(int i=0;i<wd.size();i++){
//                     vector<int>tp;
//                     for(int j=1;j<n;j++){
//                         tp.push_back(wd[i][j]-wd[i][j-1]);}
//                     as1[tp]=as1[tp]+1;}
//             vector<int>tps;
//             for(auto i : as1){
//                     if(i.second==1){
//                             tps=i.first;}}
//             for(int i=0;i<wd.size();i++){
//                     vector<int>tp;
//                    for(int j=1;j<n;j++){
//                         tp.push_back(wd[i][j]-wd[i][j-1]);}
//                    if(tp==tps){
//                         return(wd[i]);}}
//             return(wd[0]);



