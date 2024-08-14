#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define nn "\n"
#define N 100005
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define MOD 1000000087

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, l, d, g;
        cin >> n >> l >> d >> g;

        double area1 = n * l * l / (4.0 * tan(M_PI / n));
        double area2 = l * d * g * n;
        double area3 = d * d * g * g * M_PI * 1.0;

        double area = area1 + area2 + area3;
        printf("%.14f\n", area);
    }

    return 0;
}
