#include <iostream>
#include <bits/stdc++.h>
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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int count[4] = {0};
        for (char ch : str)
        {
            if (ch == 'A')
                count[0]++;
            else if (ch == 'B')
                count[1]++;
            else if (ch == 'C')
                count[2]++;
            else if (ch == 'D')
                count[3]++;
        }
        int ans = 0;
        for (int i = 0; i < 4; i++)
        {
            ans += min(count[i], n);
        }
        cout << ans << endl;
    }
    return 0;
}
