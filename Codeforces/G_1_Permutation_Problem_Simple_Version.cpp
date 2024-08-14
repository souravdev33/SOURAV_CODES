#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin>>tc;

    while(tc-->0)
    {
        ll n;
        cin>>n;

        vector<vector<int>>dp(n+1);
        for (ll i=1;i<=n;i++)
        {
            for (ll j=i;j<=n;j+=i)
            {
                dp[j].push_back(i);
            }
        }

        vector<ll>v(n);
        for (ll i=0;i<n;i++){
            cin>>v[i];
        }
        map<int,int> mp[n+1];

        ll ans=0;

        for (int i=0;i<n;i++){

            ll gcd=__gcd(static_cast<long long>(i+1),v[i]);

            for (auto it : dp[v[i]/gcd]){
                ans += mp[(i+1)/gcd][it];
            }
            
            for (auto it : dp[v[i]/gcd]){
                mp[it][(i+1)/gcd]++;
            }
        }

        cout<<ans<<endl;
    }

return 0;
}

