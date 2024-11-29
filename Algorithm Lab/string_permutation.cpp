#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void permutation(string &str, int l, int r)
{

    // BASE CASE
    if (l == r)
    {
        cout << str << endl;
    }
    else
    {
        bool flag[256] = {false};
        for (int i = l; i <= r; i++)
        {
            if (!flag[str[i]])
            {
                flag[str[i]]=true;
                swap(str[l], str[i]);
                permutation(str, l + 1, r);
                swap(str[l], str[i]);
            }
        }
    }
}

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    permutation(str, 0, n - 1);
}