// INDEX SEQUENTIAL SEARCH
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the size of arrray: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>x;
    issearch(a,n)
}