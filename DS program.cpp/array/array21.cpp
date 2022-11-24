#include<iostream>
using namespace std;
int main(){
    int r1=0,c1=0,r2=0,c2=0;
    cout<<"Enter number of rows and columns for first matrix: ";
    cin>>r1>>c1;
    int a[r1][c1];
    cout<<"Enter matrix elements"<<" ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
        cout<<"Original  matrix: "<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                    cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"Transpose of matrix: "<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                    cout<<a[j][i]<<" ";
            }
            cout<<endl;
        }
    }
    