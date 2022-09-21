#include<iostream>
using namespace std;
void pattern(int n){
    int m=n;
    if(n>0){
        n=n-5;
        cout<<n<<" ";
        return pattern(n);
       
    }
    else if(n<0){
        n=n+5;
        cout<<n<<" ";
        // return pattern(n);
    }
    // else if(n==0){
    //     n=n+5;
    //     cout<<n<<" ";
    //     return pattern(n);
    // }
    
//     else if(n==m){
//         cout<<m;
//    }
}
int main(){
    int n;
    cin>>n;
    int m=n;
    pattern(n);
}