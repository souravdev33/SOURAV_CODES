#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

vector<vector<int>> knapsack(int W, int wt[], int val[], int n) {
    vector<vector<int>> k(n+1, vector<int>(W+1));
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= W; j++) {
            if(i == 0 || j == 0) {
                k[i][j] = 0;
            } else if(wt[i-1] <= j) {
                k[i][j] = max(val[i-1] + k[i-1][j-wt[i-1]], k[i-1][j]);
            } else {
                k[i][j] = k[i-1][j];
            }
        }
    }
    return k;
}
int main() {
    int n, W;
    cin >> n >> W;

    int val[n], wt[n];
    for(int i = 0; i < n; i++) {
        cin >> val[i] >> wt[i];
    }

    vector<vector<int>> k = knapsack(W, wt, val, n);
    int max_profit = k[n][W];
    cout << "The maximum profit is: " << max_profit << endl;

    vector<int> indices;
    int i=n, j=W;
    while(i>0 and j>0) {
        if (k[i][j] != k[i-1][j]) {
            indices.push_back(i);
            j-=wt[i-1];
        }
        i--;
    }

    reverse(indices.begin(),indices.end());
    cout << "Index: ";
    for(int it : indices) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}

