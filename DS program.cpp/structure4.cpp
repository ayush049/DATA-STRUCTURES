//Write a program to add two distances in inch-feet using structure.
// The values of the distances is to be taken from the user.

#include<bits/stdc++.h>
using namespace std;
struct Height{
    int fe;
    int in;
};
void display(struct Height h1,struct Height h2,struct Height h){
    h.in=(h1.in+h2.in)%12;
    int x=(h1.in+h2.in)/12;
    h.fe=(h1.fe+h2.fe+x);
    cout<<"The Resultant Height is :- ";
    cout<<h.fe<<" "<<h.in;
}
int main(){
    struct Height h1;
    struct Height h2;
    struct Height h;
    cout<<"Enter the 1st height: ";
    cin>>h1.fe>>h1.in;
    cout<<"Enter the 2nd height: ";
    cin>>h2.fe>>h2.in;
    display(h1,h2,h);
}