// #include<iostream>
// using namespace std;
// int bsearch(int a[],int n,int x){
//     int big=0;
//     int end=n-1;
//     int mid=(big + end)/2;
//     int i=0;
//     while(big<=end && x!=mid){
//         if(x>a[mid])
//             big=mid+1;
//         else 
//             end=mid-1;
//             mid=(big+end)/2;
//     }

// }
// int main(){
//     int n,x;
//     cout<<"Enter size of array: ";
//     cin>>n;
//     cout<<"Enter array elements: ";
//     int a[n];
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     cout<<"Enter number to be searched: ";
//     cin>>x;
//     bsearch(a,n,x);
// }



// BINARY SEARCH BY RECURSION

#include<iostream>
using namespace std;
 int bsearch(int a[],int x,int l, int h){
    int c=0;
    int mid=(l+h)/2;
    if(l<=h){
        if(x<a[mid])
           bsearch(a,x,l,mid-1); 
        else if(x>a[mid])
            bsearch(a,x,mid+1,h);
        else if(x==a[mid])
            cout<<"Element found at index= "<<mid;
    }
    else  
        cout<<"Element is not found";
    return 0;
    }

int main(){
    int n,x;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>x;
    int l=0;
    int h=n-1;
    int mid=(l+h)/2;
    bsearch(a,x,l,h);
}



