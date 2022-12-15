#include <iostream>
using namespace std;
int main(){
    int m=0,n=0;
    cout<<"Enter number of rows and columns: ";
    cin>>m>>n;
    cout<<"Enter matrix elements"<<" ";
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Sum of rows: ";
    int s=0;
    int s1=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<=n;j++){
            s=s+a[i][j];
            s1=s1+a[j][i];
        }
    }
    cout<<s<<endl;
    cout<<s1;
   

}

