#include <iostream>
#include <algorithm>
#include <string>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void sourav()
{
    string start_time;
    ll x;
    cin >> start_time >> x;

    ll HH = stoi(start_time.substr(0, 2));
    ll MM = stoi(start_time.substr(3, 2));

    ll init_HH = HH, init_MM = MM, count = 0;

    while (1)
    {

        ll reversedMM = (MM % 10) * 10 + (MM / 10);
        
        if (HH == reversedMM)
        {
            count++;
        }

        MM += x;
        if (MM >= 60)
        {
            HH += MM / 60;
            MM %= 60;
        }
        HH %= 24;

        if (HH == init_HH && MM == init_MM)
        {
            break;
        }
    }

    cout << count << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        sourav();
    }

    return 0;
}
