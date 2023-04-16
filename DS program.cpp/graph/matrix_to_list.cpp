#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> convert( vector<vector<int>> a)
{
    vector<vector<int>> adjList(a.size());
    for (int i = 0; i < a.size(); i++)
    {
         
        for (int j = 0; j < a[i].size(); j++)
        {
            if (a[i][j] != 0)
            {
                adjList[i].push_back(j);
            }
        }
    }
    return adjList;
}
int main(){
    int v,e;
    cout<<"Enter number of vertices :- ";
    cin>>v;
    cout<<"Enter number of edges :- ";
    cin>>e;
    int mat[v+1][v+1];
    for(int i=0 ; i<v ; i++){
        for(int j=0 ; j<v ; j++){
            mat[i][j]=0;
        }
    }
    for(int i=0 ;i<e ; i++){
        int a,b;
        cout<<"Enter the end points of edges:- ";
        cin>>a>>b;
        mat[a][b]=1;
        mat[b][a]=1;
    }
    
}