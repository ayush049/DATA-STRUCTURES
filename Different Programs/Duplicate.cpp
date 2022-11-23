#include<iostream>
using namespace std;
int main(){
    int n,max=0;
     cout<<"Enter the size of array :- ";
     cin>>n;
     int a[n];
     cout<<"Enter the elements : ";
     for(int i=0;i<n;i++){
         cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
    int c[max+1]={0};
    for(int i=0;i<n;i++){
        c[a[i]]=c[a[i]]+1;
    }
    for(int i=1;i<=max;i++){
        cout<<c[i]<<" ";
        // if(c[i]>1)
        //     cout<<i<<" is repeating "<<c[i]<<" times"<<endl;
        // else if(c[i]==1)
        //     cout<<i<<" is not repeating"<<endl;
        // else if(c[i]==0)
        //      cout<<i<<" is missing"<<endl;
     }

}