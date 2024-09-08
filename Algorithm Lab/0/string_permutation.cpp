#include <bits/stdc++.h>
using namespace std;

void permuteUnique(string &str, int l, int r)
{

    if (l >= str.size())
    {
        cout << str << " ";
    }
    else
    {

        // bool flag[256] = {false};

        for (int i = l; i <= r; i++)
        {

            // if (!flag[str[i]])
            // {
                // flag[str[i]] = true;

                swap(str[l], str[i]);

                permuteUnique(str, l + 1, r);

                swap(str[l], str[i]);
                // }   
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
