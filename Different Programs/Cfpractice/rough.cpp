

// // {
// // int j=0;
// // for(j=x.length()-1;j>=0;j--)        
// // {
// //    if(x[j]=='*' && islower(x[j-1]) && isupper(x[j-2])) 
// //       {
// //            swap(x[j-1],x[j-2]);
// //            x.erase(j,1);      
// //       }
// //    if(x[j]=='0')
// //       {
// //          x[j]=x[0];
// //          x.erase(0,1);     
// //       }
// //  }
// //  return x;
      
// // }


//     vector<string> possibleChanges(vector<string> usernames) {
//     int l=usernames.size();
//     vector<string>ans;
//     for(int i=0;i<l;i++){
//         string s=usernames[i];
//         int n=s.length();
//         int f=0;
//         for(int j=0;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 if(s[j]>s[k]){
//                     ans.push_back("YES");
//                     f=1;
//                     break;
//                 }
//             }
//             if(f==1)
//               break;
//         }
//         if(f==0)
//           ans.push_back("NO");
//     }
//     return ans;
// }  
 