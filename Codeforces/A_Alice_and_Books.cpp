

/*---------------------------------------------------------------------------------
                                    ॐ हरे कृष्णा ॐ                                  
                                Author :- Sourav Dev                               
-----------------------------------------------------------------------------------*/

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <iomanip>
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while(tc--) {
        ll n;
        cin>>n;
        vll v(n);

        for (ll i=0;i<n;i++) {
            cin>>v.at(i);
        }

        ll maxx=*max_element(v.begin(),v.end()-1);
        
        ll last=v.back();
       
        ll ans=last+maxx;
        cout<<ans<<endl;
    }

return 0;
}
