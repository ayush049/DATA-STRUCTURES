// MERGE SORT

#include <bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int mid,int h){
    int i=l,j=mid+1,k=l;
    int c[k];
    while(i<mid && j<h){
        if(a[i]<a[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>a[j]){
            c[k]=a[j];
            j++;
            k++;
        }  
    }
    while(i<mid){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<h){
        c[k]=a[j];
        j++;
        k++;
    }
    for(int i=0;i<=k;i++){
        a[i]=c[i];
    }
    for(i=0;i<=k;i++){
        cout<<a[i]<<" ";
    } 
}
int mergesort(int a[],int l,int h){
    while(l<h){
        int mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}
int main(){
	int n, i;
	cout<<"Enter the size of array :- ";
	cin>>n;
 	int a[n];
 	cout<<"Enter the elements :- ";
	for(i = 0; i < n; i++){
		cin>>a[i];
	}
    int l=0;
    int h=n-1;
    cout<<"The sorted array is: ";
    mergesort(a,l,h);
    
}