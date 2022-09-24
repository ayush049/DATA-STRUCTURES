//INSERTIONN SORT

#include<iostream>
using namespace std;
void isort(int a[],int n){
    for(int i=1;i<n;i++){
     int t=a[i];
     int j=i-1;
     while(j>=0 && a[j]>t){
        a[j+1]=a[j];
        j--;
     }  
     a[j+1]=t; 
    }
    for(int i=0;i<n;i++){
        cout<<a[i];    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Sorted array is: ";
    isort(a,n);
}