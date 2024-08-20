// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// #define MOD 1000000007
// using ll = long long;
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll tc;
//     cin >> tc;

//     while (tc-- > 0)
//     {
//         ll n;
//         cin >> n;
//         vector<int> v(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         map<int, int> freq;

//         for (auto num : v)
//         {
//             freq[num]++;
//         }

//         int maxxx = 0;

//         for (auto it : freq)
//         {
//             maxxx = max(maxxx, it.second);
//         }

//         cout << n - maxxx << endl;
//     }

//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>
using ll = long long;
using namespace std;

int main() {
    
    ll t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> freq(n + 1, 0);  
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            freq[v[i]]++;  
        }
        
    
        int maxFreq = *max_element(freq.begin(), freq.end());
        
    
        int minOperations = n - maxFreq;
        cout << minOperations << endl;
    }
    
    return 0;
}
