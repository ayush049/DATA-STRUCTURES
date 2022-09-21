#include <iostream>
using namespace std;
int main(){
    int n,f=1;
    float s=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        f=f*i;
        s=s+(i/f);
    }
    cout<<s;
}