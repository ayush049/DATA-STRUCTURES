//Program for finding nth Fibonacci number using Recursion and improving its run time to save stack operations

// #include <iostream>
// using namespace std;
// int fib(int n){
//     if(n==1||n==2)
//         return n-1;
//     else
//         return fib(n-1)+ fib(n-2);
// }
// int main(){
//     // int n;
//     // cin>>n;
//     for(int i=1;i<=100;i++)
//         cout<<i<<"->"<<fib(i)<<" ";
// }

#include <iostream>
using namespace std;
int dat[101]={0};
int fib(int n){
    if(n==1||n==2)
        return dat[n]=n-1;
    else if(dat[n]==0)
        dat[n]=fib(n-1)+fib(n-2);
    return dat[n];
}
int main(){
    // int n;
    // cin>>n;
    for(int i=1;i<=100;i++)
        cout<<i<<"->"<<fib(i)<<" ";
}