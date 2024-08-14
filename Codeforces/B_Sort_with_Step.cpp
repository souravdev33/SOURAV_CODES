

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
    while(tc--){
    ll n,k; 
    cin>>n>>k;
    vll v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll count=0;
    for(int i=0;i<n;i++){
        ll x=abs(i-(v[i]-1));
        if(x%k!=0){
            count++;
        }
    }
    if(count==0) cout<<0<<endl;
    else if(count<=2) cout<<1<<endl;
    else cout<<-1<<endl;
}

return 0;
}