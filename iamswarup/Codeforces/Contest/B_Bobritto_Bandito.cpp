#include <iostream>
using namespace std;

void sourav()
{
    int n, m, l, r;
    cin >> n >> m >> l >> r;

    int lprime, rprime;

    lprime = max(l, -m);

    rprime = lprime + m;

    if (rprime > r)
    {
        rprime = r;
        lprime = r - m;
    }

    cout << lprime << " " << rprime << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        sourav();
    }

    return 0;
}