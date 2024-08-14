

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
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    fast;
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        bool flag=false;

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(arr[i],arr[j])<=2){   //এই শর্ত যদি মিলে তাহলে বাকি গসাগুগুলো এমনিতে ২ এর ছোট বা সমান হবে
                    flag=true;
                    break;
                }
            }
        }
    if(flag) yes
    else no
        
    }
return 0;
}