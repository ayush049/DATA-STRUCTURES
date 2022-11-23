//#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100];
    // for(int i=1;i<=n;i++){
    //     cin>>a[i];
    // }
    for(int i=2;i<=n;i+=2){
        cout<<a[i]<<" ";
    }   
}