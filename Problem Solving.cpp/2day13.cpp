#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>0){
        n=n-5;
        cout<<n;
         n--;
    }
    else{
        n=n+5;
        cout<<n;
        n++;
    }
}