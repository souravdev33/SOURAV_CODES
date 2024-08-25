#include <iostream>
#include <vector>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin >> tc;

    while (tc--)
    {
        ll n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());  
        
        cout << v[n / 2] << endl;
    }
    return 0;
}
