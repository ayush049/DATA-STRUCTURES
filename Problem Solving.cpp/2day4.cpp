#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=i;
        for(int j=1;j<=i;j++){
            cout<<char(64+k);
            k++;
        }
        cout<<endl;
    }
}