//     1
//    12
//   123
//  1234
// 12345






#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter nth number: ";
    cin>>n;
    // for(int i=n+1;i>=0;i--){
    //     cout<<" ";
    // }
        for(int i=1;i<=n;i++){
             for(int j=n-i;j>=1;j--){
                cout<<" ";
            }
            for(int k=1;k<=i;k++){
                cout<<k;
            }
        cout<<endl;
        }
        
}
    //  WRONG
