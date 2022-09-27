#include<bits/stdc++.h>
using namespace std;

int lsearch(int a[],int lo,int hi,int x){
     for(int i=lo;i<=hi;i++){
          if(a[i] == x)
               return i;
     }
     return -1;
}

int jsearch(int a[],int n,int x){
       int jump = sqrt(n);
       int lo = 0 , hi = jump;
       while( hi< n){
          if(a[hi]>= x)
               return lsearch(a,lo,hi,x);
          else
               lo = hi+1 , hi +=jump;
          }
          return -1;
}


int main(){
     cout<<"Enter the size of array: ";
     int n,x;
     cin>>n;
     int a[n];
     cout<<"Enter the array elements: ";
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     cout<<"Enter the number to be searched: ";
     cin>>x;
     int ind = jsearch(a,n,x);
     if(ind!=-1){
          cout<<"The entered element is present at index: "<<ind;
     }
     else{
          cout<<"The entered element is not in the array ";
     }
     // ind!=-1?cout<<"the entered element is present at index at: "<<ind<<"\n":cout<<"it is not present in the array\n";

}