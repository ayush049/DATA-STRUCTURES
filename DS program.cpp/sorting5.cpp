// MERGE SORT

#include <bits/stdc++.h>
using namespace std;
int mergesort(int a[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}
int main(){
	int n, i;
	cout<<"Enter the number of element :- ";
	cin>>n;
 	int a[n];
 	cout<<"Enter the elements :- ";
	for(i = 0; i < n; i++){
		cin>>a[i];
	}
    int l=a[0];
    int h=a[n];
    cout<<"The sorted array is: ";
    mergesort(a,l,h);
}