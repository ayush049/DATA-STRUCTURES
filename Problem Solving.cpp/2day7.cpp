#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the nth number: ";
    cin>>n;
    for (int i=0;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }

    return 0;
}



// int main()
// {
//     int n;
//     cout<<"Enter the nth number: ";
//     cin>>n;
//     for (int i=0;i<=n;i++){
//         for(int j=n-1;j>=i;j--){
//             cout<<" ";
//         }
//         //int p=i;
//         for(int k=i;k>=1;k--){
//             cout<<k;
//             //p++;
//         }
//         for(int m=2;m<=i;m++){
//             cout<<m;
//         }
//          cout<<endl;
//     }

//     return 0;
// }




// int main()
// {
//     int n;
//     cout<<"Enter the nth number: ";
//     cin>>n;
//     for (int i=0;i<=n;i++){
//         for(int j=n-1;j>=i;j--){
// //             cout<<" ";
// //         }
//         //int p=i;
//         for(int k=i;k>=1;k--){
//             cout<<"*";
//             //p++;
//         }
//         for(int m=2;m<=i;m++){
//             cout<<"*";
//         }
//          cout<<endl;
//     }

//     return 0;
// }




// int main()
// {
//     int n;
//     cout<<"Enter the nth number: ";
//     cin>>n;
//     for (int i=1;i<n;i=i+2){
        
//         for(int m=0;m<=i;m=m+1){
//             cout<<"*";
//         }
        
//          cout<<endl;
//     }
//     for(int i=1;i<=n;i=i+2){
//         for(int j=i;j<=n;j+=1)
//             cout<<"*";
//         cout<<endl;
//         }
        

//     return 0;
// }
