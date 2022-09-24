#include<bits/stdc++.h>
using namespace std;
int jsearch(int a[],int n,int x){
    int m=sqrt(n);
    int l=0;
    int h=m;
    int i=0;
    while(l<h){
        if(x<=h)
            return(l,h);
        else if(x>h){
            return (a,l+m,h+m);
        }

    }
}
int main(){
    int n,x,m,c=0,pos=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>x;
    jsearch(a,n,x);
    for(int i=l;i<=h;i++){
        if(x==a[i])
            c++;
            pos=i;
    }
    if(c>=1)
        cout<<"Element is present at index "<<pos;
    else    
        cout<<"Element is not present";

}