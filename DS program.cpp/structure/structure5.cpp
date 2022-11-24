// Write a program to add two complex numbers using structure. 
// The values of the complex number is to be taken from the user.

#include<bits/stdc++.h>
using namespace std;
struct compln{
    int a;
    int b;
};
int main(){
    struct compln c1;
    struct compln c2;
    struct compln c;
    cout<<"Enter the 1st complex number: ";
    cin>>c1.a>>c1.b;
    cout<<"Enter the 2nd complex number: ";
    cin>>c2.a>>c2.b;
    c.b=(c1.b+c2.b);
    c.a=(c1.a+c2.a);
    cout<<"The Resultant compln is :- ";
    cout<<c.a<<"+"<<"i"<<c.b;
}
