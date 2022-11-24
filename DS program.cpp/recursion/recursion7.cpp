// Reverse of a given number using recursion

#include <iostream>
using namespace std;
int rev(int n,int r){
    int a;
    if(n==0){
        return (r);
    }
    else{
        a=n%10;
        r=r*10 + a;
        return rev (n/10,r);}
}
int main(){
    int n;cin>>n;
    int r=0;
    cout<<rev(n,r);
    
}