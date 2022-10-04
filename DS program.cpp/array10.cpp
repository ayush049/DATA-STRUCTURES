// INTERSECTION OF TWO ARRAYS

#include<iostream>
using namespace std;
int main(){
    
    int c[20];
    int m, n,c1,c2,c3;
    
     cout<<"Enter the size of first array :- ";
     cin>>m;
     int a[m];
     cout<<"Enter the first array elements : ";
     for(int i=0;i<=m-1;i++){
         cin>>a[i];
     }
     cout<<"Enter the size of second array :- ";
     cin>>n;
     int b[n];
     cout<<"Enter the second array elements : ";
     for(int j=0;j<=n-1;j++){
        cin>>b[j];
    }
    
    //logic
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            i++;            
        }
        else if(a[i]>b[j]){
            j++;            
        }  
        else{
            c[k]=a[i];
            i++;
            k++;
            j++;
            c3++;
        }
    }    
    cout<<"Intersection of arrays is"<<endl;
    for(i=0;i<c3;i++){
        cout<<c[i]<<" ";
    } 
    return 0;
}
