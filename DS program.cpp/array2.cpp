#include<iostream>
using namespace std;
int main(){
    int n,x,index,i;
    cout<<"Ayush Sharma   2100320100048    CSE A"<<endl;
    cout<<"Enter the size of array :- ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter number to be inserted: ";
    cin>>x;
    cout<<"Enter index number: ";
    cin>>index;
    for(i=n-1;i>=index;i--){
        a[i+1]=a[i];
        a[i]=x;
    }
    n++;
    for(int j=0;j<=n-1;j++){
        cout<<a[j]<<" ";
    }
}
