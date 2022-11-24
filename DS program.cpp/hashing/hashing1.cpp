// Program for Hash Table Implementation for Basic Hash Function (Without collisions)

#include <bits/stdc++.h>
using namespace std;
int hasf(int key,int m){
    int h=key%m;
    return h;
}
int main(){
    int n,key,ind;
    cin>>n;
    vector<int>array(n,0);
    for(int i=1;i<=n;i++){
        cin>>key;
        ind=hasf(key,11);
        array.push_back(ind);
    }
}