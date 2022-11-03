//REVERSAL OF AN ARRAY 

#include <iostream>
using namespace std;
int main(){
    int n,i,temp=0 ;
    cout<<"Ayush Sharma   2100320100048    CSE A"<<endl;
    cout<<"Enter the size of array :- ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0 ; i<n/2 ; i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
        }
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}