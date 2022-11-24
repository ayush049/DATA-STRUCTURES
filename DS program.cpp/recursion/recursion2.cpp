// Program for Computing A raised to power n using Recursion

#include <iostream>
#include <math.h>
using namespace std;
// int power(int a,int n){
//     if(n==0)
//         return 1;
//     int p=a*power(a,n-1);
//     return p;
// }
// int main(){
//     int a;
//     cin>>a;
//     int n;
//     cin>>n;
//     cout<<power(a,n);
// }

int pow(int a,int n){
    int p;
    if(n==0)
        return 1;
    p=a*pow(a,n-1);
    return p;
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<pow(a,n);
}