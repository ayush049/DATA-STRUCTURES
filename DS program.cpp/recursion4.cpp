// GCD

#include<bits/stdc++.h>
using namespace std;
int LCM(int a,int b){
    int G=1;
    int p=a*b;
    for(int i=1;i<=p;i++){
        if(a%i==0 && b%i==0)
            G=i;
    }
    return(p/G);
}
int GCD(int a,int b){
    int G=1;
    int p=a*b;
    for(int i=1;i<=p;i++){
        if(a%i==0 && b%i==0)
            G=i;
    }
    return G;
}
// int GCD(int a,int b){
//     int m=min(a,b);
//     while (m>0) {
//         if ((a%m==0)&&(b%m==0)){
//             break;
//         }
//         m--;
//     }
//     return m; 
// }
int main(){
    int a,b;
    cout<<"Enter the values of a and b :- ";
    cin>>a>>b;
    cout<<"GCD: "<<GCD(a,b)<<endl;
    cout<<"LCM: "<<LCM(a,b);
}
