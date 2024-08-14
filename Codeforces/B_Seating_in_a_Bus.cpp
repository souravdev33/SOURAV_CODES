#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using ll = long long;
using namespace std;

const int N = 2e5 + 5;
int n,v[N],pos[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        
        cin >> n;
      

        bool sorted = 1;

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            pos[v[i]]=i;
        }

        for (int i = v[1] + 1; i <= n; i++)
        {
            if (pos[i - 1] > pos[i])
            {
                sorted = 0;
            }
        }

        for (int i = v[1] - 1; i > 0; i--)
        {
            if (pos[i + 1] > pos[i])
            {
                sorted = 0;
            }
        }

        if (sorted)
            yes
        else
            no
    }
}
