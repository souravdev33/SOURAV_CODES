

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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>arr(n);
    string str;

    for(ll i=0;i<n;++i) {
        cin>>arr[i];
    }
    cin>>str;

    ll s=1;
    for(ll i=0;i<n;++i) {
        if (arr[i]<s){
            no
            return 0;
        }
        if (str[i]=='0'){
            s=i+2; 
        }
    }
    yes
return 0;
}
