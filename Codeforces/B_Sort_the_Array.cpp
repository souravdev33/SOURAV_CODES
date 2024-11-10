#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l, r;
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    vector<int> ar = arr;

    sort(ar.begin(), ar.end());
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != ar[i])
        {
            l = ar[i];
            cnt++;
            i++;
        }
        if (arr[i] != ar[i])
        {
            r = ar[i];
            cnt++;
            i++;
        }
        if (cnt >= 2)
        {
            break;
        }
    }

    if (cnt >= 2)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
        cout << l << " " << r << endl;
    }
}