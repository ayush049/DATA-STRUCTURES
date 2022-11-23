// Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). 
//Store the information of the students. 1)- Write a function to print the names of all the students having age 14.
// 2)Write another function to print the names of all the students having even roll no.
// 3) Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).
#include<bits/stdc++.h>
using namespace std;
struct students{
    int rn;
    char na[10];
    int age;
    char ad[10];
};
void age14(struct students s[],int n){
    //struct students s;
    for(int i=1;i<=n;i++){
        if (s[i].age>14){
            cout<<s[i].na;
        }
    }
}
void reven(struct students s[],int n){
    for(int i=1;i<=n;i++){
        if(s[i].rn % 2==0)
            cout<<s[i].na<<endl;
    }
}
void rsearch(struct students s[],int n,int x){
    for(int i=1;i<=n;i++){
        if(s[i].rn==x){
            cout<<s[i].na<<endl;
            cout<<s[i].age<<endl;
            cout<<s[i].ad<<endl;
        }
    }
}
int main(){
    struct students s[100];
    int n,x;
    cout<<"Enter the numbers of students: ";
    cin>>n;
    for(int i=1;i<=n;i++){
    cout<<"Enter the roll no. : ";
    cin>>s[i].rn;
    cout<<"Enter the name: ";
    cin>>s[i].na;
    cout<<"Enter the age: ";
    cin>>s[i].age;
    cout<<"Enter the address: ";
    cin>>s[i].ad;
    cout<<endl;
    }
    cout<<"<------------------------------------------------>"<<endl;
    for(int i=1;i<=n;i++){
        cout<<"Data of student "<<i<<endl;
        cout<<"Roll number: "<<s[i].rn<<endl;
        cout<<"Name: "<<s[i].na<<endl;
        cout<<"Age: "<<s[i].age<<endl;
        cout<<"Address: "<<s[i].ad<<endl;
        cout<<endl;
    }

    cout<<"Students having age greater than 14 are: ";
    age14(s,n);
    cout<<endl;
    cout<<"Students having Even roll number: ";
    reven(s,n);
    cout<<endl;
    cout<<"Enter the roll number to be searched: ";
    cin>>x;
    rsearch(s,n,x);
}