#include <iostream>
using namespace std;
int main(){
    int n;
    float s=0.0 , f= 1.0;
    cout<<"Enter value of nth term: ";
    cin>>n;
    int x;
    cout<<"Enter value of x: ";
    cin>>x;
    int sign=1;
    for(int i=1;i<=n;i+=1){
        f=f*(2*i-1);
        s=s+sign*x*((2*i-1)/f);
        sign=sign*(-1);
    }
    cout<<"Sum is: "<<s;
}