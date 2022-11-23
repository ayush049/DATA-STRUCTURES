// Write a program to add two time in hour, minute and second using structure.
// The values of the time is to be taken from the user.

#include<bits/stdc++.h>
using namespace std;
struct time{
    int h;
    int m;
    int s;
};
int main(){
    struct time t1;
    struct time t2;
    struct time t;
    cout<<"Enter the 1st time: ";
    cin>>t1.h>>t1.m>>t1.s;
    cout<<"Enter the 2nd time: ";
    cin>>t2.h>>t2.m>>t2.s;
    t.s=(t1.s+t2.s)%60;
    int x=(t1.s+t2.s)/60;
    int y=(t1.m+t2.m+x)%60;
    int z=(t1.m+t2.m+y)/60;
    t.h=(t1.h+t2.h+z);
    cout<<"The Resultant time is :- ";
    cout<<t.h<<" "<<t.m<<" "<<t.s;
}
