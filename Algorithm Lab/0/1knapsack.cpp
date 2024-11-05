#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapsack(int n, int w, int val[], int wt[])
{
    vector<vector<int>> v(n + 1, vector<int>(w + 1));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {

            if (i == 0 || j == 0)
            {
                v[i][j] = 0;
            }
            else if (wt[i-1] <= j)
            {

                v[i][j] = max(v[i - 1][j], v[i - 1][j - wt[i-1]] + val[i-1]);
            }
            else
            {

                v[i][j] = v[i - 1][j];
            }
        }
    }

    return v[n][w];
}

int main()
{
    int n, w;
    cin >> n >> w;

    int val[n], wt[n];
    for (int i = 0; i < n; i++)
    {
        cin >> val[i] >> wt[i];
    }
    int max_profit = knapsack(n, w, val, wt);
    cout << "The maximum profit is: " << max_profit << endl;

    return 0;
}
