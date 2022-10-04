//Program for Towers of Hanoi for n disk (user defined)

#include <iostream>
using namespace std;
void TOH(int n,char x,char y,char z){
    if(n==1)
        cout<<"Move disc from "<<x<<" to "<<z;
        return ;
    TOH(n-1,x,z,y);
    cout<<"Move disc from "<<x<<" to "<<y;
    TOH(n-1,y,x,z);
}
int main(){
    TOH(3,'A','B','C');
}