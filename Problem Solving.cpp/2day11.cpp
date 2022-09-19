#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        for(int k=i;k<n;k++)
            cout<<"  ";
        for(int j=i;j<n;j++)
            cout<<"  ";
        for(int k=i;k>=1;k--)
            cout<<k<<" ";
        cout<<endl;
    }
       
}