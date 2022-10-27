#include<iostream>
using namespace std;
int hash(int key){
    int m=7;
    int h=key%m;
    return h;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
    int dat[max+1]={0};
    for(int i=0;i<=max;i++){
        
    }
}