/*---------------------------------------------------------------------------------
                                    ॐ हरे कृष्णा ॐ                                  
                                Author :- Sourav Dev                               
-----------------------------------------------------------------------------------*/

#include <iostream>
#include<bits/stdc++.h>
#include <vector>
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

    int tc;
    cin>>tc;

    while(tc--) {
        ll n,k;
        cin>>n>>k;
        string str;
        cin>>str;

    map<char,int> hash;
    for (char& ch : str) {
        hash[ch]++;
    }
    ll count=0;

    for(auto& it : hash){
        if(it.second %2!=0)count++;
    }

    if(count-1<0)
        count=0;
    else
        count=count-1;

    if(k>=count and k<=n)
         yes
    else
         no
}
return 0; 
}

  
