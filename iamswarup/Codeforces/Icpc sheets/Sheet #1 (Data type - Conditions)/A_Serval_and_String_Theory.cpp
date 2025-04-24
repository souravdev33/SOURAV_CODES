#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool canMakeUniversal(int n, int k, string s)
{
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());

    if (s < rev_s)
    {
        return true;
    }

    if (s == rev_s)
    {
        return false;
    }

    int swaps_needed = 0;

    for (int i = 0; i < n / 2; ++i)
    {
        if (s[i] > rev_s[i])
        {
            swaps_needed++;
        }
    }

    return swaps_needed <= k;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        if (canMakeUniversal(n, k, s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
