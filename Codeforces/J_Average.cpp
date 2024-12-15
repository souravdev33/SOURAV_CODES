#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void calculateMean()
{
    int n;
    cin >> n;

    double sum = 0;
    vector<double> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
        sum += i;
    }

    double res = sum / n;
    cout << fixed << setprecision(7) << res << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    calculateMean();

    return 0;
}