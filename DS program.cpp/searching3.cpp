//TERNARY SEARCH

// #include<iostream>
// using namespace std;
// int tsearch(int a[],int x,int l,int h){
//     int mid1=l-(h-l)/3;
//     int mid2=h+(h-l)/3;
//     if(x==a[mid1])
//         return mid1;
//     else if(x==a[mid2])
//         return mid2;
//     else if(x<a[mid1])
//         return tsearch(a,x,l,mid1-1);  
//     else if(x>a[mid2])
//         return tsearch(a,x,mid2+1,h);
//     else
//         // mid1=mid1+1;
//         // mid2=mid2-1;
//         return tsearch(a,x,mid1+1,mid2-1);
//     //return 1;   
// }
// int main(){
//     int n,x,c;
//     cout<<"Enter size of array: ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"Enter element to be searched: ";
//     cin>>x;
//     int l=0;
//     int h=n-1;
//     c=tsearch(a,x,l,h);
//     cout<<c;
// }



#include<iostream>
using namespace std;
int Ternary_Search(int a[] , int n , int x){
    int s=0;
    int e=n-1;
    while(e>=s){
        int m1=s+(e-1)/3;
        int m2=e-(e-1)/3;
        if(a[m1]==x){
            return m1;
        }
        else if(a[m2]==x){
            return m2;
        }
        else if(a[m1]>x){
            e=m1-1;
        }
        else if(a[m2]>x){
            s=m2+1;
        }
        else{
            s=m1+1;
            e=m2-1;
        }
    }
}
int main(){
    int n ,x , i;
    int a[10];
    cout<<"enter the number of element in the array :- ";
    cin>>n;
    cout<<"enter the array elements :- ";
    for(i=0 ; i<n ; i++){
        cin>>a[i];
    }
    cout<<"enter the element to be searched :- ";
    cin>>x;
    cout<<Ternary_Search(a,n,x);
}
