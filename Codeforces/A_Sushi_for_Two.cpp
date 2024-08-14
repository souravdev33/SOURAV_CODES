

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
    ll n;
	cin>>n;
	ll ans=0,tuna=0,eel=0,prev=-1;
	while(n--) {
		ll temp;
		cin>>temp;
		if (prev!=temp){
			prev=temp;
			if(prev==1)
                tuna= 1;
			else 
                eel = 1;
		}
        else if(prev==1)
            tuna++;
		else
            eel++;
		
    ans=max(ans,min(tuna,eel));
	}
	cout<<ans*2<<endl;

return 0;
}