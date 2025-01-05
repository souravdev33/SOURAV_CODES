#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void sourav()
{
    int n, m;
    cin >> n >> m;

    vector<int> seats(m);
    for (int i = 0; i < m; i++)
    {
        cin >> seats[i];
    }

    priority_queue<int> maxpq(seats.begin(), seats.end());
    int max_earning = 0;

    for (int i = 0; i < n; i++)
    {
        int top = maxpq.top();
        maxpq.pop();
        max_earning += top;
        if (top - 1 > 0)
        {
            maxpq.push(top - 1);
        }
    }

    sort(seats.begin(), seats.end());
    int min_earning = 0;

    for (int i = 0; i < n; i++)
    {
        min_earning += seats[0];
        seats[0]--;
        if (seats[0] == 0)
        {
            seats.erase(seats.begin());
        }
        sort(seats.begin(), seats.end());
    }

    cout << max_earning << " " << min_earning << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    // int tc = 1;
    // cin >> tc;

    // for (int i = 1; i <= tc; i++) {
    //     // cout << "Case #" << i << ": ";
    //     sourav();
    // }

    sourav();
    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}
