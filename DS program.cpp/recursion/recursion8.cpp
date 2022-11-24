//Finding sum of the digits of the number

#include <iostream>
using namespace std;
int sum(int n,int s){
    int a;
    if(n==0){
        return (s);
    }
    else{
        a=n%10;
        s=s+a;
        return sum(n/10,s);}
}
int main(){
    int n;cin>>n;
    int s=0;
    cout<<sum(n,s);
    
}