//quick sort 
// #include<bits/stdc++.h>
// using namespace std;
// int partition(int a[],int l,int h){
//     int p=a[l];
//     int i=l,j=h;
//     while(1){
//         do{
//             i++;
//         }while(a[i]<p);
//         do{
//             j--;
//         }while(a[i]>p);
//         if(i>=j)
//             return j;
//             swap(a[i],a[j]);
//     }
//     // swap(a[l],a[j]);
//     // return j;  
// }
// void quicksort(int a[],int l,int h){
//     if(l<h){
//         int j=partition(a,l,h);
//         quicksort(a,l,j);
//         quicksort(a,j+1,h);
//     }
//      for(int i=l;i<h;i++){
//         cout<<a[i]<<" ";
// }
// // void display(int a[],int n){
// //     for(int i=0;i<n;i++){
// //         cout<<a[i]<<" ";
// //     }
//  }
// int main(){
//     int n;
//     cout<<"Enter the size: ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter the numbers: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int l=0;
//     int h=n-1;
//     cout<<"The sorted array is: ";
//     quicksort(a,l,h);
// }






#include<bits/stdc++.h>
using namespace std;
int partition(int a[] , int low , int high){
    int i=low , j=high+1 ;
    int pivot=a[low];
    do{
        do{
            i++;
        }while(a[i]<pivot);
        do{
            j--;
        }while(a[j]>pivot);
         if(i<j){
            swap(a[i],a[j]);
        }
    }while(i<j);
    swap(a[j],a[low]);
        return j;
}
int Quick_Sort(int a[] , int low , int high){
    if(low<high){
        int j=partition(a,low,high);
        Quick_Sort(a, low, j-1);
        Quick_Sort(a, j+1, high);

    }
    return 0;
}
int main(){
	int n, i;
	cout<<"Enter the number of element :- ";
	cin>>n;
 	int a[n+1];
 	cout<<"Enter the elements :- ";
	for(i = 0; i < n; i++){
		cin>>a[i];
	}
    //a[n]=INT_MAX;
 	Quick_Sort(a, 0, n-1);
	cout<<"Sorted array :-";
	for (i = 0; i < n; i++)
        cout<<a[i]<<" ";
}
