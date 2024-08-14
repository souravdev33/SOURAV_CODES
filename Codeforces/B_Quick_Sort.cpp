

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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while(tc--){
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }

        if(is_sorted(v.begin(),v.end())){
            cout<<0<<endl;
            continue; 
        }
       
            ll sorted=0;
            for(ll i=0;i<n;i++){
                if(v[i]==sorted+1){ // (sorted+1) mane 1 pailei oikhan theke sorted count korbe
                    sorted++;
                }
            }
            ll unsorted=n-sorted;
            cout<<(unsorted+k-1)/k<<endl; //unsorted gulor ceil value output

    
     
    } 
return 0;  
}