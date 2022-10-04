//UNION OF TWO ARRAYS

#include<iostream>
using namespace std;
int main(){
    
    int c[20];
    int m, n,c2;
    
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
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j]){
            c[k]=b[j];
            j++;
            k++;
        }  
        else{
            c[k]=a[i];
            i++;
            k++;
            j++;
            c2++;
        }
    }
    while(i<m){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n){
        c[k]=b[j];
        j++;
        k++;
    }
    cout<<"union of arrays is:"<<endl;
    for(i=0;i<m+n-c2;i++){
        cout<<c[i]<<" ";
    } 
    return 0;
}
