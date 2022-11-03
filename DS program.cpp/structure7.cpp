// Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) 
//using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks 
//and then display the percentage of each student.

#include <bits/stdc++.h>
using namespace std;
struct marks
{
    int rn;
    char name[10];
    int cm;
    int mm;
    int pm;
};
int main(){
    struct marks s[5];
    for(int i=1;i<=5;i++){
        cout<<"Enter the roll no.: ";
        cin>>s[i].rn;
        cout<<"Enter name: ";
        cin>>s[i].name;
        cout<<"Enter chemistry marks: ";
        cin>>s[i].cm;
        cout<<"Enter maths marks: ";
        cin>>s[i].mm;
        cout<<"Enter physics marks: ";
        cin>>s[i].pm;
    }
    int sm=0;
    for(int j=1;j<=5;j++){
        sm=sm+s[j].cm+s[j].mm+s[j].pm;
    }
    
}