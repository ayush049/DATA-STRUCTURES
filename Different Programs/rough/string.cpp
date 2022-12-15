#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[20];
    cin.getline(s,20);

    // cout<<s<<endl;
    // cout<<strlen(s)<<endl;
    // while(cin.peek()=='n'){
    //     cin.ignore(2,'n');
    // }

    cout<<atol(s)<<endl;
    cout<<strtol(s);


}