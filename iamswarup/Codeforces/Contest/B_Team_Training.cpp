#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

int solve(int n, int x, vector<int> &skills)
{

    sort(skills.rbegin(), skills.rend());

    int left = 0, right = n, max_teams = 0;

    auto can_form_teams = [&](int team_count)
    {
        int teams = 0;
        int curr_members = 0;
        int curr_skill = INT_MAX;

        for (int skill : skills)
        {
            curr_members++;
            curr_skill = min(curr_skill, skill);

            if (curr_members * curr_skill >= x)
            {
                teams++;
                curr_members = 0;
                curr_skill = INT_MAX;
            }
        }

        if (curr_members > 0 and curr_members * curr_skill >= x)
        {
            teams++;
        }

        return teams >= team_count;
    };

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (can_form_teams(mid))
        {
            max_teams = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return max_teams;
}

void sourav()
{
    int n, x;
    cin >> n >> x;

    vector<int> skills(n);
    for (int i = 0; i < n; i++)
    {
        cin >> skills[i];
    }

    int result = solve(n, x, skills);
    cout << result << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case #" << i << ": ";
        sourav();
    }

    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}
