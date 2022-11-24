//Program for finding factorial of a given number using recursion

#include <iostream>
using namespace std;
int fact(int n){
    if(n==1)
        return 1;
    int f=1;
    f=n*fact(n-1);
    return f;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);

}