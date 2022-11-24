#include<bits/stdc++.h>
using namespace std;
void product(int a,int b,int c,int d, int x, int y){
    x=((a*c)-(b*d));
    y=((a*d)+(b*c));

    cout << x <<" + i"<< y;
}
struct compln{
    int a;
    int b;
};
int main(){
    struct compln c1;
    struct compln c2;
    struct compln c;
    cout<<"Enter the 1st complex number: ";
    cin>>c1.a>>c1.b;
    cout<<"Enter the 2nd complex number: ";
    cin>>c2.a>>c2.b;
    cout<<"Multiplication of both numbers is: ";
    int x=0,y=0;
    product(c1.a,c1.b,c2.a,c2.b,x,y);
    
//     c.b=(c1.b+c2.b);
//     c.a=(c1.a+c2.a);
//     cout<<"The Resultant compln is :- ";
//     cout<<c.a<<"+"<<"i"<<c.b;
 }
