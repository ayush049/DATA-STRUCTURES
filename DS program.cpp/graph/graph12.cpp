// indegree and outdegree

#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,e,i,a,b;
    cout<<"Enter The Number Of vertices :- ";
    cin>>v;
    vector<int>adj[v];
    vector<int>InDeg(v);
    vector<int>OutDeg(v);
    cout<<"Enter the Number Of edges :- "; 
    cin>>e;
    for(int i=1; i<=e ; i++){
        cout<<"Enter the end points :- ";
        cin>>a>>b;
        adj[a].push_back(b);
        //adj[b].push_back(a);
    }
    for(int i=0 ; i<v ; i++){
        int j=0;
        OutDeg[i]=adj[i].size(); // for indegree
        cout<<i<<" : ";
        for(int j=0 ; j<adj[i].size() ; j++){
            InDeg[adj[i][j]]++; // for outdegree
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"InDegree and OutDegree are "<<endl;
    for(int i=0 ; i<v ; i++){
        cout<<i<<" In = "<<InDeg[i]<<" out = "<<OutDeg[i]<<endl;
    }
    
}