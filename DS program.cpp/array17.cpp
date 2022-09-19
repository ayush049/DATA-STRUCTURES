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
    cout<<"Enter number of rows and columns of second matrix: ";
    cin>>r2>>c2;
    if(c1==r2){
        int b[r2][c2];
        cout<<"Enter matrix elements";
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                 cin>>b[i][j];
             }
         }
        int s[r1][c2];
        cout<<"Subtracted Matrix is"<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                s[i][j]=a[i][j]-b[i][j];
                    cout<<s[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
        cout<<"Matrices cannot be subtracted";   
}   