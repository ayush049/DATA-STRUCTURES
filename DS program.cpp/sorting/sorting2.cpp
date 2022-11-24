//SELECTION SORT

#include<iostream>
using namespace std;
void ssort(int a[],int n){
    int t;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";    }
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
    ssort(a,n);
}