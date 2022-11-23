// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int tc,size;
// 	cin>>tc;
// 	while(tc--){
// 	    cin>>size;
// 	    vector<int>v;
// 	    for(int j=0;j<size;j++){
// 	        int l;
// 	        cin>>l;
// 	        v.push_back(l);
// 	    }
// 	    int size = *max_element(v.begin(), v.end());
// 	    int len = size +1;
// 	    vector<int>da_t(len,0);
// 	    for(int K=0;K<size;K++){
// 	        da_t[v[K]]+=1;
// 	    }
// 	    int ans = *max_element(da_t.begin(), da_t.end());
// 	    int op = size-ans;
// 	    cout<<op<<endl;
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int tc;cin>>tc; 
//     while(tc--){
//        int size;cin>>size; 
//        int ac[size];
//        int ma_x = INT_MIN;
//        for(int i=0 ; i<size; i++){
//            cin>>ac[i];
//            if(ac[i]>ma_x)
//                ma_x = ac[i];
//        }
//        cout<<ma_x<<endl;
//    }
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	// your code goes here
// 	int tc;cin>>tc;
// 	while(tc--){
// 	    int size;
// 	    cin>>size;
// 	    int ac[size];
// 	    for(int i=1;i<=size;i++){
// 	        cin>>ac[i];
// 	    }
// 	    int max=INT_MIN;
// 	    for(int i=1;i<=size;i++){
// 	        if(max<ac[i])
// 	            max=ac[i];
// 	    }
// 	    cout<<max<<endl;
// 	}
// 	return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int gcd(int ac, int bd){
//     if(bd==0){
//         return ac;
//     }
//     else{
//         return gcd(bd,ac%bd);
//     }
// }
// int main() {
//    int tc;cin>>tc; 
//    while(tc--){
//        int size,l,c_t=0;
//        cin>>size;
//        int ac[size];
//        for(int i=0 ; i<size ; i++){
//             cin>>ac[i];
//        }
//        l=ac[0];
//        for(int i=0 ; i<size ; i++){
//             l=gcd(l,ac[i]);
//        }
//        for(int i=0 ; i<size ; i++){
//             if(ac[i]==l){
//                 c_t++;
//             }
//        }
//        cout<<size-c_t<<endl;
//    }
 
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// // your code goes here
// long long m_o=998244353;
// int tc;cin>>tc;
// while(tc--){
//    long long l,s_m=0,id;
//    cin>>l;
//    for(long long i=0 ; i<l ; i++){
//        cin>>id;
//        s_m+=id;
//        s_m%=m_o;
//    }
//    long long r=(s_m*(s_m-1))%m_o;
//    cout<<r<<endl;
// }
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int tc;cin>>tc;
//     while(tc--){
//         long long size;
//         cin>>size;
//         string s_t;cin>>s_t;
//         if(size%2==1)
//             cout<<"NO"<<endl;
//         else{
//             long long da_t[26]={'\0'};
//             for(long long i=0 ; i<size ; i++){
//                 da_t[s_t[i]-'arr']++;
//             }
//             bool r=true;
//             for(long long i=0 ; i<26 ; i++){
//                 if(da_t[i]%2==1){
//                     r=false;
//                 }
//             }
//             if(r)
//                 cout<<"YES"<<endl;
//             else
//                 cout<<"NO"<<endl;
//         }
//     }
// }




// #include <iostream>
// using namespace std;

// int main(){
// 	// your code goes here
// 	int tc;cin>>tc;
// 	while(tc--){
// 	    int l,K,id=-1;
// 	    cin>>l>>K;
// 	    int arr[l];
// 	    for(int i=0 ; i<l ; i++){
// 	        cin>>arr[i];
// 	    }
// 	    for(int i=0 ; i<l ; i++){
// 	        if(arr[i]==K){
// 	            id=i;
// 	            break;
// 	        }
// 	    }
// 	    if(l==1 && id!=-1)
// 	        cout<<"Yes"<<endl;
// 	    else if(id!=-1 && id!=l-1)
// 	        cout<<"Yes"<<endl;
// 	    else
// 	        cout<<"No"<<endl;
// 	}
// 	return 0;
// }