
#include<iostream>
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define umap unordered_map
#define uset unordered_set
#define mk make_pair
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define ebemplace_back
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
using namespace std;


int main() {
    ll tc; 
    cin >> tc;
    
    while (tc--) {
        ll n; 
        cin >> n;
        
        vll arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        int c = 0, d = *max_element(arr.begin(), arr.end()), ans = 0;
        
        while (c <= d) {
            int f = (c + d) / 2;
            bool ok = true;
            
            for (int i = 0; i < n - 1; i++) {
                if (max(arr[i], arr[i + 1]) <= f) {
                    ok = false;
                    break;
                }
            }
            
            if (ok) {
                ans = f;
                c = f + 1;
            } else {
                d = f - 1;
            }
        }
        
        cout << ans<< endl;
    }
    
    return 0;
}
