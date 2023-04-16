#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
class graph
{
    public:
    unordered_map<int ,list<int>> adj;
    void edge(int u , int v ,bool direction)
    {
        adj[u].push_back(v);
        if(direction==0)
        {
            adj[v].push_back(u);
        }
    }
    void printadj()
    {
        for(auto i:adj)
        {
            cout<<i.first<<"->";
            for(auto j:i.second)
            {
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};

int main()
{
   int n;
   cin>>n;
   graph g;
   int m; cin>>m;
   for(int i=0;i<m;i++)
   {
    int u,v;
    cin>>u>>v;
    g.edge(u,v,0);
   }
   g.printadj();
return 0;
}