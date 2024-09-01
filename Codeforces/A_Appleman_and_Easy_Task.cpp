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
    int n;
    cin >> n;
    vector<string> board(n);

    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int count = 0;

            if (i > 0 and board[i - 1][j] == 'o')
                count++;
            if (i < n - 1 and board[i + 1][j] == 'o')
                count++;
            if (j > 0 and board[i][j - 1] == 'o')
                count++;
            if (j < n - 1 and board[i][j + 1] == 'o')
                count++;

            if (count % 2 != 0)
            {
                no
                return 0;
            }
        }
    }

    yes
    return 0;
}
