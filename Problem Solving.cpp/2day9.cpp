#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i=i+1){
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
        for(int k=1;k<i;k=k+1){
            cout<<"*";
        }
        for(int k=1;k<=i;k=k+1){
            cout<<"*";}
        cout<<endl;
    }
    for(int i=1;i<=n;i=i+1){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=i;k<n;k=k+1){
            cout<<"*";
        }
        for(int k=i;k<=n;k=k+1){
            cout<<"*";}
        cout<<endl;
    }
    
}