//PALINDROME BY RECURSION

// #include <bits/stdc++.h>
// using namespace std;
// int palindrome(int n,int r){
//     int a;
//     if(n==0)
//         return r;
//     a=n%10;
//     r=r*10+a;
//     return palindrome(n/10,r);
// }
// int main(){
//     int n;cin>>n;
//     int temp=n;
//     int r=0,ind;
//     ind=palindrome(n,r);
//     if(ind==temp)
//         cout<<"palindome";
//     else 
//         cout<<"Not palindrome";
// }


#include<bits/stdc++.h>
using namespace std;
char strpal(char a,char r){
    char n;
    if(n=='\0')
        return r;
    else
        n=a%10;
        r=r*10+n;
        return strpal(a/10,r);
}
int main(){
    char a;
    cout<<"Enter the string: ";
    cin>>a;
    char temp=a;
    char r;
    char ind=strpal(a,r);
    if(ind==temp)
        cout<<"palindome";
    else 
        cout<<"Not palindrome";
}
