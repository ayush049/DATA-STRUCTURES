#include<iostream>
using namespace std;
int main(){
    int x,n;
    cout<<"Ayush Sharma   2100320100048    CSE A"<<endl;
    cout<<"Enter the size of array :- ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter index number to be deleted: ";
    cin>>x;
    for(int i=x;i<=n;i++){
          a[i]=a[i+1];
        }        
    n--;
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
}