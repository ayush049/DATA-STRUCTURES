#include <iostream>
using namespace std;
void sum(int n){
    float s=0;
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
        s=s+(f/i);
    }
    cout<<s;
}
int main(){
    int n;
    cin>>n;
    sum(n);
}