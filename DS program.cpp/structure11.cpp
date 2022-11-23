// Write a program to compare two dates entered by user. 
// Make a structure named Date to store the elements day, month and year to store the dates.
// If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".

#include <bits/stdc++.h>
using  namespace std;
struct date{
    int d;
    int m;
    int y;
};
void compdate(struct date d1,struct date d2){
    if(d1.y==d2.y){
        if(d1.m==d2.m){
            if(d1.d==d2.d)
                cout<<"Dates are equal";
        }
        else
            cout<<"Dates are not equal"; 
    }
    else
        cout<<"Dates are not equal";   
}
int main(){
    struct date d1;
    struct date d2;
    cout<<"Enter the 1st date: ";
    cin>>d1.d>>d1.m>>d1.y;
    cout<<"Enter the 2nd date: ";
    cin>>d2.d>>d2.m>>d2.y;
    compdate(d1,d2);
}