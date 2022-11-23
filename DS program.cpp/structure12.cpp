//12. Write a structure to store the names, salary and hours of work per day of 10 employees in a company. 
//Write a program to increase the salary depending on the number of hours of work per day as follows and 
//then print the name of all the employees along with their final salaries.
// Hours of work per day 8 Increase in salary $50



#include<bits/stdc++.h>
using namespace std;
struct Employees{
    char na[20];
    int sa;
    int hwpw;
};
int main(){
    Employees st[100];
    int n;
    cout<<"How many Employees :- ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cout<<"Details of Employee "<<i<<" : "<<endl;
        cout<<"name : ";
        cin>>st[i].na;
        cout<<"Salary : ";
        cin>>st[i].sa;
        cout<<"Hours of work per day : ";
        cin>>st[i].hwpw;
    }
    for(int i=0 ; i<=n ; i++){
        st[i].sa+=50;
    }
    cout<<endl;
    cout<<"Updated list is "<<endl;
    cout<<endl;
    for(int i=1 ; i<=n ; i++){
        cout<<"Name: ";
        cout<<st[i].na<<endl;
        cout<<"Salary: ";
        cout<<st[i].sa<<endl;
        cout<<"Hours of work per day: ";
        cout<<st[i].hwpw<<endl;
        cout<<endl;
    }
    
}