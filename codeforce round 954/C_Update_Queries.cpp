

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
    
    ll tc; 
    cin>>tc;

    while(tc--) {
        ll str_len,ind_count;
        cin>>str_len>>ind_count;

        string str; 
        cin>>str;
    
        vector<int>v(ind_count); 
        for(ll i=0;i<ind_count;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());

        string charr; 
        cin>>charr;
        sort(charr.begin(), charr.end());

        v.erase(unique(v.begin(),v.end()),v.end()); //Duplicate remove korar jonno

        map<int, char>index;
        for (ll i=0;i<v.size();i++){
            index[v[i]]=charr[i];
            ll idx=v[i];
            str[idx-1]=index[idx];
        }

        cout<<str<<endl;
    }

return 0;
}

    