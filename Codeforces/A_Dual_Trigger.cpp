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
        string str;
        cin>>str;
        ll count=0;
        bool adjacent=false;
     
        for (int i=0;i<str.size();i++) {
            if(str[i]=='1')count++;
            if(str[i]=='1' and str[i+1]=='1') {
                adjacent=true;
            }
        }

        if(count==0){
            yes
        } 
        else if(count==2 and adjacent){
            no
        } 
        else if(count%2==0) {
            yes
        } 
        else {
            no
        }
    }
return 0;
}
