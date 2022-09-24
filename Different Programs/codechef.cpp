#include <iostream>
using namespace std;
int main() {
  int t_c;
  cin>>t_c;
  while(t_c--) {
      int aset,bset,xint;
      cin>>aset>>bset>>xint;
      if(aset==bset) 
          cout<<"YES"<<endl;
      else if(abs(aset-bset)%(xint*2)==0)
          cout<<"YES"<<endl;
      else 
          cout<<"NO"<<endl;
  }
}