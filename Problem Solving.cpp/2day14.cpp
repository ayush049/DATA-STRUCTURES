// PROGRAM FOR "N"

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // if(n>2 && n<20){
    //     for(int i=1;i<=n;i++){
    //         cout<<"*";}
    //     cout<<endl;
    //     for(int i=2;i<=n-1;i++){
    //         for(int j=i;j<=2*(n-i-1);j++)
    //             cout<<" ";
    //         // for(int k=i;k>=1;k--)
    //         //     cout<<"*";
    //         // for(int k=2;k<=i;k++)
    //         //     cout<<" ";
    //         cout<<endl;
    //     }
    // }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n || j==i)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}