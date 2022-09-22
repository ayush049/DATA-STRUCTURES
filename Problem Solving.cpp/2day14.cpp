// PROGRAM FOR "Z"

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 || i==n || j==n-i+1)
//                 cout<<"* ";
//             else
//                 cout<<"  ";
//         }
//         cout<<endl;
//     }
// }



// program for "N"

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n || j==i)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}