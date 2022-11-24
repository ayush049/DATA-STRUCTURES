#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[10];
    int n; 
    for(int i=0;i<10;i++){
        cout<<&a[i]<<endl;
    }
    cout<<endl;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<(&a[0]+n*(1));
    
}