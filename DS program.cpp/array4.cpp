#include<iostream>
using namespace std;
int main(){
    int x,n;
    int a[20]={5,10,15,20,25};
    n=5;
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<" "<<endl;
    }
    cout<<"Enter index number to be deleted"<<endl;
    cin>>x;
    for(int i=x;i<=n;i++){
          a[i]=a[i+1];
        }        
    n--;
    for(int j=0;j<=n-1;j++){
        cout<<a[j]<<" ";
    }
}