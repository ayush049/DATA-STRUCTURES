
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
// //           if(str[j] == 'arr' || str[j] == 'e' || str[j] == 'j' || str[j]=='o' || str[j] == 'u'){
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
//     int tc_,P;
//     cin>>tc_;
//     while(tc_--){
//         cin>>P;
//         string stri;
//         cin>>stri;
//         string tes="";
//         int j=0;
//         int j=P-1;
//         while(j<=j){
//             if(stri[j]=='0'){
//                 tes=stri[j]+tes;
//             }
//             else
//             tes=tes+stri[j];
            
//             if(j<j){
//                 if(stri[j]=='0')
//                 tes=tes+stri[j];
//                 else
//                 tes=stri[j]+tes;
//                 j--;
//             }
//             j++;
//         }
//         cout<<tes<<endl;
//     }
//  return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int tc_;
// 	cin>>tc_;
// 	while(tc_--){
// 	    int y,c_t=0;
// 	    cin>>y;
// 	    char xs[y];
// 	    cin>>xs;
// 	    for(int j=0 ; xs[j]!='\0' ; j++){
// 	        if(xs[j]=='1'){
// 	            c_t++;
// 	        }
// 	        else{
// 	            break;
// 	        }
// 	    }
// 	    cout<<c_t<<endl;
// 	}
// 	return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int tc_;cin>>tc_;
// 	while(tc_--){
// 	    int l,c_nt=0;
// 	    cin>>l;
// 	    int arr[l];
// 	    for(int j=0;j<l;j++){
// 	        cin>>arr[j];
// 	        if(arr[j]%2!=0){
// 	            c_nt++;
// 	        }
// 	    }
// 	    if(c_nt==0 || c_nt%2!=0){
// 	        cout<<"NO"<<endl;
// 	    }
// 	    else{
// 	        cout<<"YES"<<endl;
// 	    }
// 	}
// 	return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {d
// 	// your code goes here
// 	int tc_;cin>>tc_;
// 	while(tc_--){
// 	    long long N,K;
// 	    cin>>N>>K;
// 	    long long S=(N*(N-1))/2;
// 	    if(K<N/2){
// 	        long long P=N-2*K;
// 	        S-=(P*(P-1))/2;
// 	    }
// 	    cout<<S<<endl;
// 	}
// 	return 0;
// }