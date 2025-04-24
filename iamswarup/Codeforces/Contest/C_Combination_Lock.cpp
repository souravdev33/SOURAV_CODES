#include <iostream>
#include <vector>
#include <algorithm>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using ll = long long;
using namespace std;


bool check_permutation(const vector<int> &p)
{
    int n = p.size();
    for (int i = 0; i < n; i++)
    {
        int rotated_index = (i + n - 1) % n; 
        if (p[rotated_index] != i + 1)
        {
            return false; 
        }
    }
    return true;
}

void sourav()
{
    int n;
    cin >> n;


    if (n == 1)
    {
        cout << "1\n";
        return;
    }
    if (n == 2)
    {
        cout << "-1\n";
        return;
    }

    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }

  
    if (check_permutation(p))
    {
        
        for (int x : p)
        {
            cout << x << " ";
        }
        cout << "\n";
        return;
    }

    cout << "-1\n"; 
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        sourav();
    }

    return 0;
}
