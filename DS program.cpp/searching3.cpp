//TERNARY SEARCH

#include<iostream>
using namespace std;
int tsearch(int a[],int x,int l,int h){
    int mid1=l-(h-l)/3;
    int mid2=h+(h-l)/3;
    if(x==a[mid1])
        return mid1;
    else if(x==a[mid2])
        return mid2;
    else if(x<a[mid1])
        tsearch(a,x,l,mid1-1);
        
    else if(x>a[mid2])
        tsearch(a,x,mid2+1,h);
    else
        mid1=mid1+1;
        mid2=mid2-1;
    
    return 0;
}

int main(){
    int n,x,c;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>x;
    int l=0;
    int h=n-1;
    c=tsearch(a,x,l,h);
    cout<<c;
}