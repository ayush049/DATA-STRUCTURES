#include<bits/stdc++.h>
using namespace std;
struct students
{
    int rn;
    string name;
    int marks[6];
};
int main(){
    struct students s;
    cout<<"Enter name: ";
    cin>>s.name;
    cout<<"Enter the roll no.: ";
    cin>>s.rn;
    cout<<"Enter the marks of all subjecta: ";
    for(int i=0;i<6;i++){
        cin>>s.marks[i];
    }
    // sort(s.marks,s.marks+6,greater<int>());
    int min1=s.marks[0];
    for(int i=0;i<6;i++){
        if(s.marks[i]<min1)
            min1=s.marks[i];
    }
    int min2=s.marks[0];
        for(int i=0;i<6;i++){
            if(s.marks[i]==min1)
                continue;
            else if (s.marks[i]<min2)
                min2=s.marks[i];
    }
    int sm;
    for(int i=0;i<6;i++){
        if(s.marks[i]==min1 || s.marks[i]==min2 )
            continue;
        sm=sm+s.marks[i];
    }
    int a=sm/4;
    if(sm>95){
        cout<<s.name<<" is Qualified";}
    else{
        cout<<s.name<<" is not Qualified";
    }
}
    

