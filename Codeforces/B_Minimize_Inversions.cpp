/*---------------------------------------------------------------------------------
                                    ॐ हरे कृष्णा ॐ                                  
                                Author :- Sourav Dev                               
-----------------------------------------------------------------------------------*/

#include <iostream>
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        vector<int>a(n),b(n+1);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[a[i]];
        }
        for(ll i=1;i<=n;i++){
            cout<<i<<" \n"[i==n];  // It prints A space if i is not equal to n and  newline if i is equal to n.
        }
        for(ll i=1;i<=n;i++) {
            cout<<b[i]<<" \n"[i==n];
        }
    }
return 0;
}
