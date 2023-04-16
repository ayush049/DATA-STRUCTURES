#include <bits/stdc++.h>
using namespace std;

// void DFSR(vector<int>adj[] , vector<int>&status , int i){
//     status[i]=1;
//     cout<<i<<" ";
//     for(int j=0 ; j<adj[i].size() ; j++){
//         if(status[adj[i][j]]==0){ 
//             DFSR(adj , status , adj[i][j]);
//         }
//     }
//}

int DFSR(vector<int>adj[] , vector<int>&status , int i , int x){
    status[i]=1;
    cout<<i<<" ";
    for(int j=0 ; j<adj[i].size() ; j++){
        if(status[adj[i][j]]==0){
            x++;
            x=DFSR(adj , status , adj[i][j] , x);
        } 
    }
    return x;
}
// void DFS(vector<int>Adj[],int N){
//     int m=0;
//     vector<int>status(N,0);
//     // for(int i=0;i<N;i++){
//     //     if(status[i]==0){
//     //         m++;
//     //         DFSR(Adj,status,i);
//     //     }
//     // }

//      vector<int>status(n);
//     vector<int>v;  // vector consisting of element in connected components 
//     int c=0;
//     for(int i=0 ; i<n ; i++){
//         if(status[i]==0){
//             int e=DFSR(adj , status , i , 1);
//             c++;
//             v.push_back(e);
//         }
//     }
//     cout<<endl<<"No. of element in connected components "<<c<<endl;
//     for(int i=0 ; i<c ; i++){
//         cout<<"Component "<<i+1<<" has "<<v[i]<<" elements "<<endl;
//     }
// }

void DFS(vector<int>adj[] , int n){
    vector<int>status(n);
    vector<int>v;  // vector consisting of element in connected components 
    int c=0;
    for(int i=0 ; i<n ; i++){
        if(status[i]==0){
            int e=DFSR(adj , status , i , 1);
            c++;
            v.push_back(e);
        }
    }
    cout<<endl<<"No. of element in connected components "<<c<<endl;
    for(int i=0 ; i<c ; i++){
        cout<<"Component "<<i+1<<" has "<<v[i]<<" elements "<<endl;
    }
}
int main(){
    int n,e,i,a,b;
    cout<<"Enter the number of vertices: ";
    cin>>n;
    cout<<"Enter the number of edges: ";
    cin>>e;
    vector<int>adj[n];
        for(int i=1; i<=e ; i++){
        cout<<"Enter the end points :- ";
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0 ; i<n ; i++){
        int j=0;
        cout<<i<<" : ";
        for(int j=0 ; j<adj[i].size() ; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"DFS ORDER IS :- ";
    DFS(adj , n);
    
}


