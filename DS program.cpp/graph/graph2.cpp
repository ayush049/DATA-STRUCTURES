// adjacency list

#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,e;
    cout<<"Enter number of vertices :- ";
    cin>>v;
    cout<<"Enter number of edges :- ";
    cin>>e;
    vector<int>li[v+1];
    for(int i=0 ;i<e ; i++){
        int a,b;
        cout<<"Enter the end points of edges:- ";
        cin>>a>>b;
        li[a].push_back(b);
        li[b].push_back(a);
    }
    cout<<"Adjacency list is "<<endl;
    for(int i=0 ; i<v ; i++){
        cout<<i<<" --> ";
        for(int j=0 ; j<li[i].size() ; j++){
            cout<<li[i][j]<<" ";
        }
        cout<<endl;
    }
}




// adjanc matrix


#include<bits/stdc++.h>
using namespace std;
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
    cout<<"Adjacency matrix is "<<endl;
    for(int i=0 ; i<v ; i++){
        cout<<i<<" : ";
        for(int j=0 ; j<v ; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}