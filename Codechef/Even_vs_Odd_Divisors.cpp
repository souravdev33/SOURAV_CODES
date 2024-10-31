#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        set<int> fn;
        set<int> gn;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                {
                    fn.insert(i);
                }
                else
                {
                    gn.insert(i);
                }
            }
        }

        if (fn.size() > gn.size())
        {
            cout << 1 << endl;
        }
        else if (fn.size() == gn.size())
        {
            cout << 0 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}