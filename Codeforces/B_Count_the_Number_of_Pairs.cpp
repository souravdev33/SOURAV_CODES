#include <iostream>
#include <map>
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
    while (tc-- > 0)
    {
        ll n, k, ans = 0;
        cin >> n >> k;
        string str;
        cin >> str;
 
        map<char, int> freq;
 
        for (auto ch : str)
        {
            freq[ch]++;
        }
 
        for (auto i = 'a'; i <= 'z'; i++)
        {
            ll mini = min(freq[i], freq[i - 'a' + 'A']); //(i-32) eta korleo hoto
            ans += mini;
            freq[i] -= mini;
            freq[i - 'a' + 'A'] -= mini;
        }
 
        for (auto i = 'a'; i <= 'z'; i++)
        {
            ll add = max(freq[i], freq[i - 'a' + 'A']);
            ll mini = min(add / 2, k);
            ans += mini;
            k -= mini;
        }
 
        cout << ans << endl;
    }
    return 0;
}