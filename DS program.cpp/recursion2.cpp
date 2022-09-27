// Program for Computing A raised to power n using Recursion

#include <iostream>
#include <math.h>
using namespace std;
int power(int a,int n){
    if(n==0)
        return 1;
    int p=a*power(a,n-1);
    return p;
}
int main(){
    int a;
    cin>>a;
    int n;
    cin>>n;
    cout<<power(a,n);
}