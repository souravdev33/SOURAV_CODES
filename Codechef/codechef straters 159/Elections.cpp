#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define ll long long;
using namespace std;

string candidate(int n, int x, vector<int> &A_votes, vector<int> &B_votes)
{
    int count = 0;
    vector<int> votes;

    for (int i = 0; i < n; i++)
    {
        if (A_votes[i] > B_votes[i])
        {
            count++;
        }
        else
        {
            votes.push_back(B_votes[i] - A_votes[i] + 1);
        }
    }

    int majority = (n / 2) + 1;
    if (count >= majority)
    {
        return "YES";
    }

    sort(votes.begin(), votes.end());

    for (auto votes : votes)
    {
        if (x >= votes)
        {
            x -= votes;
            count++;
            if (count >= majority)
            {
                return "YES";
            }
        }
        else
        {
            break;
        }
    }
    return "NO";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;
    vector<string> results;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case #" << i << ": ";
        int n, x;
        cin >> n >> x;

        vector<int> A_votes(n);
        vector<int> B_votes(n);

        for (auto &i : A_votes)
        {
            cin >> i;
        }
        for (auto &i : B_votes)
        {
            cin >> i;
        }

        results.push_back(candidate(n, x, A_votes, B_votes));
    }
    for (const string &i : results)
    {
        cout << i << endl;
    }

    return 0;
}
