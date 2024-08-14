#include<iostream>
#include<vector>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n) {
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
    return k[n][W];
}

int main() {
    int n, W;
    cin>>n>>W;
    
    int val[n],wt[n];
    for(int i=0;i<n;i++) {
        cin>>val[i]>>wt[i];
    }
    int max_profit = knapsack(W, wt, val, n);
    cout << "The maximum profit is: " << max_profit << endl;

    
    return 0;
}

