

/*------------------------------------------------------
                     ॐ हरे कृष्णा ॐ                      
                  Author :- Sourav Dev                  
------------------------------------------------------*/

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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll tc;
    cin>>tc;
    while(tc--){
        ll n,f,a,b;
        cin>>n>>f>>a>>b;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll p=0;

        for(ll i=0;i<n;i++){
            ll diff=min(b , abs(p-v[i])*a);
            f-=diff;
            p=v[i];
        }
        if(f>0) yes
        else no


    }
return 0;
}