#include<iostream>
using namespace std;
int main(){
    int n,max=0;
     cout<<"Enter the size of array :- ";
     cin>>n;
     string str;
     cin>>str;
     int dat[26]={0};
     for(int i=0;i<'\0';i++){
        dat[str[i]-'a']+=1;
    }
        for(int i=1;i<=26;i++){
            if (dat[i]>1){
                //cout<<char(i+'a');
                cout<<"repeating "<<dat[i];
             }
            else if(dat[i]==1){
                   // cout<<char(i+'a');
                    cout<<"Not repeating"<<dat[i];
            }
        }
    return 0;
    
}