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
    vector<int>res;
    sort(ar.begin(), ar.end());
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != ar[i])
        {
            res.push_back(ar[i]);
            cnt++;
            i++;
        }
        if (arr[i] != ar[i])
        {
            res.push_back(ar[i]);
            cnt++;
            i++;
        }
        if (cnt > 2)
        {
            break;
        }
    }

    if (cnt > 2)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
        cout << res[0] << " " << res[1] << endl;
    }



}