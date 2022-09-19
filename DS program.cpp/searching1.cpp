#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
        //cout<<a[i];
    }
    int x=0,c=0,pos=0;
    cout<<"Enter the number to be searched: ";
    cin>>x;
    for(int i=0;i<n;i++){
        if (a[i]==x){
            pos=i;
            c++;
        }
    }
    if(c==1)
        cout<<"Number is present at index: "<<pos;
    else
        cout<<"Number is not present in the array";
    
    return 0;

}