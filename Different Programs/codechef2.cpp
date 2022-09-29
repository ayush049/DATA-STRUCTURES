#include <bits/stdc++.h>
using namespace std;
int main() {
	int t_c,size;
	cin>>t_c;
	while(t_c--){
	    cin>>size;
	    vector<int>v;
	    for(int j=0;j<size;j++){
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    int le = *max_element(v.begin(), v.end());
	    int len = le +1;
	    vector<int>dat(len,0);
	    for(int k=0;k<size;k++){
	        dat[v[k]]+=1;
	    }
	    int ans = *max_element(dat.begin(), dat.end());
	    int op = size-ans;
	    cout<<op<<endl;
	}
	return 0;
}