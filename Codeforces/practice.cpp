

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using ll=long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

return 0;
}

// Read the array elements
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        // Create an array of maps to keep track of the counts
        map<int, int> mp[n + 1];

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            // Calculate the gcd of index (1-based) and the value at that index
            int gcd = __gcd(i + 1, v[i]);

            // Iterate through all divisors of v[i]/gcd
            for (auto it : dp[v[i] / gcd])
            {  
                // Accumulate the count from the map
                ans += mp[(i + 1) / gcd][it];  
            }

            // Update the map for the current index and divisors
            for (auto it : dp[v[i] / gcd])
            {
                mp[it][(i + 1) / gcd]++;
            }
        }