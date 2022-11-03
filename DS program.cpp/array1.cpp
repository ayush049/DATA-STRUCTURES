#include<iostream>
using namespace std;
void traverse(int a[],int n){
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Ayush Sharma   2100320100048    CSE A"<<endl;
    cout<<"Enter the size of array :- ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    traverse(a,n);
}

