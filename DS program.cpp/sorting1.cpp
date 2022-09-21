//BUBBLE SORT

#include<iostream>
using namespace std;
void bsort(int a[],int n){
    int t,i,c=0;
    int flag=1;
    for(i=0;i<n && flag==1;i++){
        flag=0;
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                flag=1;
                
            }
        }
        c++;
    }
    cout<<"number of passes"<<c<<endl;
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bsort(a,n);
}