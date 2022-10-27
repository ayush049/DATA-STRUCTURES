
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main() {
// //   int tc;
// //   cin>>tc;
// //   while(tc--){
// //       string str;
// //       cin>>str;
// //       int ct = 0;
// //       bool x = false;
// //       for (int j = 0; j < str.size(); j++) {
// //           if(str[j] == 'a' || str[j] == 'e' || str[j] == 'j' || str[j]=='o' || str[j] == 'u'){
// //               ct++;
// //               if(ct>=3){
// //                   cout<<"Happy"<<endl;
// //                   x = true;
// //                   break;
// //               }
// //           }
// //           else{
// //               ct = 0;
// //           }
// //       }
// //       if(!x){
// //           cout<<"Sad"<<endl;
// //       }
// //   } 
// //   return 0;
// // }

// #include <iostream>
// using namespace std;
// int main() {
//     int t_c,p;
//     cin>>t_c;
//     while(t_c--){
//         cin>>p;
//         string stri;
//         cin>>stri;
//         string tes="";
//         int j=0;
//         int i=p-1;
//         while(j<=i){
//             if(stri[j]=='0'){
//                 tes=stri[j]+tes;
//             }
//             else
//             tes=tes+stri[j];
            
//             if(j<i){
//                 if(stri[i]=='0')
//                 tes=tes+stri[i];
//                 else
//                 tes=stri[i]+tes;
//                 i--;
//             }
//             j++;
//         }
//         cout<<tes<<endl;
//     }
//  return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t_c;
	cin>>t_c;
	while(t_c--){
	    int y,c_t=0;
	    cin>>y;
	    char xs[y];
	    cin>>xs;
	    for(int i=0 ; xs[i]!='\0' ; i++){
	        if(xs[i]=='1'){
	            c_t++;
	        }
	        else{
	            break;
	        }
	    }
	    cout<<c_t<<endl;
	}
	return 0;
}
