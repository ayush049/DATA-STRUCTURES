//1
//23
//345
//4567


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the nth element";
    cin>>n;
    for(int i=1;i<=n;i+=1){
        int k=i;
        for(int j=1;j<=i;j+=1){
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}