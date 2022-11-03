//Write a program to add two distances in inch-feet using structure.
// The values of the distances is to be taken from the user.

#include<bits/stdc++.h>
using namespace std;
struct Height{
    int fe;
    int in;
};
int main(){
    struct Height h1={13,11};
    struct Height h2={7,8};
    struct Height h;
    h.in=(h1.in+h2.in)%12;
    int x=(h1.in+h2.in)/12;
    h.fe=(h1.fe+h2.fe+x);
    cout<<"The Resultant Height is :- ";
    cout<<h.fe<<" "<<h.in;
}