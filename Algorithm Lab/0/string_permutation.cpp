#include <bits/stdc++.h>
using namespace std;

void permuteUnique(string &a, int l, int r)
{

    if (l == r)
    {
        cout << a << endl;
    }
    else
    {

        bool flag[256] = {false};

        for (int i = l; i <= r; i++)
        {

            if (!flag[a[i]])
            {
                flag[a[i]] = true;

                swap(a[l], a[i]);

                permuteUnique(a, l + 1, r);

                swap(a[l], a[i]);
            }
        }
    }
}

int main()
{
    string str;
    getline(cin, str);
    int n = str.size();

    permuteUnique(str, 0, n - 1);

    return 0;
}
