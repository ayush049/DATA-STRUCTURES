#include<bits/stdc++.h>
using namespace std;
struct student
{
    char name[10];
    int rno;
    int marks;
};
int main(){
    int n;
    cout<<"Enter number of enteries: ";
    cin>>n;
    struct student s[n];
    for(int i=0;i<n;i++){
        cout<<"Enter name: ";
        cin>>s[i].name;
        cout<<"Enter the roll no.: ";
        cin>>s[i].rno;
        cout<<"Enter the marks: ";
        cin>>s[i].marks;
    }
    for(int i=0;i<n;i++){
        cout<<s[i].name<<endl<<s[i].rno<<endl<<s[i].marks<<endl;
    }
}