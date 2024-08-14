// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define MOD 1000000007
// using ll=long long;
// using namespace std;
 
// // int main(){
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int tc;
// //     cin>>tc;
// //     while(tc--){
// //         int n,q;
// //         cin>>n>>q;
// //         string str1,str2;
// //         cin>>str1;
// //         cin>>str2;
// //         int count=0;
// //         while(q--){
// //             int l,r;
// //             cin>>l>>r;
// //             l--;
// //             r--;

// //             for(int j=l;j<=r;j++){
// //                 sort(str1.begin(),str1.end());
// //                 sort(str2.begin(),str2.end());
                    
// //                     if(str1[l]!=str2[l]){
// //                         str1[l]=str2[l];
// //                         count++;
// //                     }
    
// //             }
// //             cout<<count<<endl;
// //         }
       
// //     }
// // }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll tc;
    cin>>tc;
    while(tc--) {
        int n,q;
        cin>>n>>q;
        string str1,str2;
        cin>>str1>>str2;

        vector<vector<int>>freqstr1(n+1,vector<int>(26,0)); // c(n) to o(26/n)=o(1)
        vector<vector<int>>freqstr2(n+1,vector<int>(26,0));

        // Precompute frequency counts
        for (int i=0;i<n;i++) {
            for (int j=0;j<26;j++){
                freqstr1[i+1][j]=freqstr1[i][j];
                freqstr2[i+1][j]=freqstr2[i][j];
            }
            freqstr1[i+1][str1[i]-'a']++;
            freqstr2[i+1][str2[i]-'a']++;
        }

        while(q--){
            ll l,r;
            cin >>l>>r;
            l--; 
    
            vector<int> freq1(26,0),freq2(26,0);
            for(int i=0;i<26;i++) {
                freq1[i]=freqstr1[r][i]-freqstr1[l][i];
                freq2[i]=freqstr2[r][i]-freqstr2[l][i];
            }

            ll ans=0;
            for(int i=0;i<26;i++){
                ans+=abs(freq1[i]-freq2[i]);
            }

            cout<<ans/2<<endl;
        }
    }
    return 0;
}


