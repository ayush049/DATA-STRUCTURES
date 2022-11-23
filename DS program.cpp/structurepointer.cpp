#include<bits/stdc++.h>
using namespace std;
struct student{
    int r;
    char n[10];
    int m;
}s[10],*s1;
void display(struct student s[],struct student s1[],int n){
    cout<<"----------------------------"<<endl;
    for(int i=1;i<=n;i++){
    cout<<"Roll Number "<<(s1+i)->r<<endl;
    cout<<"Name "<<(s1+i)->n<<endl;
    cout<<"Marks "<<(s1+i)->m<<endl;
    }
}
int main(){
    s1=&s[0];
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    for(int i=1;i<=n;i++){
    cout<<"Enter the roll number: ";
    cin>>(s1+i)->r;
    cout<<"Enter the name: ";
    cin>>(s1+i)->n;
    cout<<"Enter the marks: ";
    cin>>(s1+i)->m;
    }
    display(s,s1,n); 
}
