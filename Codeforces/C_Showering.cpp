#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, s, m;
        cin >> n >> s >> m;
        vector<pair<int,int>>v;

        for (int i = 0; i < n; i++){
            ll l, r;
            cin >> l>> r;
            v.push_back({l,r});
        }

        sort(v.begin(), v.end());

        int Busy= 0;
        bool flag = false;

    
        if (v[0].first >= s){
            yes
            continue;
        }
 
        for (int i = 0; i < n; i++)
        {
            if (v[i].first - Busy >= s){
                flag = true;
                break;
            }
            Busy = max(Busy, v[i].second);
        }

        if(m-Busy>=s and !flag)  flag= true;
        
        if(flag)
            yes
        else
            no
    }
return 0;
}
