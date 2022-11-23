// //Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.

#include<bits/stdc++.h>
using namespace std;
struct student
{
    int rno;
    char name[10];
    int age;
    char adr[10];
    int marks;
};
int main(){
    struct student s[20];
    int n;
    cout<<"Enter number of enteries: ";
    cin>>n;;
    for(int i=1;i<=n;i++){
        cout<<"Enter the detail for "<<i<<" student"<<endl;
        cout<<"Enter the roll no.: ";
        cin>>s[i].rno;
        cout<<"Enter name: ";
        cin>>s[i].name;
        cout<<"Enter age: ";
        cin>>s[i].age;
        cout<<"Enter address: ";
        cin>>s[i].adr;
        cout<<"Enter the marks: ";
        cin>>s[i].marks;
    }
    cout<<"<------------------------------------------------>"<<endl;
    for(int i=1;i<=n;i++){
        cout<<"Data of "<<i<<" student: "<<endl;
        cout<<"Roll number: "<<s[i].rno<<endl;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Age: "<<s[i].age<<endl;
        cout<<"Address: "<<s[i].adr<<endl;
        cout<<"Marks: "<<s[i].marks<<endl;
    }
}

