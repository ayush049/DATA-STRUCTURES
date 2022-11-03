#include<iostream>
using namespace std;
int main(){
    int a[10], b[10], c[20];
    int m, n;
    cout<<"Ayush Sharma   2100320100048    CSE A"<<endl;
    cout<<"Enter the size of first array :- ";
    cin>>m;
    cout<<"Enter the first array elements : ";
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"Enter the size of second array :- ";
    cin>>n;
    cout<<"Enter the second array elements : ";
    for(int j=0;j<n;j++){
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
        else{
            c[k]=b[j];
            j++;
            k++;
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
    cout<<"merged array is"<<endl;
    for(i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    } 
    return 0;
}
