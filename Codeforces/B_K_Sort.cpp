#include <iostream>
#include <vector>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll = long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin >> tc;
    while(tc-- > 0) {
        ll n, count = 0;
        cin >> n;
        vector<int> v(n),maxx(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if(is_sorted(v.begin(), v.end())) {
            cout << 0 << endl;
            continue;
        }

        for(ll i = 0; i < n - 1; i++) {
            if(v[i] > v[i + 1]) {
                ll diff =abs( v[i] - v[i + 1]);
                maxx.push_back(diff);
                v[i + 1] += diff;
                count += diff;
            }
        }
        auto maximum=max_element(maxx.begin(),maxx.end());

        if(is_sorted(v.begin(), v.end())) {
            cout << count + *maximum <<endl;
            continue;
        }

       
    }

    return 0;
}
