#include<iostream>
using namespace std;
int main(){
    int n,x,index,i;
    int a[10]={1,4,2,5,9,30};
    n=6;
    cout<<"Enter number to be inserted"<<endl;
    cin>>x;
    cout<<"Enter index number"<<endl;
    cin>>index;
    for(i=n-1;i>=index;i--){
        a[i+1]=a[i];
        a[i]=x;
    }
    n++;
    for(int j=0;j<=n-1;j++){
        cout<<a[j];
    }
}
