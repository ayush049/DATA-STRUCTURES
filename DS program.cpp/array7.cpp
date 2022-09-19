#include<iostream>
using namespace std;
int main(){
    int i,j,n,t[20];
    int a[20]={5,10,15,20,25};
    //n=5;
    i=0;
    j=4;
    while(i<j){
        t[20]=a[i];
        a[i]=a[j];
        a[j]=t[20];
        i++;
        j--;
        cout<<t[20]<<endl;
    }
}

// wrong 