#include<iostream>
using namespace std;
void traverse(int a[]){
    for (int i=0;i<= 5;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[10]={2,3,67,9,4,45};
    traverse(a);
}

